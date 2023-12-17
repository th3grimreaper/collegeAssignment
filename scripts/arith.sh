#!/bin/bash

echo enter numbers a and b:
read a
read b

function arith {
  echo "addition:" $(($a+$b))
  echo "subtraction:" $(($a-$b))
  echo "multiplication:" $(($a*$b))
  echo "division:" $(($a/$b))
  echo "remainder:" $(($a%$b))
}

arith a b
