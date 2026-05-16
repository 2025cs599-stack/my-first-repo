#include <iostream>
using namespace std;

int main() 
{
    int num;

    cout << "Enter an integer: ";
    cin >> num;
    if (num > 0) 
    {
        cout << "You entered a positive number" << endl;
    } 
    else if (num < 0) 
    {
        cout << "You entered a negative number" << endl;
    } 
    else 
    {
        cout << "The number is zero" << endl;
    }

    cout<<"This is a new line for changing purpose"<<endl;

    cout << "Final Update";

    cout << "Saturday Practice";

    return 0;
}