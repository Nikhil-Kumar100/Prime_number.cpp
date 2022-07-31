#include<iostream>//This is a library cout and cin is used to input and output data.
using namespace std;//This is a library to use cout and cin.
int main(){//This is a function to start the program.
    int number;//This is a variable to store the number.
    cout<<"Enter a Number and check whether it is prime or not :-  ";//This is a statement to ask user to enter a number.
    cin>>number;//This is a statement to take input from user.
        if(number==2){//This is a statement to check whether the number is 2 or not.
            cout<<"Prime Number :- "<<number;//This is a statement to print the number.
        }
        else if(number%2==0){//This is a statement to check whether the number is divisible by 2 or not.
            cout<<"Not Prime Number :- "<<number;//This is a statement to print the number.
        }
        else{//This is a statement to check whether the number is not divisible by 2 or not.
            cout<<"Prime Number :- "<<number;//This is a statement to print the number.
        }
    
    return 0;//This is a statement to return 0 to main function and end of program is here and this is for end of program.
}//This is a statement to end the program.
