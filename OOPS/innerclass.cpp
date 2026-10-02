#include <iostream>

using namespace std;


class InnerClasses{
  
  public :
  
  class Test{

    public :
    
    string name;

    Test(string name){
      this->name = name;
    }
    
  };
};


int main(){
  InnerClasses::Test a("anuj");
  InnerClasses::Test b("chhotu");

  cout<<a.name<<endl;
  cout<<b.name<<endl;

}