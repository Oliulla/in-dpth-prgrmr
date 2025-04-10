#!/bin/bash
echo "Enter the file path:"
read file

if [[ -e "$file" ]]; then
    echo "✅ File exists: $file"
else
    echo "❌ File does not exist: $file"
fi