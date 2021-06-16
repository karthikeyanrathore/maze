#include <bits/stdc++.h>
using namespace std;
int a[200][200];
int path[200][200];

int isok(int x , int y){
  if(x < 8 && y < 10 && a[x][y] == 1) return 1;
  return 0;
}

int rec(int i , int j , int dx , int dy){
  if(i == dx  && j == dy){
    path[i][j] = 1;
    return 1;
  }
  if(isok(i , j)){
    cerr << i <<" " << j<< "\n";
    path[i][j] = 1;
    if(rec(i + 1, j , dx , dy)) return 1;
    else if(rec(i , j + 1 , dx , dy)) return 1;
    path[i][j] = 0;
  }
  return 0;
}

int fun(pair<int, int> source , pair<int , int> dest){
  memset(path  , 0 , sizeof(path));
  if(rec(source.first , source.second , dest.first , dest.second) == 0) return 0;
  else{
    cout << "YES;";
    for(int i = 0; i < 10; ++i){
      for(int j = 0; j < 8; ++j){
        cout << path[i][j] << " ";
      }
      cout << "\n";
    }
    return 1;
  }
}

int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  for(int i = 0; i < 10; ++i){
    for(int j = 0; j < 8 ; ++j){
      cin >> a[i][j];
    }
  }
  for(int i = 0; i < 10; ++i){
    for(int j = 0; j < 8; ++j){
      cout << a[i][j] << " ";
    }
    cout << "\n";
  }
  int sx = 0 , sy = 2 , dx = 9 , dy = 6;
	pair<int , int > source , dest;
  source = {sx , sy};
  dest = {dx ,  dy };
  
  fun(source , dest);

  return 0;
}

