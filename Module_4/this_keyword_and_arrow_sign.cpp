#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
   int cls;
    int roll;
    double cgpa;

    Student(int cls, int roll, double cgpa)
    {
        this->cls = cls;
        this->roll=roll;
        this->cgpa=cgpa;
       

    }
};
int main()
{
    Student ramim(5,1, 3.8) ;
 

    cout << ramim.cls << " " << ramim.roll << " " << ramim.cgpa << endl;
    return 0;
} 