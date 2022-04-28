/*

Using While Loop

syntax :

while(condition){
  if condition is true print to give output
  variable_name++; //to stop infinitive loop
}

*/

// Write a program to print ascending numbers up to 100.
/*
#include <iostream>
using namespace std;
int main(){
  int a = 1;
  while(a<=100){
    cout<<a<<endl;
    a++;
  }
  return 0;
}
*/

// Write a program to print descending order.

#include <iostream>
using namespace std;
int main(){
  int a = 100;
  while(a >= 1){
    cout<<a<<endl;
    a--;
  }
  return 0;
}
