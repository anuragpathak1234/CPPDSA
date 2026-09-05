#include <iostream>

using namespace std;




void combinationOfPhoneNumbers(string p , string up){
  if(up.empty()){
    cout<<p<<endl;
    return;
  }

  int digit = up[0] - '0';

  for(int i  = (digit - 1) * 3; i < digit * 3;i++){

    char ch = (char)('a' + i);

    combinationOfPhoneNumbers(p + ch, up.substr(1));
  }

}



int main(){

  combinationOfPhoneNumbers("","12");


}