#include <iostream>
#include <cmath>

using namespace std;

// This program converts a negative decimal number to binary in reverse order
int main()
{
    int n = -8; // Example negative number
    if (n < 0)
    {
        n = abs(n); // Convert to positive for binary conversion
    }
    int answer = 0;
    int i = 0;
    while (n != 0)
    {
        int remainder = n & 1; // Get the least significant bit
        answer = (remainder * pow(10, i) + answer);
        i++;
        n = n >> 1; // Right shift to divide by 2
    }
    string temp = to_string(answer);
    for (int j = 0; j < temp.size(); j++)
    {
        if (temp[j] == '0')
            temp[j] = '1';
        else if (temp[j] == '1')
            temp[j] = '0';
    }

    int carry = 1;
    for (int j = temp.size() - 1; j >= 0; j--) {
        if (temp[j] == '1' && carry == 1) {
            temp[j] = '0';
            carry = 1;
        } else if (temp[j] == '0' && carry == 1) {
            temp[j] = '1';
            carry = 0;
        }
    }

    cout << temp << endl;
    return 0;
}