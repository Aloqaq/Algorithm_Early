#include <bits/stdc++.h> 
#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cin >> s;
	
	if (s[0] == '-') cout << s[0];
	
	int pos = s.find('E');
	string integer = s.substr(1,1);
	string point = s.substr(3,pos-3);
	int expon = stoi(s.substr(pos+1));
	
	if (expon == 0) {
		cout << integer << "." << point << endl;
	}
	else if (expon < 0) {
		cout << "0.";
		for (int i = 0; i < abs(expon)-1; i++)
			cout << "0";
		cout << integer << point << endl;
	}
	else {
		cout << integer;
		
		int length = point.size();
		if (length < expon) {                               // 尾数位数 < 指数
			cout << point;
			for (int i = 0; i < expon - length; i++)
				cout << "0";
		}
		else {
			for (int i = 0; i < length; i++) {              // 尾数位数 > 指数
            	cout << point[i];
            	if (length-expon > 0 && i == expon-1)
                	cout << ".";
        	}
		}
	}
	
	return 0;
}

