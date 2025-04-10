#!/bin/bash
if [[ $name == "root" ]]; then
    echo "You are root!"
else
    echo "You are $USER"
fi