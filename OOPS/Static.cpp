#include <iostream>

using namespace std;


class Human{
  public  :

  int age;
  string name;
  int salary;
  bool married;

  static long population;

  Human(int age,string name, int salary,bool married){
    this->age = age;
    this->name = name;
    this->salary = salary;
    this->married = married;

    population++;
  }

};

long Human::population = 0;
int main(){

  Human kunal(19,"Kunal",3003,false);
  Human rahul(20,"Rahul",22222,true);

  cout<<Human::population<<endl;

  cout<<rahul.married;
}