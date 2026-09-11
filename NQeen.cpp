#include <iostream>

#include <algorithm>

#include <vector>

using namespace std;

bool issafe(vector<vector<bool>> board, int row, int col);
void display(vector<vector<bool>> board);
int nQueen(vector<vector<bool>> board, int row){
  
  if(row == board.size()){
  
    display(board);
    cout<<endl;
    return 1;

    
  }

  int count  = 0;

  // palcing our queen here

  for(int col = 0; col < board.size(); col++){

    // check it safe to place here or not
    if(issafe(board,row,col)){

      board[row][col] = true;
      count += nQueen(board,row + 1);
      board[row][col] = false;

    }
  }
  return count;

  
}

void display(vector<vector<bool>> board){

  for(vector<bool> row : board){
    for(bool element : row){
      if(element){
        cout<<"Q ";
      }

      else{
        cout<<"X ";
      }


    }

    cout<<endl;
  }

}

bool issafe(vector<vector<bool>> board, int row, int col){


  // check for vertical row

  for(int i = 0; i < row; i++){
    if(board[i][col]){
      return false;
    }
  }

  // check for left;

  int maxLeft = min(row, col);

  for(int i = 1; i <=maxLeft; i++){
    if(board[row - i][col - i]){
      return false;
    }
  }

  // check for right

  int maxRight = min(row, (int)board.size() - col - 1);

  for(int i = 1; i <= maxRight; i++){
    if(board[row - i][col + i]){
      return false;
    }
  }

  return true;
}

int main(){

  int n = 4;

  vector<vector<bool>> board(n, vector<bool>(n, false));

  cout<<nQueen(board,0);

  



} 