#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    time_t ct;
    time(&ct);

    cout << ctime(&ct);
    return 0;
}
