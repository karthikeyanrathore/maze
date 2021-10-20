#include <bits/stdc++.h>
using namespace std;
int n = 10, m = 10;
const int maxn = 10001;
int a[maxn][maxn] , vis[maxn][maxn];
vector<vector<pair<int , int >>> path;

int dx[4] = {-1 , 0 , 1 , 0};
int dy[4] = {0 , 1 , 0 , -1};


int isok(int r , int e){
  if(r >=0 && r < n  && e >=0 && e < m && !vis[r][e] && a[r][e] == 1) return 1;
  return 0;
}

void dfs(pair<int , int> source){
  vis[source.first][source.second] = 1;
  for(int i = 0; i < 4; ++i){

  }


int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  path.resize(n);
  for(int i =0; i < n; ++i){
    path[i].resize(m);
  }
  for(int i = 0; i < n; ++i){
    for(int j = 0; j < m; ++j){
      cin >> a[i][j];
      path[i][j] = {- 1 , -1};
    }
  }
  pair<int , int> source = {0 , 3};
  pair<int , int> dest = {9 , 7};

  dfs(source);

}
