#include <bits/stdc++.h>
using namespace std;

class Parent
{
public:
  virtual void getInfo()
  {
    cout << "Now We are in Parent" << endl;
  }

  void show()
  {
    cout << "Base class show" << endl;
  }
};

class Child : public Parent
{
public:
  void getInfo()
  {
    cout << "Now we are in Child" << endl;
  }

  void show()
  {
    cout << "Show derived class" << endl;
  }
};

int main()
{
  Parent *c1;
  Child c;
  c1 = &c;
  c1->getInfo();
  c1->show();
}
