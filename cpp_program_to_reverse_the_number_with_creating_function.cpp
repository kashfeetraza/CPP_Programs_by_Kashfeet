// C++ Program to reverse the number digit by creating Function
#include <iostream>
using namespace std;

int revnum(int x)
{
    int rev = 0, r;
    int temp = x;
    while (temp != 0)
    {
        r = temp % 10;
        rev = rev * 10 + r;
        temp = temp / 10;
    }
    return rev;
}
int main()
{
    int num;
cout<<"Enter the num:";
cin>>num;
cout<<"The reverse value called by function is :"<<revnum(num);
    return 0;
}
