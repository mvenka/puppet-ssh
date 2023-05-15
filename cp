#!/bin/bash

# Set the file paths for comparison
file1="/path/to/file1.txt"
file2="/path/to/file2.txt"

# Set the email details
email_recipient="support@test.com"
email_subject="File Difference Detected!"
email_body="A difference has been detected between file1 and file2.\n\nSteps to resolve the issue:\n1. Step 1\n2. Step 2\n3. Step 3"

# Compare the files
if diff -q "$file1" "$file2" >/dev/null; then
    # No difference found
    echo "No difference found."
else
    # Difference found
    echo "Difference found! Sending email to $email_recipient..."
    echo -e "$email_body" | mail -s "$email_subject" -a "X-Priority: 1" "$email_recipient"
fi


* * * * * /path/to/script.sh >/dev/null 2>&1
