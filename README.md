# Functions
## Aim
To study pointer operations

## Software Used
Visual studio code

## Theory

In C++, functions can receive parameters in different ways, influencing how the function manipulates the provided values. Two common methods are Call by Reference and Call by Value:
### Call by Reference
Definition: Call by Reference means passing the address (reference) of the actual parameters to the function. This allows the function to modify the original values.

Working: The function receives pointers to the variables, and operations performed inside the function affect the original variables directly.

### Call by Value
Definition: Call by Value means passing a copy of the actual parameters to the function. Changes made to the parameters inside the function do not affect the original variable

## Algorithms
### Call by value
Start
Define Function swap(int x, int y)
Input: Two integers x and y
Output: Swapped values of x and y
Inside Swap function:
Create a temporary variable temp
Assign the value of x to temp
Assign the value of y to x
Assign the value of temp to y
Inside main Function
Define two integers a and b with 5 and 2
Call swap(a, b)
Print the value of a
Print the value of b
End
### Call by reference
Start
Define Function swap(int *x, int *y)
Input: Pointers to two integers x and y
Output: Swapped values of the integers pointed to by x and y
Steps:
Make a temporary variable temp
Assign the value pointed to by x to temp (temp = *x)
Assign the value pointed to by y to the location pointed to by x (*x = *y)
Assign the value of temp to the location pointed to by y (*y = temp)
In main Function
Define integers a and b with 5 and 2.
Call swap(&a, &b) function
Print the value of a
Print the value of b
End
## Conclusion
We learnt about the operations on pointers
