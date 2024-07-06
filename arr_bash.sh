#!/bin/bash

arr=("ls -l"
     "echo 'Hello'"
     "sleep 2")

for ((i = 0; i < ${#arr[@]}; i++))
do
    echo "${arr[$i]}"
    eval "${arr[$i]}"
    done
