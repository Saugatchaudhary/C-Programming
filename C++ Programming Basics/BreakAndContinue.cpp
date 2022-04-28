/*

Break and Continue

Break : Terminate from loop or if condition or while
Continue : Bypass

Syntax :

//Break syntax
for (inatilizer; condition; increasing/Decreasing){
    if(condition){
        break;
    }
}
//Continue syntax
for (inatilizer; condition; increasing/Decreasing){
    if(condition){
        continue;
    }
}

*/
/*
//Write a program to ascending numbers and use break.
#include <iostream>
using manespace std;
int main(){
  int a=5;
  for(int i=1; i<=a; i++){
    if(i==3){
      break;
    }
    cout<<"output is: "<<i<<endl;
  }
  return 0;
}
*/


//Write a program to print descending number using continue.
#include <iostream>
using namespace std;
int main(){
  for(int i = 5; i>=1; i--){
    if(i == 3){
      continue;
    }
    cout<<"Output is: "<<i<<endl;
  }
  return 0;
}









