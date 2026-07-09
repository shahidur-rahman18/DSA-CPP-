#include <bits/stdc++.h>
using namespace std;

void fun(int *p)
{ 
    // *p=100;
    int y = 100;
    p = &y;

    // cout << "fun : " << *p << endl;
}


int main()
{
    int x = 10;
    int *p = &x; 
    fun(p);

    // cout<< "mAIN : " << *p<<endl;
    cout << *p << endl;

    return 0;
}