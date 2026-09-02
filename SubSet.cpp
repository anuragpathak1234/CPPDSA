#include <iostream>

#include <vector>
using namespace std;


vector<vector<int>> subset(vector<int>& arr){

  vector<vector<int>> outer;

  //Start with empty subset

  outer.push_back({});

  for(int num  : arr){

    int size = outer.size();

    for(int i = 0; i < size; i++){
      //. copying the existing subset

      vector<int> internal = outer[i];

      //Add current number

      internal.push_back(num);

      // add the new subset

      outer.push_back(internal);
    }

    
  }

  return outer;
};








int main(){

  vector<int> arr = {1,2,3};

  vector<vector<int>> ans = subset(arr);


  for(vector<int> list : ans){

    cout<< "[";

    for(int num : list){
      cout<< num << " ";
    }

  

    cout<< "]" <<endl;


  }
  return 0;


}