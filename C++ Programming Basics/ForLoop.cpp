/*

For Loop

syntax :

for(condition){
Printing here what we want

}

*/

#include <iostream>
using namespace std;
int main(){
  int loop;
  cout<<"Enter number of loops: ";
  cin>>loop;
  for(int i = 1; i <= loop; i++){
    cout<<"Multiple Loops"<<i<<endl;
  }
  return 0;
}
