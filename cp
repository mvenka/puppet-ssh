#!/bin/bash

# Define file paths
file1="/path/to/file1.txt"
file2="/path/to/file2.txt"

# Perform MD5 checksum on the files
md5_1=$(md5sum "$file1" | awk '{ print $1 }')
md5_2=$(md5sum "$file2" | awk '{ print $1 }')

# Compare the MD5 checksums
if [ "$md5_1" != "$md5_2" ]; then
    # Send email using the mail command
    subject="File mismatch"
    body="There is a mismatch between $file1 and $file2. Please follow these steps to fix it: ..."
    echo "$body" | mail -s "$subject" -S importance=high support@abc.com
fi


* * * * * /path/to/script.sh >/dev/null 2>&1
