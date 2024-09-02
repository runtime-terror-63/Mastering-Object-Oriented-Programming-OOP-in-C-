#include <bits/stdc++.h>
using namespace std;

// Example with Encapsulations:
// Constructor
class Account
{
private:
  double balance;
  string password;

public:
  string account_id;
  string user_name;
  string dept;
  string subject;

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

  // constructor
  // non-parameterized constructor
  // always public
  Account()
  {
    user_name = "Prolay Ghosh";
    account_id = "100012";
  }

  // Parameterized constructor
  Account(string user_name, string account_id, string dept, string subject)
  {
    this->user_name = user_name;
    this->account_id = account_id;
    this->dept = dept;
    this->subject = subject;
  }

  // copy constructor

  // not original object copy, its full original object
  Account(Account &org_obj)
  { // Pass by reference
    cout << "Copy constructor" << endl;
    ;
    this->user_name = org_obj.user_name;
    this->account_id = org_obj.account_id;
    this->dept = org_obj.dept;
    this->subject = org_obj.subject;
  }

  void getInfo()
  {
    cout << "User Name- " << user_name << endl;
    cout << "account_id- " << account_id << endl;
    cout << "Department- " << dept << endl;
    cout << "subject- " << subject << endl;
  }
};

int main()
{
  Account s1("Prolay Ghosh", "100012", "Computer Science", "DataStructure Algorithms");

  // using setter method set data
  s1.setbalance(25000.00);
  s1.setpassword("lock123");
  // s1.getInfo();

  Account s2(s1);
  s2.getInfo();
}