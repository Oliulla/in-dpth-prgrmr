#!/bin/bash
SRC="./"
DEST="./backup_$(date +%F_%T)"
mkdir -p "$DEST"
cp -r "$SRC" "$DEST"
echo "Backup done to $DEST"