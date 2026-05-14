#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two numbers "<<endl;
    cin>>a;
    cin>>b;

    cout<<"1- Add \n 2- Subtract \n 3- Multiply \n 4- Divide "<<endl;
    int choice;     
    cin>>choice;
    switch(choice)
    {
        case 1:
            cout<<"Sum is "<<a+b<<endl;
            break;
        case 2:
            cout<<"Difference is "<<a-b<<endl;
            break;
        case 3:
            cout<<"Product is "<<a*b<<endl;
            break;
        case 4:
            if(b!=0)
                cout<<"Quotient is "<<a/b<<endl;
            else
                cout<<"Cannot divide by zero"<<endl;
            break;
        default:
            cout<<"Invalid choice"<<endl;
    }

    
    return 0;
}