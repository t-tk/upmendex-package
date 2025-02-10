#!/bin/sh

PROJECT=upmendex
TMP=/tmp
PWDF=`pwd`
LATESTRELEASEDATE=`git tag | sort -r | head -n 1`
RELEASEDATE=`git tag --points-at HEAD | sort -r | head -n 1`

if [ -z "$RELEASEDATE" ]; then
    RELEASEDATE="**not tagged**; later than $LATESTRELEASEDATE?"
fi

echo
echo " * Create $PROJECT.zip ($RELEASEDATE)"
git archive --format=tar --prefix=$PROJECT/ HEAD | (cd $TMP && tar xf -)
rm $TMP/$PROJECT/create_archive.sh
#perl -pi.bak -e "s/\\\$RELEASEDATE/$RELEASEDATE/g" $TMP/$PROJECT/README.md
#rm -f $TMP/$PROJECT/README.md.bak

rm $TMP/$PROJECT/.gitignore
rm $TMP/$PROJECT/man/upmendex.man1.ps
mv $TMP/$PROJECT/source/texk/upmendex/* $TMP/$PROJECT/source
rmdir -p $TMP/$PROJECT/source/texk/upmendex

rm -f $PWDF/$PROJECT.zip
cd $TMP && zip -r $PWDF/$PROJECT.zip $PROJECT
rm -rf $TMP/$PROJECT
echo
echo " * Done: $PROJECT.zip ($RELEASEDATE)"
