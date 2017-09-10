#include <iostream>
#include <set>
using namespace std;

void findFriend(int& val,set<int> &iset){
	int sum=0;
	while(val){
		sum+=val%10;
		val/=10;
	}
	iset.insert(sum);
}

int main() {
	int N;
	set<int> iset;
	while(cin>>N){
		iset.clear();
		int val;
		for(int idx=0;idx<N;++idx){
			cin>>val;
			findFriend(val,iset);
		}
		cout<<iset.size()<<endl;
		bool isFirst=true;
		for(const auto& elem:iset){
			if(isFirst){
				cout<<elem;
				isFirst=false;
			}else{
				cout<<" "<<elem;
			}
		}
		cout<<endl;
	}
	return 0;
}
