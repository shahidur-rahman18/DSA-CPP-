#include <bits/stdc++.h>
using namespace std;
class Cricketer

{

public:
    string country ;
    int jersey;
    Cricketer(string country,int jersey)
    {
        this->country= country;
        this->jersey=jersey;
    }
};

int main()
{
  Cricketer* dhoni= new Cricketer("India",20);
  Cricketer* kholi= new Cricketer("India",18);
   *kholi= *dhoni;
   delete dhoni;
//   cout << dhoni->country <<" "<<dhoni->jersey<< endl;
  cout << kholi->country <<" "<<kholi->jersey<< endl;
    return 0;
}