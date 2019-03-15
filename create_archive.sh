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
rm -rf $TMP/$PROJECT/source
#perl -pi.bak -e "s/\\\$RELEASEDATE/$RELEASEDATE/g" $TMP/$PROJECT/README.md
#rm -f $TMP/$PROJECT/README.md.bak

mkdir -p $TMP/$PROJECT/doc/$PROJECT
mv $TMP/$PROJECT/README.md $TMP/$PROJECT/doc/$PROJECT/
mv $TMP/$PROJECT/COPYRIGHT $TMP/$PROJECT/doc/$PROJECT/
mv $TMP/$PROJECT/doc/upmendex.txt $TMP/$PROJECT/doc/$PROJECT/

### move doc/samples/* to doc/$PROJECT/samples/*
mv $TMP/$PROJECT/doc/samples $TMP/$PROJECT/doc/$PROJECT/

mkdir -p $TMP/$PROJECT/doc/man/man1
mv $TMP/$PROJECT/doc/upmendex.1 $TMP/$PROJECT/doc/man/man1/
mv $TMP/$PROJECT/doc/upmendex.man1.pdf $TMP/$PROJECT/doc/man/man1/
rm $TMP/$PROJECT/doc/upmendex.man1.ps

cd $TMP/$PROJECT && zip -r $TMP/$PROJECT.tds.zip *
cd $PWDF

rm -rf $TMP/$PROJECT

echo
echo " * Create $PROJECT.zip ($RELEASEDATE)"
git archive --format=tar --prefix=$PROJECT/ HEAD | (cd $TMP && tar xf -)
rm $TMP/$PROJECT/create_archive.sh
rm -rf $TMP/$PROJECT/source
#perl -pi.bak -e "s/\\\$RELEASEDATE/$RELEASEDATE/g" $TMP/$PROJECT/README.md
#rm -f $TMP/$PROJECT/README.md.bak

rm $TMP/$PROJECT/doc/upmendex.man1.ps

cd $TMP && zip -r $PWDF/$PROJECT.zip $PROJECT $PROJECT.tds.zip
rm -rf $TMP/$PROJECT $TMP/$PROJECT.tds.zip
echo
echo " * Done: $PROJECT.zip ($RELEASEDATE)"
