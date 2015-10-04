#include <iostream>

using namespace std;
int count = 0;
void pathUtil(int m, int n, int r, int c){
	if(r==m-1 && c==n-1)
		++count;
	
	if(c<n-1)
		pathUtil(m, n, r, c+1);
	if(r<m-1)
		pathUtil(m, n, r+1, c);

	return;
}

void path(int m , int n){
	pathUtil(m, n, 0, 0);
	cout<<count;
}

int main(){
	int m, n;
	cin>>m>>n;
	
	path(m, n);
	
	return 0;
}
