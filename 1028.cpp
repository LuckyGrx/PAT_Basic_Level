#include<iostream>
#include<string>
using namespace std;;

struct personInfo {
	string name;
	string year_month_day;
};

int main() {
	int number;;
	cin >> number;
	personInfo* personInfos = new personInfo[number];
	int mark=0;
	for (int i = 0; i < number; i++) {
		string name, year_month_day;
		cin >> name >> year_month_day;
		if (year_month_day <= "2014/09/06"&&year_month_day >= "1814/09/06") {
			personInfos[mark].name = name;
			personInfos[mark].year_month_day = year_month_day;
			mark++;
		}
	}
	int min = 0; 
	int max = 0;
	for (int i = 0; i < mark; i++) {
		if (personInfos[i].year_month_day > personInfos[max].year_month_day)
			max = i;
		if (personInfos[i].year_month_day < personInfos[min].year_month_day)
			min = i;
	}
	if (mark != 0)
		cout << mark << " " << personInfos[min].name << " " << personInfos[max].name;
	else
		cout << mark;
	return 0;

}