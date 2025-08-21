#include <iostream>
using namespace std;

int main()
{
    int n = 1256;
    int result = 0;
    while (n != 0)
    {
        int remainder = n % 10;
        result = result * 10 + remainder;
        n /= 10;
    }
    cout << result << endl;
    return 0;
}