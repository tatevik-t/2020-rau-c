# 2020-rau-c
code snippets from lessons in RAU (1st semester, C language)

all problem type codes are in [problems](problems) directory

the other are theory type codes

## Index
### Problems
- basics
    - [hours-minutes-seconds](problems/hours-minutes-seconds.c): seconds turn to hours/minutes/seconds
    - [year-week-day](problems/year-week-day.c): days turn to years/weeks/days
    - [third-number-from-the-end](problems/third-number-from-the-end.c): get the third number from the end of integer 
    - [4-digit-backwards](problems/4-digit-backwards.c): backwards typing of 4-digit number
    - [rounded-number](problems/rounded-number.c): round the float without any function 
    - [distance-2-points](problems/distance-2-points.c): calculate the distance between two points
    - [mean-geometric-mean](problems/mean-geometric-mean.c): calculate mean and geometric mean
- loops
    - **while** loop
        - [equal-numbers-in-sequence](problems/equal-numbers-in-sequence.c): find out is the sequence has equal numbers
        - [sum-of-digits](problems/sum-of-digits.c): calculate sum of digits, than sum of digits of that sum, than sum of digits of that sum...
    - **for** loop
        - [ideal-number](problems/ideal-number.c): find out if the number is ideal
        - [sum-of-factorials](problems/sum-of-factorials.c): calculate sum of factorials using 1 loop
        - [is-prime](problems/is-prime.c): isPrime for one element 
        - [are-prime](problems/are-prime.c): arePrime for more than one element (for entered sequence of numbers)
        - [fibonacci-with-next](problems/fibonacci-with-next.c): fibonacci sequence with temporary variable
        - [fibonacci](problems/fibonacci.c): fibonacci sequence without additional variables
    - **mix**
        - [symmetric-squares](problems/symmetric-squares.c): print out the numbers, who's squares are symmetric
- arrays
    - [array-sum-greater-than-5](problems/array-sum-greater-than-5.c): get the sum of elements that are greater than 5
    - [array-positive-even](problems/array-positive-even.c): find the elements that are positive and even at the same time
    - [array-distance-to-mean](problems/array-distance-to-mean.c): substract from each element of array the mean
    - [array-number-less-square](problems/array-number-less-square.c): find the number of elements that are less than their square index
    - [array-less-than-half-of-sum](problems/array-less-than-half-of-sum.c): find the number of elements that are less than half of sum
    - [array-max.c](problems/array-max.c): get the maximum from the array
    - [array-swap-min-and-max](problems/array-swap-min-and-max.c): swap min and max in array
    - [array-sum-till-odd-element](problems/array-sum-till-odd-element.c): find the sum of elements standing before an odd element
    - [array-first-element-from-interval](problems/array-first-element-from-interval.c): find the element in array that is in the given interval
    - [array-sum-till-element-from-interval](problems/array-sum-till-element-from-interval.c): calculate sum of elements till the element from the given interval
    - [array-most-frequent-digit](problems/array-most-frequent-digit.c): find most frequent digit in array numbers
    - [array-neg-pos](problems/array-neg-pos.c): put negative elements on the right part of array, positive on the left
        - [array-neg-pos-2](problems/array-neg-pos-2.c): the other solution
    - [array-type-number-sum](problems/array-type-number-sum.c): sum the numbers presented by arrays
    - [array-even-odd](problems/array-even-odd.c): divide the elements of the array to the evens and odds
    - [missing-element](problems/missing-element.c): find the missing element from the interval [1, N]
        - [missing-element-2](problems/missing-element-2.c): another solution
    - [array-number-of-repeat](problems/array-number-of-repeat.c): count the number of the repeated numbers
    - [arrays-merge](problems/arrays-merge.c): merge two sorted arrays to one sorted array
    - [array-remove-zeros-zip](problems/array-remove-zeros-zip.c): remove zeros from array and zip it
- pointers
    - [pointer-array-backwards](problems/pointer-array-backwards.c): type the elements of an array in backwards using pointers
- functions
    - [function-area-of-rectangle](problems/function-area-of-rectangle.c): write a function for area of rectangle
    - [function-max-digit](problems/function-max-digit.c): write a function that returns the maximum digit of number
    - [function-prime-factors-count](problems/function-prime-factors-count.c): count number of prime factors
    - [function-descending-digits](problems/function-descending-digits.c): find out if digits are in descending order
    - [function-pointers-change-value-of-variable](problems/function-pointers-change-value-of-variables.c): change values of variables using function
    - [function-increment-array](problems/function-increment-array.c): increment every element of an array
    - [function-is-max-symmetric](problems/function-is-max-symmetric.c): is maximum of an array is symmetric
- recursion
    - [recursion-sum](problems/recursion-sum.c): sum till n
    - [recursion-numbers-till-n](problems/recursion-numbers-till-n.c): print numbers till n
    - [recursion-print-array](problems/recursion-print-array.c): print an array
    - [recursion-max-element](problems/recursion-max-element.c): find max element in an array
    - [recursion-sum-frac](problems/recursion-sum-frac.c): calculate 1 + 1/2 + 1/3 + 1/4 ... +1/N 
- string
    - [string-lower-letters](problems/string-lower-letters.c): print only lower letters
    - [string-delete-th](problems/string-delete-th.c): delete all "th" from the string
- multidimension arrays
    - [2d-array-sum-of-matrix](problems/2d-array-sum-of-matrix.c): sum of rows
    - [2d-array-swap-rows-with-max-and-min](problems/2d-array-swap-rows-with-max-and-min.c): swap two rows that contain maximum and minimum
    - [2d-matrix-t](problems/2d-matrix-t.c): transpose the matrix
- dynamic memory
    - [dynamic-array-delete-last-stroke](problems/dynamic-array-delete-last-stroke.c): delete last stroke from dynamic 2d array
    - [dynamic-array-delete-max-stroke](problems/dynamic-array-delete-max-stroke.c): delete stroke with max element from 2d array
    - [dynamic-array-delete-stroke-sim-1](problems/dynamic-array-delete-stroke-sim-1.c): delete stroke similar to first stroke from dynamic array
    - [dynamic-array-delete-column](problems/dynamic-array-delete-column.c): delete specific colon from dynamic array
    - [dynamic-array-sort-by-first-column](problems/dynamic-array-sort-by-first-column.c): sort the dynamic array by first column