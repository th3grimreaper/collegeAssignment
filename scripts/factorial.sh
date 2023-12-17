#!/bin/bash

echo -n "enter a number: "
read number
fact=1

if [[ $number -eq 0 ]]; then
  echo "factorial of $number is $fact"
elif [[ $number -gt 0 ]]; then
  for ((i = 1; i <= $number; i++)); do
    fact=$(($fact*$i))
  done
  echo "factorial of $number is $fact"
else
  echo "enter a positive number"
fi

