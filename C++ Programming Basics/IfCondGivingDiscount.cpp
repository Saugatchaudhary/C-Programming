// Using if condition 
//Write a program to give discount in a product according to location and price range.
#include <iostream>
using namespace std;
int main(){
  int price, discount;
  string location;
  cout<<"Enter the price of product: ";
  cin>>price;
  cout<<"Enter the location: ";
  cin>>location;
  discount = price*10/100;
  if(price>=1000 || location="ktm"){
    cout<<"New Price is: "<<(price-discount)<<endl;
  }
  else{
    cout<<"Price is: "<<price<<endl;
  }
  return 0;
}
