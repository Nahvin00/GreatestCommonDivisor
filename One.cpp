#include <iostream>
using namespace std;

int main()
{
    int numf1,numf2,num1,num2,num3,mink,minj,diff,min=2000;;
    cout<<"Enter two integers: \n";
    cin>>numf1>>numf2;
    num1=numf1;
    num2=numf2;
    if(num1>num2){
        while(num2!=0){
            num3=num2;
            num2=(num1%num3);
            num1=num3;
        }
    }
    else if(num1<num2){
        while(num1!=0){
            num3=num1;
            num1=(num2%num3);
            num2=num3;
        }
    }
    else{
        cout<<"You have entered same number.\n";
        exit(0);
    }
    cout<<"\nThe GCD("<<numf1<<","<<numf2<<") = "<<num3<<endl;
    return 0;
}
