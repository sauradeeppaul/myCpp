#include <iostream>
#include <queue>

using namespace std;

void DFS(int i, string str[], int N, int ar[]){
	for(int j = i+1; j<N; ++j){
		if(ar[j] == 0 && str[i][j] == 'Y'){
			ar[j] = 1;
			DFS(j, str, N, ar);
		}
	}
}

void BFS(){
	
}

int main(){
	int N; cin>>N;
	
	int ar[N];
	
	int count = 0;
	
	string str[N];
	for(int i =0; i<N; ++i) cin>>str[i];
	
	for(int i =0; i<N; ++i) ar[i]=0;
	
	for(int i =0; i<N; ++i){
		if(ar[i]==0){
			ar[i]=1;
			DFS(i, str, N, ar);
			++count;
		}
	}
	
	cout<<count;
	
	return 0;
}
