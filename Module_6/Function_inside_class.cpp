#include <bits/stdc++.h>
using namespace std;

class Student
{

public:
    string name;
    int roll;
    Student(string name, int roll)
    {
        this->name = name;
        this->roll = roll;
    }

    void hello()
    {
        cout << name << " " << roll << endl;
    }
};

int main()
{
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        string name;
        int roll;
        
        cin >> name >> roll;  
        Student s(name, roll);
        s.hello();
    }
    
    return 0;
}

//  from user withoutintput

    // Student sakib("Sakib Ahmed", 23);
    // sakib.hello();
    // Student rakib("Rakib Ahmed", 42);
    // rakib.hello();