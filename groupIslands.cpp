#include <iostream>

using namespace std;


/*void DFS(){
	int row 
}

int count(){
	int count = 0;
	
	for(int i = 0; i<R; ++i){
		for(int j = 0; j<C; ++j){
			if(ar[R][C] == 'Y' && vis[R][C]==0)
				DFS();
				++count;
		}
	}
	return count;
}*/

int countIslands(char ar[][5000], int R, int C){
	int count = 0;
	
	for(int i = 0; i<R; ++i){
		for(int j = 0; j<C; ++j){
			if(ar[i][j]=='Y'){
				if(i == 0 && j==0)
					++count;
				else if(i==0 && j!=0){
					if(ar[i][j-1]=='N')
						++count;
				}
				else if(i!=0 && j==0){
					if(ar[i-1][j]=='N')
						++count;
				}
				else{
					if(ar[i][j-1]=='N' && ar[i-1][j]=='N')
						++count;
				}
			}
		}
	}
	return count;
}

int main(){
	
	int R, C;
	cin>>R>>C;
	
	char ar[R][5000];
	
	for(int i = 0; i<R; ++i)
		for(int j = 0; j<C; ++j)
			cin>>ar[i][j];
	
	int vis[R][C];
	
	for(int i = 0; i<R; ++i)
		for(int j = 0; j<R; ++j)
			vis[i][j]=0;
	
	cout<<countIslands(ar, R, C);
	
	return 0;
}
