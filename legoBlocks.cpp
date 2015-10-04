#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int countPerm(int n ){
    if(n<=4)
    	return pow(2, n-1);
    int count = pow(2, n-1);
    for(int i = 4; i<n; ++i)
    	count -= countPerm(n-i);
    return count;
}

int calculatePossibility(int M){
	
	int count = countPerm(M);
	
	for(int i = 1; i<=min(4,M); ++i){
		count -= countPerm(M-i);
	}
	return count;
	
}

int M3C3(int M){
	return (M+3)*(M+2)*(M+1)/6;
}

int main(){
	int N, M;
	int T;
	cin>>T;
	int ar[] = {1,2,3,4};
	
	for(int index = 0; index<T; ++index){
		
		cin>>M;
		int count = calculatePossibility(M);
		cout<<countPerm(M);
		
		cout<<M3C3(M)<<endl; 
		//cout<<count<<endl;
	}
	
	return 0;
}
