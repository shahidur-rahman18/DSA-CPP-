#include <bits/stdc++.h>
using namespace std;

struct Student
{
    string nm;
    int cls;
    char s;
    int id;
};

int main()
{
    int N;
    cin >> N;

    Student a[N];
    char sec[N];

    for (int i = 0; i < N; i++)
    {
        cin >> a[i].nm >> a[i].cls >> a[i].s >> a[i].id;
        sec[i] = a[i].s; // store section separately
    }

    // reverse sections
    reverse(sec, sec + N);

    // assign back
    for (int i = 0; i < N; i++)
    {
        a[i].s = sec[i];
    }

    // print
    for (int i = 0; i < N; i++)
    {
        cout << a[i].nm << " "
             << a[i].cls << " "
             << a[i].s << " "
             << a[i].id << endl;
    }

    return 0;
}