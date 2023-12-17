#!/bin/bash

# program to check if a number is prime or not
echo -n "enter a number: "
read a

if [[ $a -lt 2 ]]; then
  echo "$a is not prime"
else
  if [[ $a%2 -eq 0 && $a -ne 2 ]]; then
    echo "$a is not prime"
  else
    echo "$a is prime"
  fi
fi
