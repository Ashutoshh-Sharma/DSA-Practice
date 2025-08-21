#include<iostream>
using namespace std;

// This program converts a decimal number to binary in reverse order
int main(){
    int n = 8;
    int answer = 0;
    int i = 0;

    while( n != 0 ){
        int remainder = n & 1; // Get the least significant bit
        answer = (answer * 10) + remainder; // Build the binary number in reverse
        i++;
        n = n >> 1; // Right shift to divide by 2
    }
    cout << answer << endl; // Output the binary number in reverse order

    return 0;
}