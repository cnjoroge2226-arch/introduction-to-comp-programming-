//==========================================
//ACTIVITY 1:SUM OF FIRST N NATURAL NUMBERS
//Learning Outcome:Apply a for loop to iterate over a range 
//==========================================

//include the input/output library so we van use cin and cout 
#include <iostream>

//use the standard namespace so we can write cout instead of std::cout
using namespace std;

//the main function -where the program starts running
int main(){

    //declare an interger variable to store the value of n
    //this will hold the upper limit  of our sum (e.g. if n=5, we will sum 1+2+3+4+5)
    int n;

    //// Declare an integer variable to store the running total
// We initialise it to 0 because we haven't added anything yet
int sum = 0;

// Display a prompt asking the user to enter a number
cout << "Enter a positive number (N): ";

// Read the user's input from the keyboard and store it in 'n'
cin >> n;


// Start a for loop with three parts separated by semicolons:
// Part 1: int i = 1; -> Initialisation: start counting from 1
// Part 2: i <= n; -> Condition: keep looping while i is less than or equal to n
// Part 3: i++ -> Increment: increase i by 1 after each iteration
for (int i = 1; i <= n; i++) {

// Add the current value of i to the running total
// This is equivalent to: sum = sum + i
sum += i;

} // End of for loop - execution returns to the condition check

// Display the final result to the user
cout << "The sum of numbers from 1 to " << n << " is: " << sum << endl;

// Return 0 to signal that the program ended successfully
return 0;

}
