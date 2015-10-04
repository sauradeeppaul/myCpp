#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N, K;
	cin>>N>>K;
	
	float f = (sqrt(1+8*K)-1)/2;
	
	int i = int(f);
	
	if(2*K == (i*(i+1)) || 2*K == (i+1)*(i+2))
		cout<<((N*(N+1))/2)-1;
	else
		cout<<(N*(N+1))/2;
    return 0;
}
