#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int cc, mc, L;
	cin>>cc>>mc>>L;
	
	int length[L];
	for(int i =0; i<L; ++i) cin>>length[i];
	
	sort(length, length+L);
	
	int maxProf = 0;
	int maxi = 0;
	
	for(int i = 1; i<=length[L-1]; ++i){
		int profit = 0;
		for(int j = 0; j<L; ++j){
			if(length[j]%i == 0){
				profit += length[j]*mc;
				profit -= ((length[j]/i)-1)*cc;
			}
			else{
				profit += i*(length[j]/i)*mc;
				profit -= (length[j]/i)*cc;
			}
		}
		if(maxProf<profit){
			maxProf=profit;
			maxi=i;
		}
	}
	
	cout<<maxProf;
	
	return 0;
}
