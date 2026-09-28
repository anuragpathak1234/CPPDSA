#include <iostream>

using namespace std;


class NonstaticInsideStatic{
  public :

  static void fun(){

    //greeting(); // we can do this because its s not static fun its requaired a instsnce to acees it

    // so we can make beahve like sattic

    NonstaticInsideStatic obj;
    obj.greeting();

  }

  void fun2(){
    greeting();
  }

  void greeting(){
    cout<<"Hello World";
  }

  
};

int main(){

  NonstaticInsideStatic::fun();


  

  return 0;

}