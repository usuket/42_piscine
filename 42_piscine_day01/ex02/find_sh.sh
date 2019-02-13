#!/bin/sh
find . -name "*.sh" \
	| sed 's/.*\///' \
	| tr -d ".sh"
