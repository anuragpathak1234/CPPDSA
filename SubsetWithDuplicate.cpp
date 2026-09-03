#include <iostream>

#include <vector>

using namespace std;


static vector<vector<int>> subsetwithduplicate(vector<int>& arr){

  vector<vector<int>> outer;

  outer.push_back({});


  int start   = 0;

  int end  = 0;

  for(int i = 0; i < arr.size();  i++){

    start = 0;

    if(i > 0 && arr[i] == arr[i - 1]){
      start  = end  + 1;
    }

    end = outer.size() - 1;

    int size = outer.size();

    for(int j = start; j < size; j++){

      vector<int> internal = outer[j];

      internal.push_back(arr[i]);
      outer.push_back(internal);

    }
  }

  return outer;

};



int main(){

  vector<int> arr = {1,2,2};

  vector<vector<int>> ans = subsetwithduplicate(arr);


  for(vector<int> num : ans){

    cout<<"[";

      for(int n : num){
        cout<<n<<" ";
      }

    cout<<"]"<<endl;
  }






}