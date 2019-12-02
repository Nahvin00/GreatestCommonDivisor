#include <iostream>

using namespace std;

int main()
{
    int nume1,nume2,nume3,numf1,numf2,num1,num2,num3;
    cin>>numf1>>numf2;
    num1=numf1;
    nume1=numf1;
    num2=numf2;
    nume2=numf2;
    if(num1>num2){
        while(num2!=0){
            num3=num2;
            num2=(num1%num3);
            num1=num3;
        }
    }
    cout<<num3;
