/*

Using if statement

Syntax :

if(condition){
  if condition is correct printing here
}
else{
  if condition is not correct printing here
}

*/
// Write a program to check whether you are elegible to vote or not.
#include <iostream>
using namespace std;
int main(){
  int age;
  cout<<"Enter your age to check eligibility: ";
  cin>>age;
  if(age>=18 && age<=120){
    cout<<"You are eligible"<<endl;
  }
  else if(age>=121){
    cout<<"You are dead so cannot vote"endl;
  }
  else{
    cout<<"You are not eligible"<<endl;
  }
  return 0;
}
