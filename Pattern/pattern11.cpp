#include<iostream>
using namespace std;
int main(){
    int n;
    char ch = 'A';
    cout<<"Enter the number of rows: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<ch<<" ";
            ch++;
        }
        ch = 'A'; // Reset character for each row
        cout<<endl;
    }
}