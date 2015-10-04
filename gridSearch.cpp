#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int gridSearchUtil(int R, int i, int j, int r, int c, string G[], string g[]){
	if(i == R-1){
		if(g[i].compare(G[j].substr(r,c)])==0)
			return 1;
		return 0;
	}
	if(g[i].compare(G[j].substr(r,c)])==0)
		return gridSearchUtil(R, i+1, j+1, r, c, G, g);
	return 0;
}

string gridSearch(int R, int C, int r, int c, string G[], string g[]){
	for(int i = 0; i<R-r; ++i){
		for(int j = 0; j<C-c; ++j){
			if(g[0].compare(G[i].substr(j,c)])==0){
				if(gridSearchUtil(r, 1, i+1, j, c, G, g)==1)
					return "YES"
			}
		}
	}
	return "NO";
}

int main() {
    int T;
    cin>>T;
    
    for(int i = 0; i<T; ++i){
    	int C, R, c, r;
    	cin>>R>>C;
    	
    	string G[R];
    	for(int j = 0; j<R; ++j) cin>>G[j];
    	
    	cin>>r>>c;
    	
    	string g[r];
    	for(int j = 0; j<r; ++j) cin>>g[j];
    	
    	cout<<gridSearch(R, C, r, c, G, g)<<endl;
    	
    }
    
    return 0;
}

