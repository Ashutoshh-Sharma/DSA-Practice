#include<iostream>
#include <cmath>
#include <typeinfo>

using namespace std;

int main() { 
    int n = 8;
    int answer = 0;
    int i = 0;
    // Convert decimal to binary
    while(n != 0){
        int remainder = n & 1; // Get the least significant bit
        answer = (remainder * pow(10, i)) + answer;
        i++;
        n = n >> 1; // Right shift to divide by 2
    }
    cout << answer << endl;
    cout << typeid(answer).name() << endl; // Output the type of answer
    return 0;
}