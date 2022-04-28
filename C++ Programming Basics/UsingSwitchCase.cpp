/*

Using switch case
syntax :
switch (variable_name){
  case 1 :
  printing what we want
  break;
  default :
  rinting what we want
}

*/

// Write a program to show days using switch case and number.
#include <iostream>
using namespace std;
int main(){
  int days;
  cout<<"Enter the day number: ";
  cin>>days;
  switch(days){
    case 1:
      cout<<"Sunday"<<endl;
      break;
    case 2:
      cout<<"Monday"endl;
      break;
    case 3:
      cout<<"Tuesday"endl;
      break;
    case 4:
      cout<<"Wednesday"endl;
      break;
    case 5:
      cout<<"Thrusday"endl;
      break;
    case 6:
      cout<<"Friday"endl;
      break;
    case 7:
      cout<<"Saturday"endl;
      break;
    default:
      cout<<"Invalid Input";
  }
  return 0;
}


