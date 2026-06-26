# day 04: Functions in Cpp

## Function
A function is a named block of code that performs a specific task.
We can call it from other parts of your program.
Functions can take input parameters and return a result.


## Pass by value
    in this if we change in passed value then it  will not change in refernce .
    void(int n){
        n++;
    }

## Pass by reference 
    void(int &n){
        n++;
    }

    in this if we change in passed value then it also will change in refernce .
    basically it used same memory address as refernce but in paas by value copy the value and create new memory address.