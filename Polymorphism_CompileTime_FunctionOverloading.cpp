#include <bits/stdc++.h>
using namespace std;

// Polymorphism
// function overloading
class Sum
{
public:
  void add(int x, int y)
  {
    int sum = x + y;
    cout << sum << endl;
  }

  void add(int x, int y, int z)
  {
    int sum = x + y + z;
    cout << sum << endl;
  }

  void add(float x, float y)
  {
    float sum = x + y;
    cout << sum << endl;
  }

  void add(string x, string y)
  {
    string sum = x + y;
    cout << sum << endl;
  }
};
int main()
{
  Sum s1;
  s1.add(2, 3);
  s1.add(3, 4, 5);
  s1.add(float(3), float(4));
  s1.add("Ram", "Kumar");
  return 0;
}