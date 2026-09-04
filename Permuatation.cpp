#include <iostream> 

using namespace std;


void permutation(string p, string up){

  if(up.empty()){
    cout<<p<<endl;
    

    return ;
    
  }


  for(int i  = 0; i <= p.length(); i++){

    char ch = up[0];

    string first = p.substr(0,i);
    string second = p.substr(i, p.length());

    permutation(first + ch + second, up.substr(1) );
  }
};





int main(){


  permutation("", "abc");







}