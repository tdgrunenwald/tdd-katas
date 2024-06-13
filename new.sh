#!/usr/bin/env bash
if [[ -z "$1" ]]; then
	echo "Usage: $0 <name>"
	exit 1
fi

TEMPLATEPATH=$(dirname $0)/template/cpp
NEWPROJECTPATH=$(dirname $0)/$1

mkdir -p ./$1
for FILE in $(ls -A "$TEMPLATEPATH"); do
	cp -r $TEMPLATEPATH/$FILE $NEWPROJECTPATH/
done

