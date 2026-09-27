#include <iostream>
using namespace std;

class Student{

  public :

  int rno;
  int marks;
  string name;
};


int main(){

  Student kunal{};
  kunal.rno = 10;
  kunal.marks = 90;
  kunal.name = "kk";

  cout<<kunal.rno<<endl;
  cout<<kunal.marks<<endl;
  cout<<kunal.name<<endl;

  return 0;
}