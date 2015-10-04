#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int N;
	cin >> N;
	string V[N];
	for (int i=0;i<N;i++)
		cin >> V[i];
		
	vector <pair<int, string> > list;
	for (int i = 0; i<N; ++i)	list.push_back({V[i].length(),V[i]});
	
	sort(list.begin(),list.end());
	
	for(int i = 0; i<list.size(); ++i)	cout<<list[i].first<<" "<<list[i].second<<endl;
	
	return 0;
}
