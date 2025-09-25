[comment]: <> (Do not remove this!)
![Points bar](../../blob/badges/.github/badges/points.svg)
**Note that it may take 2-3 minutes for points to update after you push.**



# Fractions Lab
This week you'll be creating a Fraction Class that will allow you to do all the normal operations with a Fraction datatype.


## Grading rubric 100 points


| Points | Requirements                          |
|--------|---------------------------------------|
|        | **Products**                          | 
| 10     | The Function Class Base               |
| 10     | toString() method and stream operator |
| 10     | Addition and Subtraction operators    |
| 10     | Multiplication and Division operators |
| 10     | Comparison Operators                  |
| 10     | Assignment Operators                  |
| 20     | Driver                                |
| 20     | Coding Style                          |

## The Function Class 
Start your work by completing the tests in Base fraction test file.  In order to get these tests to pass you'll need to set up:
1. A constructor that takes a numerator and denominator as arguments
2. Getters for both the numerator and denominator. 
3. Utilize the reduce method I've provided for you. 
4. Throw an exception, with descriptive text, if a fraction is created with a denominator of zero. 

## toString() method and stream operator
Create a toString() method then call if operator<< functions to stream out Fraction and Fraction pointer variables. 


## Addition and Subtraction
You can do the remaining 3 tests in any order.
For the Addition and Subtraction tests to pass you'll need to:
1. Overload the "+" operator when adding to another fraction and to a number like an int or long (Hint: If you create the method for a long, then ints will work too)
2. Overload the "-" operator when subtracting by another fraction and by a number like an int or long

## Multiplication and Division
For the Multiplication and Division tests to pass you'll need to:
1. Overload the "*" operator when multiplying to another fraction and to a number like an int or long
2. Overload the "/" operator when dividing by another fraction and by a number like an int or long

## Assignment: Increment and Decrement
Since the Function Class doesn't have any pointer properties there is no need to overload the operator=.  For this assignment you will need to overload the pre and postfix increment and decrement operators (++a, a++, --a, & a--). 
   
## Comparison
For the comparison tests to pass you need to:
1. Overload the "==" operator
2. Overload the "!=" operator
3. Overload the ">" operator
4. Overload the "<" operator
5. Overload the ">=" operator
6. Overload the "<=" operator
   
**Note:** You only need to compare with other fraction objects.
   
## Driver
Your driver should demonstrate all the methods of the Fraction class.  Including try-catch when the Fraction should throw and exception.  You should be developing your driver as you're developing your Fraction class not waiting until after you done with all the fraction coding to begin working on the driver. 

Before your final commit copy the output of the driver in to the FractionDriverOutput.txt file. 

## Style
Style counts, comment you code, include documenting comments for each method, use good variable names, use good spacing and formatting.  Make your code nice and readable.   