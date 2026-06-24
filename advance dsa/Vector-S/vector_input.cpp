#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n); // creates a vector of n integers
    // vector<int> v;
    for(int i = 0; i < n; i++){
        // int x;
        // cin >> x;
        // v.push_back(x); // adds the input integer to the end of the vector
        cin >> v[i];
    }
    for(int x : v){
        cout << x << " ";
    }
    return 0;
}