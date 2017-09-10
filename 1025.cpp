#include<iostream>
#include<string>
#include<map>
using namespace std;
struct info {
	string address;
	int data;
	string next;
};

int main() {
	string firstAddress;
	int N, K;
	cin >> firstAddress >> N >> K;

	info* infos = new info[N];
	info* orderInfos = new info[N];
	map<string, int> m;
	for (int i = 0; i < N; i++) {
		cin >> infos[i].address >> infos[i].data >> infos[i].next;
		m[infos[i].address] = i;
	}

	for (int i = 0; i < N; i++) {
		if (i == 0)
			orderInfos[i].address = firstAddress;
		else
			orderInfos[i].address = orderInfos[i-1].next;
		orderInfos[i].data= infos[m[orderInfos[i].address]].data;
		orderInfos[i].next = infos[m[orderInfos[i].address]].next;
	}

	for (int i = 0; i < N;) {
		if (N - i > K) {
			for(int j=i+K-1;j>i;j--)
				cout << orderInfos[j].address << " " << orderInfos[j].data << " " << orderInfos[j-1].address << endl;
			cout << orderInfos[i].address << " " << orderInfos[i].data << " " << orderInfos[i + K].address << endl;
			i += K;
		}
		else {
			cout << orderInfos[i].address << " " << orderInfos[i].data << " " << orderInfos[i].next << endl;
			i++;
		}
	}
	return 0;
}