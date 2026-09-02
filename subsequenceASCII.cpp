#include <iostream>

using namespace std;

class Subsequence{

  public :

  static void subASCII(string p,string up){

    if(up.empty()){
      cout<<p<<endl;
      return;
    }

    char ch = up[0];

    subASCII(p + ch,up.substr(1));
    subASCII(p,up.substr(1));
    subASCII(p + to_string(int(ch)) , up.substr(1));


  }

};


int main(){


  Subsequence::subASCII("","abc");


}