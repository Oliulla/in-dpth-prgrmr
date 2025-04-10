#!/bin/bash

mkdir newdir
if [[ $? -eq 0 ]]; then
  echo "Directory created"
else
  echo "Failed"
fi