// Today we made a cpp program that show armstrog number.

#include <iostream>
using namespace std;

int main()
{
    int num = 153;
    int temp, rem, sum = 0;
    temp = num;
    while (temp != 0)
    {
        rem = temp % 10;
        sum = sum + (rem * rem * rem);
        temp = temp / 10;
    }
    if (sum == num)
    {
        cout << "the given number" << num << " is armstrong";
    }
    else
    {
        cout << "the given number" << num << " is not armstrong";
    }
    return 0;
}