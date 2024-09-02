#include <bits/stdc++.h>
using namespace std;

// Example with Encapsulations:
// Data Hiding
// Encapsulations in wrapping up of data/properties & members/ methods in a single class
class Account
{
private:
  double balance;
  string password;

public:
  string account_id;
  string user_name;

  // setter
  void setbalance(double b)
  {
    balance = b;
  }

  void setpassword(string p)
  {
    password = p;
  }

  // getter
  double getbalance()
  {
    return balance;
  }

  string getpassword()
  {
    return password;
  }
};

int main()
{
  Account s1;

  // using setter method set data
  s1.setbalance(25000.00);
  s1.setpassword("lock123");
  s1.user_name = "Prolay Ghosh";
  cout << s1.getbalance() << " " << s1.user_name << endl;
}