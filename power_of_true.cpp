#include <iostream>
using namespace std;

int main()
{
    int n = 9;
    int count = 0;
    int temp = n;
    while (n > 1 && n % 2 == 0)
    {
        if (n % 2 == 0)
        {
            n /= 2;
            count++;
        }
    }
    if (n == 1)
    {
        cout << temp << " is a power of 2 (took " << count << " iterations)." << endl;
    }
    else
    {
        cout << temp << " is NOT a power of 2." << endl;
    }
    return 0;
}