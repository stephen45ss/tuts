#include <iostream> /* tells the processor to load iostream or input/output stream header file so you can use cin and cout */
using namespace std; /* this is here so you dont have to do std:: before every cout */

int main(){ /* start of function main ALWAYS need this function in ALL C++ programs */
char name[50]; /* This is our character array called name with a max input of 50 characters */
cout << "What is your name?\n"; /*Prints whats in quotes by using cout */
cin >> name; /* typed keyboard characters are placed into the character array called name */
cout << "Hello, " << name << "!\n"; /* Prints hello plus whatever was put into the character array name */
return(0); /* I AlWAYS do this at the end of my code */
} /* ends the main function */
