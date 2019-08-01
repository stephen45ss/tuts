#include <iostream> /* Needed for cin and cout */
#include <math.h> /* Needed for the math to work */
#include <string.h> /* need this header file for string variable to work */
using namespace std; /* use namespace std to prevent having to add std:: infront oof every cin and cout */

double a;
double b;
double c;

void add(double, double){
c = a + b;
cout << a << " + " << b << " = " << c << "\n";
}
void sub(double, double){
c = a - b;
cout << a << " - " << b << " = " << c << "\n";
  }
void mul(double, double){
c = a * b;
cout << a << " * " << b << " = " << c << "\n";
  }
void div(double, double){
c = a / b;
cout << a << " / " << b << " = " << c << "\n";
  }

int main(){
a:
string option; /* our option string variable to change math operations */
cout << "\n Welcome to Reaper's calculator for learning purposes ONLY!!\n";
cout << "choose an option:\n";
cout << " Add | Sub | Mul | Div | Exit \n";
cout << "Options are case sensitive remember!!!\n";
cin >> option; /* cin stores what you type into option variable */
if ( option == "Add" | option == "a" | option == "+"){ /* this line checks the string option to see if it option equlas Add and if it does it does the instructions inside the brackets */
cin >> a;
cout << "+ \n" ;
cin >> b;
add(a,b); /* call add fuction from line 10 */
goto a; /* goes back to a: on line 28 */
}
else if (option == "Sub" | option == "s" | option == "-"){
cin >> a;
cout << "- \n";
cin >> b;
sub(a,b); /* call subtract function from line 14 */
goto a; /* goes to a: on line 28 */
}
else if ( option == "Mul" | option == "m" | option == "*"){
cin >> a;
cout << "* \n";
cin >> b;
mul(a,b); /* Call multiply function from line 18 */
goto a;
}
else if ( option == "Exit" | option == "e"){
cout << "Thanks for using Reaper's calculator!!\n";
exit(0); /* calls exit to ofcourse exit program */
}
else if( option == "Div" | option == "d" | option == "/" ){
cin >> a;
cout << "/ \n";
cin >> b;
div(a,b); /* call divide fuction from line 22 */
goto a;
}
else { /* basically if no other conditions are met whats in brackets gets executed */
cout << "Not a option try again!\n";
goto a;}
return(0);
}
