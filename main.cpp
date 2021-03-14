#include <bits/stdc++.h>
using namespace std; 

int BB(vector<int> &a ,int n , int x){
	int L = 0 , R = n - 1;
	while( L <= R){
		int mid = (L + R)/2;

		if(a[mid] == x){
			return mid;
		}
		if(a[mid]  > x){
			R = mid - 1;
		}
		else L = mid + 1;
	}
	return -1;

}

int B2(vector<int> &a ,int n , int x){
	int L = 0 , R = n - 1 , ans = -1;
	while( L <= R){
		int mid = (L + R)/2;

		if(a[mid] <= x){
			ans = mid;
			L = mid + 1;
		}
		else R = mid - 1;
	}
	return  ans;

}

int B3(vector<int> &a ,int n , int x){
	int L = 0 , R = n - 1 , ans = -1;
	while( L <= R){
		int mid = (L + R)/2;

		if(a[mid] >= x){
			ans = mid;
			R = mid - 1;
		}
		else L = mid + 1;
	}
	return  ans;

}


int main(){
	int n = 7;  vector<int> a(n);
	int target = 4;
	a = { 1  , 2 , 4 , 4 ,4 , 5 , 7};
	
	// Left
	cout << B3( a , n , target);

	// Right
	//cout << B2(a , n , target);

}












