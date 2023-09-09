#!/bin/bash

# Check if the number of arguments is correct
if [ $# -ne 2 ]; then
    echo "Usage: $0 file1 file2"
    exit 1
fi

# Define functions to extract and compare the relevant data while ignoring the first 17 characters
extract_data() {
    # Use cut to remove the first 17 characters from each line
    cut -c 18- "$1"
}

file1_data=$(extract_data "$1")
file2_data=$(extract_data "$2")

# Convert the extracted data into arrays
IFS=$'\n' read -rd '' -a file1_lines <<<"$file1_data"
IFS=$'\n' read -rd '' -a file2_lines <<<"$file2_data"

# Compare the lines in the two files
differences_found=false

for i in "${!file1_lines[@]}"; do
    if [ "${file1_lines[i]}" != "${file2_lines[i]}" ]; then
        differences_found=true
        echo "Difference found at line $((i + 1)):"
        echo "File 1: ${file1_lines[i]}"
        echo "File 2: ${file2_lines[i]}"
    fi
done

# Check if differences were found
if [ "$differences_found" = true ]; then
    echo "Content of files is different (timestamps excluded)."
else
    echo "Content of files is identical (timestamps excluded)."
fi