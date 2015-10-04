#include<iostream>
#include<cstring>
using namespace std;

int main(){
	char a[20];
	gets(a);
	
	if(strlen(a)>15)
		return 0;
	
	
	int count = 0;
	
	int i = 0;
	
	while(a[i] != EOF){
		char b[10];
		count++;
		if(i!=0)
			++i;
		int j = 0;
		while(a[i] != '.' && a[i] != EOF){
			cout<<endl<<a[i];
			if(isdigit(a[i]))
				b[j++] = a[i++];
			else
				return 0;
		}
		
		b[i] = EOF;
		cout<<endl<<"this is b- "<<b;
		cout<<endl<<strlen(b)<<endl;
		
		int val = 0;
		for(i = 0; i<strlen(b)-1; ++i){
			val = 10*val + (b[i]-'0');
			cout<<val<<endl;
		}
		cout<<"\nfinal "<<val;
		
		if(val<0 || val>255)
			return 0;	
	}
	
	if(count>4)
		return 0;
	
	return 1;
}
