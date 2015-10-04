#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string ones(int i){
	switch(i){
		case 1:
			return "one";
			
		case 2:
			return "two";
		
		case 3:
			return "three";
			
		case 4:
			return "four";
			
		case 5:
			return "five";
			
		case 6:
			return "six";
			
		case 7:
			return "seven";
		
		case 8:
			return "eight";
			
		case 9:
			return "nine";
			
		default:
			return "";
	}
}

string teens(int i){
	if(i == 14 || (i<=19 && i>=16))
		return ones(i%10)+"teen";
	else{
		switch(i){		
			case 11:
				return "eleven";
			
			case 12:
				return "twelve";
			
			case 13:
				return "thirteen";
			
			default:
				return "";
	}
	}
}

string mins(int m){
	if(m<10)
		return ones(m);
	else if(m==10)
		return "ten";
	else if(m>10 && m<20)
		return teens(m);
	else if(m==20)
		return "twenty";
	else
		return "twenty "+ones(m%20);
}

string hours(int h){
	if(h==0)
		return "twelve";
	else if(h<10)
    	return ones(h);
    else if (h == 10)
    	return "ten";
    else
    	return "eleven";
}

string minutes(int m){
    if(m==1)
        return "minute";
    else
        return "minutes";
}

string word(int h, int m){
	string str;
	if(m == 0)
    	return hours(h)+" o' clock";
    else if(m == 15)
    	return "quarter past " + hours(h);
    else if(m == 30)
    	return "half past " + hours(h);
    else if(m == 45)
    	return "quarter to " + hours((h+1)%12);
    else if(m<30)
    	return mins(m) + " "+ minutes(m) + " past " + hours(h);
    else if(m>30)
    	return mins(60-m) + " "+ minutes(60-m)+ " to " + hours((h+1)%12);
    else
    	return "ERROR!";
}

int main() {
    int h, m;
    cin>>h>>m;
    h %= 12;
    cout<<word(h, m);
    return 0;
}

