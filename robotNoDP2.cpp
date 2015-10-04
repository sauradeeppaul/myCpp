#include <iostream>

using namespace std;

int m, n;
int ar[50][50];

int pathUtil(int r, int c, int ar[][50]){
	if(r == 1 || c == 1){
		if(ar[r-1][c-1] == 0)
			ar[r-1][c-1]=1;
		return ar[r-1][c-1];
	}
		
	else
		return ((ar[r-2][c-1]==0) ? pathUtil(r-1, c, ar) : ar[r-2][c-1]) + ((ar[r-1][c-2]==0) ? pathUtil(r, c-1, ar) : ar[r-1][c-2]);
}

void path(int m, int n){
	
	for(int i = 0; i<m; ++i){
		for(int j = 0; j<n; ++j) ar[i][j] = 0;
	}
	cout<<pathUtil(m, n, ar);
}

int main(){
	cin>>m>>n;
	path(m, n);
	
	return 0;
}
