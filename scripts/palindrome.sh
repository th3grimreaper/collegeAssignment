#!/bin/bash

echo -n "enter a string or a number: "
read variable
reverse=`echo $variable | rev`

if [[ $variable == $reverse ]]; then
  echo it is a palindrome
else
  echo it is not a palindrome
fi
