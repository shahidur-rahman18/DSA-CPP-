#include <bits/stdc++.h>
using namespace std;

struct Student
{
    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
};

bool cmp(Student a, Student b)
{
    int totalA = a.math_marks + a.eng_marks;
    int totalB = b.math_marks + b.eng_marks;

    if (totalA == totalB)
    {
        return a.id < b.id; // id ascending
    }

    return totalA > totalB; // total marks descending
}

int main()
{
    int N;
    cin >> N;

    Student a[N];

    for (int i = 0; i < N; i++)
    {
        cin >> a[i].nm >> a[i].cls >> a[i].s
            >> a[i].id >> a[i].math_marks >> a[i].eng_marks;
    }

    sort(a, a + N, cmp);

    for (int i = 0; i < N; i++)
    {
        cout << a[i].nm << " "
             << a[i].cls << " "
             << a[i].s << " "
             << a[i].id << " "
             << a[i].math_marks << " "
             << a[i].eng_marks << endl;
    }

    return 0;
}