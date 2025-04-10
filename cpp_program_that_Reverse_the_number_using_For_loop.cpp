#include <iostream>
using namespace std;

int main()
{
    int num, rev = 0;
    cout << "Enter the number:";
    cin >> num;
    for (int temp = num; temp != 0; temp /= 10)
    {
        int r = temp % 10;
        rev = rev * 10 + r;
    }
    cout << "The reverse number is " << num << " is " << rev;
    return 0;
}