#include <iostream>

using namespace std;

// function which adds two numbers together
int addNumbers(int one, int two){
    return one + two;
}

// function to subtract numbers
int subNumbers(int one, int two){
    return one - two;
}

int main()
{
    // local variables
    int numOne;
    int numTwo;
    int sum;

    // Ask user prompts
    cout << "Welcome to this simple calculator, please enter a number." << endl;
    cin >> numOne;
    cout << "The number entered was: " << numOne << endl;
    cout << "Now enter the number you wish to add to this: " << endl;
    cin >> numTwo;
    cout << "The 2nd number entered was: " << numTwo << endl;
    // call a function which calculates the sum
    sum = addNumbers(numOne, numTwo);
    cout << "The value of both of these added together: " << sum << endl;

    // End
    return 0;
}



