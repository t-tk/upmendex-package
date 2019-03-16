#!/bin/sh

PROJECT=upmendex
TMP=/tmp
PWDF=`pwd`
LATESTRELEASEDATE=`git tag | sort -r | head -n 1`
RELEASEDATE=`git tag --points-at HEAD | sort -r | head -n 1`

if [ -z "$RELEASEDATE" ]; then
    RELEASEDATE="**not tagged**; later than $LATESTRELEASEDATE?"
fi

echo " * Create $PROJECT.tds.zip"
rm -rf $TMP/$PROJECT/*
git archive --format=tar --prefix=$PROJECT/ HEAD | (cd $TMP && tar xf -)
rm $TMP/$PROJECT/create_archive.sh
#perl -pi.bak -e "s/\\\$RELEASEDATE/$RELEASEDATE/g" $TMP/$PROJECT/README.md
#rm -f $TMP/$PROJECT/README.md.bak

SRC_DIR=$TMP/$PROJECT/Build/source/texk/$PROJECT
DOC_DIR=$TMP/$PROJECT/Master/texmf-dist/doc/$PROJECT
MAN_DIR=$TMP/$PROJECT/Master/texmf-dist/doc/man/man1

mkdir -p $SRC_DIR
mv $TMP/$PROJECT/source/* $SRC_DIR/
rmdir $TMP/$PROJECT/source

mkdir -p $DOC_DIR
mv $TMP/$PROJECT/README.md $DOC_DIR/
mv $TMP/$PROJECT/COPYRIGHT $DOC_DIR/
mv $TMP/$PROJECT/doc/upmendex.ja.txt $DOC_DIR/

### move doc/samples/* to doc/$PROJECT/samples/*
mv $TMP/$PROJECT/doc/samples $DOC_DIR/
rmdir $TMP/$PROJECT/doc

mkdir -p $MAN_DIR
mv $TMP/$PROJECT/man/upmendex.1 $MAN_DIR/
mv $TMP/$PROJECT/man/upmendex.man1.pdf $MAN_DIR/
rm $TMP/$PROJECT/man/upmendex.man1.ps
rmdir $TMP/$PROJECT/man

cd $TMP/$PROJECT && zip -r $TMP/$PROJECT.tds.zip *
cd $PWDF

rm -rf $TMP/$PROJECT

echo
echo " * Create $PROJECT.zip ($RELEASEDATE)"
git archive --format=tar --prefix=$PROJECT/ HEAD | (cd $TMP && tar xf -)
rm $TMP/$PROJECT/create_archive.sh
#perl -pi.bak -e "s/\\\$RELEASEDATE/$RELEASEDATE/g" $TMP/$PROJECT/README.md
#rm -f $TMP/$PROJECT/README.md.bak

rm $TMP/$PROJECT/man/upmendex.man1.ps

rm -f $PWDF/$PROJECT.zip
cd $TMP && zip -r $PWDF/$PROJECT.zip $PROJECT $PROJECT.tds.zip
rm -rf $TMP/$PROJECT $TMP/$PROJECT.tds.zip
echo
echo " * Done: $PROJECT.zip ($RELEASEDATE)"
