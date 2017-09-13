#include<iostream>
using namespace std;
int gcd(int a, int b) {//最大公约数
	return b == 0 ? a : gcd(b, a%b);
}

int main() {
	int n1, n2, m1, m2, k;
	char c;
	cin >> n1 >> c >> m1 >> n2 >> c >> m2 >> k;
	int lcm = (m1*m2 / gcd(m1, m2))*k / gcd((m1*m2 / gcd(m1, m2)), k);//分母m1、分母m2、K的最小公倍数
	int big, small;
	if (n1*lcm / m1 > n2*lcm / m2) {
		big = n1*lcm / m1;
		small = n2*lcm / m2;
	}else {
		small = n1*lcm / m1;
		big = n2*lcm / m2;
	}

	bool isFirst = true;
	for (int i = small+1; i < big; i++) {
		if (i % (lcm / k) == 0 && gcd(i / (lcm / k), k) == 1) {//分数之间，不包括这两个分数
			if (isFirst) {
				cout << i / (lcm / k) << "/" << k;
				isFirst = false;
			}
			else
				cout << " " << i / (lcm / k) << "/" << k;
		}
	}
	cout << endl;
	return 0;
}