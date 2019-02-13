#!/bin/sh

# Write a command line that displays the number of users of the infrastructure whose names contain "bon" 
# (that also includes "mr. bonheur").

ldapsearch -Q cn="*bon*" cn | grep "^cn:.*" | wc -l

