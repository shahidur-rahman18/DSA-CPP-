#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    cout << "Size of vector: " << v.size() << endl; 

    // v.clear();
    // cout << "Size of vector after clear: " << v.size() << endl;
    // cout << v[0] << endl; // This will cause undefined behavior since the vector is empty
    v.resize(5,20);
   for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
   }
    return 0;
}