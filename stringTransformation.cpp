#include <iostream>
#include <cstring>

using namespace std;

int main(){
	int T, N;
	
	cin>>T;
	
	for(int j = 0; j<T; ++j){
		cin>>N;
		
		string str;
		char q[N+1];
		q[N] = '\0';
		
		cin>>str;
		int cache[26];
		//initializing all cahe values to 0;
		for(int i = 0; i<26; ++i)
			cache[i]=0;
		
		for(int i = 0; i<str.length(); ++i){
			int mod = 'z';
			int val = (str[i]+cache[str[i]-'a'])%mod;
			if (val<'a')
				val = val+'a';
			q[i] = val;
			//cout<<str[i]<<" str "<<mod<<" z "<<val<<" val "<<q[i]<<" q "<<endl; 
			++cache[str[i]-'a'];
		}
		cout<<q<<endl;	
	}
	return 0;
}
