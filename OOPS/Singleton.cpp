

#include <iostream>

using namespace std;

class Singleton{

  private :

  static Singleton* instance;

  Singleton(){

  }




  public : 

  static Singleton* getInstance(){

    if(instance == nullptr){
      instance = new Singleton();
    }

    return instance;

  }
};

Singleton* Singleton::instance = nullptr;


int main(){

    Singleton* a = Singleton::getInstance();
    Singleton* b = Singleton::getInstance();

    cout << a << endl;
    cout << b << endl;

    cout << (a == b) << endl;

    return 0;
}