#include<iostream>
#include<string>
#include<cstring>

#define _CRT_SECURE_NO_WARNINGS

int main() {
	using namespace std;
	char charr1[20];
	char charr2[20] = "jaguar";
	string str1;
	string str2 = "panther";

	str1 = str2;
	strcpy_s(charr1, charr2);	//这里用strcpy会报unsafe的错？ 

	str1 += " paste";
	strcat_s(charr1, " juice");
	
	int len1 = str1.size();
	int len2 = strlen(charr1);

	cout << "The string " << str1 << " contains " << len1 << " characters.\n";
	cout << "The string " << charr1 << " contains " << len2 << " characters.\n";


	//cout << str1 << "\n" << str2 << endl;
	//cout << charr1 << "\n" << charr2 << endl;


	return 0;

}