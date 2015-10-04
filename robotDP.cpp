#include <iostream>

using namespace std;

int m, n;

void path(int m, int n, int obsm[], int obsn[], int o){
	int ar[m][n];
	
	for(int i = 0; i<m; ++i){
		for(int j = 0; j<n; ++j) ar[i][j] = 0;
	}
	
	for(int i = 0; i<o; ++i)
		ar[obsm[i]-1][obsn[i]-1] = -1;
	
	for(int i = 0; i<m; ++i){
		for(int j = 0; j<n; ++j){
			if((i == 0 && j == 0) && ar[i][j]!=-1) ar[i][j] = 1;
			else if((i == 0 && j == 0) && ar[i][j]==-1) ar[i][j]=0;
			
			else if(i == 0 && ar[i][j]!=-1) ar[i][j] = ar[i][j-1];
			else if(i == 0 && ar[i][j]==-1) ar[i][j] = 0;
			
			else if(j == 0 && ar[i][j]!=-1) ar[i][j] = ar[i-1][j];
			else if(j == 0 && ar[i][j]==-1) ar[i][j] = 0;
			
			else if(ar[i][j]!=-1) ar[i][j] = ar[i-1][j] + ar[i][j-1];
			else ar[i][j] = 0;
		}
	}
	cout<<"Total paths: "<<ar[m-1][n-1];
}

int main(){
	cout<<"Matrix size: \n";
	cin>>m>>n;
	
	cout<<"Number of obstacles: \n";
	int o;
	cin>>o;
	
	int obsm[o], obsn[o];
	
	cout<<"Enter obstacle coordinates: \n";
	for(int i = 0; i<o; ++i)
		cin>>obsm[i]>>obsn[i];
	path(m, n, obsm, obsn, o);
	
	return 0;
}
