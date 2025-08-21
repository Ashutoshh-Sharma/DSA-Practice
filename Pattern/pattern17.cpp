#include<iostream>
using namespace std;
int main(){
    int n;
    char ch = 'D';
    cout<<"Enter the number of rows: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<ch<<" ";
            ch++;
        }
        ch-= (i+1); // Reset character for next row
        cout<<endl;
    }   
}
