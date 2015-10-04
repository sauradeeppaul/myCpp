#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int C, r;
    double f, n, m;
    cin>>C;
    
    for(int i = 0; i<C; ++i){
        cin>>n>>m;
        f = ceil((n*n)/((n*n)-(2*m)));
        r = (int)f;
        cout<<f<<endl;
    }
    return 0;
}

