#include <iostream>
using namespace std;

int main(){
    int x;
    cout<<"cual es tu edad?"<<endl;
    cin>>x;
    if(x<18){
        cout<<"eres menor de edad"<<endl;
    }else
    {
        cout<<"eres mayor de edad"<<endl;
    }
    return 0;
}