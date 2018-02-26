# Lab3 Numerical Errors----Lucas Manker
Numerical Errors Lab

## Problem 1
n=10
sum=55

## Problem 2
n=300
sum=-20386

## Problem 3
n=10000000

## Problem 4
When the number becomes too large and the sign bit changes from 0 to 1.

n=50

## Problem 5
n=250

## Problem 6
the float's answer is 0.0500001.
the double's answer is 0.05.

## Problem 7
The float puzzle loops through six times, while the double only loops through five.
This happens because of the problems with fractions that do not have a base of two
in binary.


## Problem 8
The reason this happens is clearly seen if precision is set higher in C++. 
In the float version of the puzzle (the one that went through six times),
the i values are as follows--->
i = 3.4000000953674316
i = 3.6000001430511475
i = 3.8000001907348633
i = 4
i = 4.1999998092651367
i = 4.3999996185302734

so it can be seen that because of how decimals without a base of 2 are stored
in binary the 4.4 is actually stored as 4.3999996185302734 which meant the 
loop incorrectly cycled through an extra time.  