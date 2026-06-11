#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
   int cls;
    int roll;
    double cgpa;

    Student(int c, int r, double cg)
    {
        cls = c;
        roll = r;
        cgpa = cg;

    }
};
int main()
{
    Student ramim(5,1, 3.8) ;
 

    cout << ramim.cls << " " << ramim.roll << " " << ramim.cgpa << endl;
    return 0;
}