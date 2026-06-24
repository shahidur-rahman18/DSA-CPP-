#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {40, 40, 30, 40, 60};
    // vector<int> v1;
    // v1 = v;
    //    v1.pop_back();
    // v1.push_back(100);

    // for (int i = 0; i < v1.size(); i++){
    //     cout << v1[i] << " ";
    // }
    // v1.insert(v1.begin() + 2, 100);
    //  v1.insert(v1.begin() + 2,v.begin(),v.end());
    // v1.erase(v1.begin() + 2);
    // v1.erase(v1.begin() + 2 , v1.begin() + 4);

    // for (int x : v1)
    // {
    //     cout << x << " ";
    // }

    //    v.erase(v.begin(), v.end()-1);

    //     for (int x : v)
    //     {
    //         cout << x << " ";
    //     }
    // replace(v.begin(), v.end(), 40, 10);

    // for (int x : v)
    // {
    //     cout << x << " ";
    // }

    // auto it = find(v.begin(), v.end(), 30);
    // cout << *it << endl;

    //    cout << v.back() << endl;
    //    cout << v.front() << endl;

    // vectore iterator ------------
    for(auto it = v.begin(); it < v.end(); it++)
    {
        cout << *it << " ";
    }
    return 0;
}