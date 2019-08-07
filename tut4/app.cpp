#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;

int main(){
ofstream myfile;
myfile.open("hmm.txt", ios::app); /* ios::app means append or add to file */
char fname[50];
char mi[30];
char lname[50];
char phone[50];
char ssn[13];
char pos[50]; 
time_t now = time(0);
char* dt = ctime(&now);
char date[10];
cout << "First name: \n";
cin >> fname;
cout << "Middle name: \n";
cin >> mi;
cout << "Last name: \n";
cin >> lname;
cout << "Phone Number: \n";
cin >> phone;
cout << "Date of birth: \n";
cin >> date;
cout << "Social Security Number: \n";
cin >> ssn;
cout << "Position applying for: \n";
cin >> pos;
myfile << "Date of application: " << dt;
myfile << "Applicant name: " << fname << " " << mi << " " << lname << "\n";
myfile << "Phone number: " << phone << "\n";
myfile << "Date of birth: " << date << "\n" << "SSN: "<< ssn << "\nPostion applying for: ";
myfile << pos << "\n\n";
myfile.close();
return(0);
}

