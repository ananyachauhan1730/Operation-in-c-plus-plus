\\Ananya Chauhan
\\24070123157
\\Entc B3
#include<iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter a number:";
    cin >> a;
    if(a > 0)
    {
        cout << "Entered Number is Positive"; 
    }
    else if(a < 0) 
    {
        cout << "Entered Number is Negative"; 
    }
    else 
    {
        cout << "Entered Number is 0"; 
    }
    return 0;
}

/*
output:
Enter Number: 6
Entered Number is Positive

Enter a number:-9
Entered Number is Negative
*/
