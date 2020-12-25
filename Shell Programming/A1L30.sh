#!/bin/bash

#find . -type f -perm -u+r
#find . -type f -exec basename u+r {} \;
#find . -type f -perm /u=w -exec basename {} \;
find . -type f \! -perm /u=wx,g=wx,o=wx -exec basename {} \;
