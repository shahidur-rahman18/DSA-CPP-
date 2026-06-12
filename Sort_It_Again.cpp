#include <bits/stdc++.h>
using namespace std;

struct Student
{
    string nm;
    int cls;
    char s;
    long long id;
    int math_marks;
    int eng_marks;
};

bool cmp(Student a, Student b)
{
    if (a.eng_marks == b.eng_marks)
    {
        if (a.math_marks == b.math_marks)
        {
            return a.id < b.id; // ascending
        }
        return a.math_marks > b.math_marks; // descending
    }
    return a.eng_marks > b.eng_marks; // descending
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