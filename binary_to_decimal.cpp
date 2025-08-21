#include <iostream>
#include <cmath>

int main()
{
    int n = 1000; // Example binary number
    int answer = 0;
    int i = 0;
    while (n != 0)
    {
        int remainder = n % 10;
        if (remainder == 1)
        {
            answer = answer + pow(2, i);
        }
        i++;
        n = n/10;
    }
    std::cout << answer << std::endl; // Output the decimal equivalent of the binary number
    return 0;
}