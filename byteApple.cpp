#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;


int main() {
    int N;
    cin>>N;
    
    string str;
    
    while(cin>>str){
        cout<<str<<endl;
        cout << str.compare("Apple") << " : " <<  str.compare("Apple\'s") << endl;
        //if(strcmp(str,'Apple') || strcmp(str, "Apple\'s"))
          //  cout<<str<<endl;
        /*else if(strcmp(str,'apple') || strcmp(str,'apples') || strcmp(str,'apple\'s') || strcmp(str,'Apples'))
            cout<<str<<endl;*/
    }
    return 0;
}
