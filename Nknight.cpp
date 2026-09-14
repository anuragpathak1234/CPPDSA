#include <iostream>
#include <vector>

using namespace std;

void display(vector<vector<bool>>board);
bool issafe(vector<vector<bool>>board,int r, int c);
bool isvalid(vector<vector<bool>> board,int r,int c);
void Nknight(vector<vector<bool>>board, int r, int c, int knight ){

  if(knight == 0){

    display(board);
    cout<<endl;
    return;
    
  }

  if(r == board.size()){

    return;

  }

  if(c == board.size()){
    Nknight(board,r + 1, c, knight);
  }


  if(issafe(board, r,c)){
    board[r][c] = true;
    Nknight(board,r,c+ 1, knight - 1);
    board[r][c] = false;

  }

    Nknight(board,r,c + 1,knight);










}



void display(vector<vector<bool>> board){

  for(vector<bool> row   : board ){
    for(bool element : row){
      if(element){
        cout<<"K ";
      }

      else{
        cout<<"X ";
      }
    }

    cout<<endl;
  }
}

bool issafe(vector<vector<bool>> board, int r, int c){
  if(isvalid(board,r - 2, c - 1)){
    if(board[r - 2][c - 1]){
      return false;
  } }

    if(isvalid(board,r - 2, c + 1)){
        if(board[r - 2][c + 1]){
            return false;
    }  }

    if(isvalid(board,r - 1, c - 2)){
        if(board[r - 1][c - 2]){
          return false;
    }   }

    if(isvalid(board,r - 2, c - 1)){
      if(board[r - 2][c - 1]){
        return false;
    }  }

    return true;
  
}

bool isvalid(vector<vector<bool>> board, int r, int c){
  if(r >= 0 && r < board.size() && c >= 0 && c < board.size()){
    return true;
  }
  return false;
}

int main(){

  int n = 4;

  vector<vector<bool>> board(n,vector<bool>(n,false));

  Nknight(board,0,0,4);

}

