#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    cin.ignore(); // ignore the newline character after reading n
    vector<string> v(n); // creates a vector of n strings
    for(int i = 0; i < n; i++){
        getline(cin, v[i]); // reads a line of input and stores it in the vector
    }
    for(string x : v){
        cout << x << endl;
    }
    return 0;
}