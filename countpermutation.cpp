#include <iostream>

using namespace std;




int countpermutation(string p, string up){
  if(up.empty()){
    return 1;
  }

  int count = 0;

  for(int i  = 0; i <= p.length(); i++){

    char ch = up[0];

    string first = p.substr(0,i);
    string second = p.substr(i,p.length());

    count = count + countpermutation(first + ch + second,up.substr(1));


  }
  return count;


};


int main(){

  cout<<countpermutation("","abcd");

  return 0;




}