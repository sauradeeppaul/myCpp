#include <iostream>

using namespace std;

void printSequence(char str[], int i, int o, int c, int n){
	
	if(c == n){
		cout<<str<<endl;
		//for(int j = 0; j<2*n; ++j)
		//	cout<<str[j];
		//cout<<endl;
		return;
	}
	
	if(o>c){
		str[i]=')';
		printSequence(str, i+1, o, c+1, n);
	}
	
	if(o<n){
		str[i]='(';
		printSequence(str, i+1, o+1, c, n);
	}
}

void printParenthesis(int open, int close, int n)
{
  if(close == n) 
  {
    printf("\n");
    return;
  }
  else
  {
    if(open > close) {
        cout<<"}";
        printParenthesis(open, close+1, n);
    }
    if(open < n) {
       cout<<"{";
       printParenthesis(open+1, close, n);
    }
  }
}

int main(){
	
	int n;
	cin>>n;
	
	char str[2*n + 1];
	str[2*n] = '\0';
	printSequence(str, 0, 0, 0, n);
	
	cout<<"\n\n";
	
	//printParenthesis(0, 0, n);
	
	return 0;
}
