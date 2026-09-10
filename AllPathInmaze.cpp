#include <iostream>
#include <vector>
#include <string>

using namespace std;



void allpath(string p, vector<vector<bool>>& maze, int r, int c){

  if(r == maze.size() - 1 && c == maze[0].size() - 1){
    cout<<p<<endl;
    return;
  }

  if(!maze[r][c]){
    return;
  }

  maze[r][c] = false;


  if(r < maze.size() - 1){
    allpath(p + 'D',maze,r  + 1,c);
  }

  if(c < maze.size() - 1){
    allpath(p + 'R',maze,r,c + 1);
  }

  if(r  > 0){
    allpath(p + 'U',maze,r  - 1,c);
  }

  if(c > 0){
    allpath(p + 'L',maze,r ,c - 1);
  }

  maze[r][c] = true;

}




int main(){

  vector<vector<bool>> maze = {
    {true,true,true},
    {true,true,true},
    {true,true,true}
  };

  allpath("",maze,0,0);


  return  0;




}