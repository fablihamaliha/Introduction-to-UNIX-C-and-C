#!/bin/bash
shopt -s extglob

grep -l "xxxx" ls a*[0-9] 2>/dev/null
