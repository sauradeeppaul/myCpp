#include<iostream>
#include<cstring>
#include<stack>

using namespace std;

int main(){
	char brackets[50];
	cin>>brackets;
	
	stack <char> myStack;
	
	bool check = true;
	
	for(int i = 0; i<strlen(brackets); ++i){
		switch(brackets[i]){
			case '{':
				myStack.push(brackets[i]);
				break;
				
			case '(':
				myStack.push(brackets[i]);
				break;
				
			case '[':
				myStack.push(brackets[i]);
				break;
				
			case ']':
				if(myStack.empty()){
					check = false;
					break;
				}
				if(myStack.top()=='[')
					myStack.pop();
				else
					check = false;
				break;
				
			case ')':
				if(myStack.empty()){
					check = false;
					break;
				}
				if(myStack.top()=='(')
					myStack.pop();
				else
					check = false;
				break;
				
			case '}':
				if(myStack.empty()){
					check = false;
					break;
				}
				if(myStack.top()=='{')
					myStack.pop();
				else
					check = false;
				break;
				
			default:
				check = false;
				break;
		}
		if(check == false)
			break;
	}
	
	if(!myStack.empty())
		check = false;
		
	if(check == false)
		cout<<"No";
	else
		cout<<"Yes";
		
	return 0;
}
