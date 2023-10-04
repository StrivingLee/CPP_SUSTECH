#!/bin/bash

./clean.sh #clean first
git add -A
git commit -m "$1"
eval "$(ssh-agent -s)"
ssh-add ~/.ssh/github_id_rsa
git push
