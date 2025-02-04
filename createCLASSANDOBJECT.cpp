#include <iostream>
using namespace std;

class teacher
{

private:
  double salary;

public:
  // properties//attributes
  string name;
  string dept;
  string subject;

  // method //member function

  void changeDept(string newDept)
  {
    dept = newDept;
  }

  // setter
  void setSalary(double s)
  {
    salary = s;
  }
  // getter
  double getSalary()
  {
    return salary;
  }
};

int main()
{

  teacher t1;
  t1.name = "ashwin";
  t1.subject = "c++";
  t1.dept = "computer science";

  t1.setSalary(27000);

  cout << t1.name << endl;
  cout << t1.subject << endl;

  cout << t1.getSalary() << endl;

  return 0;
}