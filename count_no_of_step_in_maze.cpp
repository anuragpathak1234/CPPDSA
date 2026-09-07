
#include <iostream>

using namespace std;

int countNoOfStepInMaze(int r, int c){

  if(r == 1    || c == 1){
    return 1;
  }

  int left =  countNoOfStepInMaze(r-1, c);
  int right = countNoOfStepInMaze(r,c-1);

  return left  + right;

};

int main(){

  cout<< countNoOfStepInMaze(3,3);


} 