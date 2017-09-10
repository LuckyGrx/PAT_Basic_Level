#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
	vector<vector<string>> v;//ÊÖ¡¢ÑÛ¡¢¿Ú
	for (int i = 0; i < 3; ++i) {
		string temp;
		getline(cin, temp);
		int j = 0;
		int k = j;
		int length = temp.size();
		vector<string> vTemp;
		while (j < length) {
			if (temp[j] == '[') {
				while (k++ < length) {
					if (temp[k] == ']') {
						vTemp.push_back(temp.substr(j + 1, k - j - 1));
						break;
					}
				}
			}
			j++;
		}
		v.push_back(vTemp);
	}
	int K;
	cin >> K;
	for (int i = 0; i < K; ++i) {
		int lh, le, m, re, rh;
		cin >> lh >> le >> m >> re >> rh;
		if (v[0].size()< lh || v[0].size() < rh||v[1].size()<le||v[1].size()<re||v[2].size()<m||lh<1||rh<1||le<1||re<1||m<1)
			cout << "Are you kidding me? @\\/@" << endl;
		else
			cout << v[0][lh-1] << "(" << v[1][le-1] << v[2][m-1] << v[1][re-1] << ")" << v[0][rh-1] << endl;
	}
	return 0;
}