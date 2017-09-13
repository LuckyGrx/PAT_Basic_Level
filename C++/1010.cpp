#include<iostream>
using namespace std;
int main()
{
	int ratio, index;//系数、指数
	bool isFirst = true;
	do {
		cin >> ratio >> index;
		if (index > 0) {
			if (isFirst) {
				cout << ratio*index << " " << index - 1;
				isFirst = false;
			}else
				cout <<" "<< ratio*index << " " << index - 1;
		}
		if (isFirst)
			cout << "0 0";
	} while (getchar() != '\n');
	return 0;
}