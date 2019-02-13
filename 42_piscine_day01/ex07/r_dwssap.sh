#!/bin/sh
# display without comment line
cat /etc/passwd \
	| grep -v -e '^\s*#' -e '^\s*$' \
	| sed -e "1d; n; d" \
	| cut -d ":" -f 1 \
	| rev \
	| sort -r \
	| sed -n "${FT_LINE1},${FT_LINE2}p" \
	| tr '\012' ', ' \
	| sed -e 's/,/, /' \
	| sed -e 's/,$/./'
