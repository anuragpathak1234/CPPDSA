#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> permutation(string p, string up){
  if(up.empty()){
    vector<string> list;

    list.push_back(p);

    return list;
  }


  vector<string> ans ;

  for(int i = 0; i <= p.length(); i++){

    char ch = up[0];

    string first = p.substr(0,i);
    string second = p.substr(i, p.length());


    vector<string> result = permutation(first + ch + second, up.substr(1));
    ans.insert(ans.end(), result.begin(), result.end());
  }

  return ans;





};


int main(){

  vector<string> ans = permutation("", "abc");
  


  for(string num : ans){
    cout<<num<<endl;
  }

  


}


