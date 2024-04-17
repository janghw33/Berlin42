#!/bin/zsh

# Check if the number of arguments provided is exactly 1
if [[ "$#" -ne 1 ]]; then
    echo "Usage: $0 <N>"
    exit 1
fi

# Get the value of N from the first argument
N=$1

# Loop through numbers 00 to N
for i in {00..$N}; do
    # Create folder with name ex followed by the padded number
    mkdir -p ex$i
done

echo "Folders ex00 to ex$N created successfully."

