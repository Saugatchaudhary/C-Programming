/*

Ternary Operators

syntax :

data_type variable_name1;

We cannot use ternary operator directly in data_type declaration otherwise output will be always value2


data_type variable_name2 = (condition) ? same_vaiable_name = value1 : same_variable_name = value2;
so using this syntax when value is input in variable_name1


*/
#include <iostream>
using namespace std;
int main(){
  int a;
  cout<<"Enter the value of a: ";
  cin>>a;
  int b = (a == 5 || a == 10) ? b = 1 : b = 0;
  cout<<b<<" is output"<<endl;
  return 0;
}
