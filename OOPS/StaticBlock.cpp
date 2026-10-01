#include <iostream>

using namespace std;



class StaticBlock{

  public : 

  static int a;
  static int b;

  StaticBlock(){
    cout<<"I am In StaticBlock"<<endl;
  }

};

int StaticBlock::a = 5;
int StaticBlock::b = StaticBlock::a * 5;


int main(){
  StaticBlock obj;

  cout<<StaticBlock::a<<" "<<StaticBlock::b<<endl;

  StaticBlock::b += 3;

  cout<<StaticBlock::a<<" "<<StaticBlock::b<<endl;


  StaticBlock obj2;

  cout<<StaticBlock::a<<" "<<StaticBlock::b<<endl;








  
}

