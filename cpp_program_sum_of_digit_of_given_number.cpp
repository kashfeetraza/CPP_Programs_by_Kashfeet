#include <iostream>
using namespace std;

int main()
{
    int val, num, sum = 0;
    cout << "Enter the value:";
    cin >> val;
    num = val;
    while (num != 0)
    {
        sum = sum + num % 10;
        num = num / 10;
    }
    cout << "The sum of value is " << val << " is " << sum;
    return 0;
}