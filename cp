#!/bin/bash

# File paths
file1="/path/to/file1.txt"
file2="/path/to/file2.txt"

# Calculate MD5 checksums
md5sum1=$(md5sum "$file1" | awk '{print $1}')
md5sum2=$(md5sum "$file2" | awk '{print $1}')

# Compare MD5 checksums
if [[ $md5sum1 != $md5sum2 ]]; then
    # Email details
    recipient="support@abc.com"
    subject="File mismatch"
    body="The MD5 checksums of $file1 and $file2 do not match.\n\nPlease follow the steps below to fix it:\n\n1. Step 1\n2. Step 2\n3. Step 3"

    # Send email with high priority
    (echo "To: $recipient"
    echo "Subject: $subject"
    echo "X-Priority: 1 (Highest)"
    echo
    echo "$body") | sendmail -t
fi


* * * * * /path/to/script.sh >/dev/null 2>&1
