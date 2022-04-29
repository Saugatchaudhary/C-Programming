#include <iostream>
using namespace std;
int main(){
    string quest;
    cout<<"Are you going to dating?"<<endl;
    cin>>quest;
    while (quest == "no")
    {
        
        cout<<"Still not going?"<<endl;
        cin>>quest;
        if (quest == "yes")
        {
            cout<<"Thank you";
        }

        
    }
    
        
    return 0;
}
