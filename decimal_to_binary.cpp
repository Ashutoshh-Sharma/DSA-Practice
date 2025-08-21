#include<iostream>
#include <typeinfo>

using namespace std;

// void decimalToBinary(int n) {
//     if(n==0){
//         cout << "0";
//         return;
//     }
//     string result = "";
//     while(n > 0){
//         int remainder = n%2;
//         n = n/2;
//         result = to_string(remainder) + result;
//     }
//     cout << result << endl;
//     return;
// }

void decimalToBinary(int n) {
    if(n == 0) {
        cout << "0" << endl;
        return;
    }
    string result = "";
    while(n != 0) {
        int remainder = n & 1;
        result = to_string(remainder) + result;
        n = n >> 1; // Right shift to divide by 2
    }
    cout << stoi(result) << endl << typeid(stoi(result)).name() << endl;

    return;
}

int main(){
    decimalToBinary(8);
    return 0;
}