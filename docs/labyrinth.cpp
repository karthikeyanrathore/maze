#include <bits/stdc++.h>
using namespace std;
int n , m;
 
const int maxn = 1001;
char a[maxn][maxn]; int vis[maxn][maxn];
 
vector<vector<pair<int, int>>> path;
 
int dx[4] = {-1 , 0 ,1 , 0};
int dy[4] = {0 , 1 , 0 , - 1};
 
 
bool isok(int r , int e){
	if(r >= 0 && r < n  && e >= 0 && e < m && !vis[r][e] && a[r][e] == 1) return true;
	
	else if(r >= 0 && r < n  && e >= 0 && e < m && !vis[r][e] && a[r][e] == 1) return true;
	else return false;
}
 
 
int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
	int sx =0 , sy =2 , ex = 9 , ey =6;
	int n = 10;int m =  8;
	path.resize(n);
	for(int i = 0; i < n; ++i){
		path[i].resize(m);
	}
 
 
	for(int i =0; i  < n; ++i){
		for(int k =0; k  < m; ++k){
			cin >> a[i][k];
			path[i][k] = {-1  , -1};
    }
  }
 
	memset(vis , 0 , sizeof(vis));
 
	queue<pair<int , int >> q;
	q.push({sx , sy});
	vis[sx][sy] = 1;
	while(q.size()){
		pair<int , int> u = q.front();
		q.pop();
		for(int i =0; i < 4; ++i){
			if(isok(u.first + dx[i]  , u.second + dy[i])){
				q.push({u.first + dx[i] , u.second + dy[i]});
				path[u.first + dx[i] ][u.second + dy[i] ] = { dx[i] , dy[i] }; // IMP
				vis[u.first + dx[i]][u.second + dy[i]] = 1;
			}
		}
	}
 
	if(!vis[ex][ey]){
		cout <<"NO";
		exit(0);
	}
	cout << "YES\n";
;
	vector<pair< int  , int>> v;
	// back track
	while(sx != ex || ey != sy){
		v.push_back(path[ex][ey]);
		ex -= v.back().first;
		ey -= v.back().second;
	}
 
	cout <<v.size() << "\n";
 
 
	vector<char>f;
	reverse(v.begin() ,v.end());
	for(auto& cc : v){
		if(cc.first == 0 && cc.second == 1) f.push_back('R');
 
		if(cc.first == 1 && cc.second == 0) f.push_back('D');
		if(cc.first == -1 && cc.second == 0) f.push_back('U');
		if(cc.first == 0 && cc.second == -1) f.push_back('L');
	}
	for(auto& ds : f) cout << ds;
 
	return 0;
}
