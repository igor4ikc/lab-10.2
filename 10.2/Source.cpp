#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int ProcessTXT2(char* fname)
{
    ifstream fin(fname);
    string s;
    int k = 0;
    while (fin >> s)
    {
        k++;
        cout << k << ": " << s << endl;
    }
    return k;
}
size_t MinLength(const string s)
{
	int k = 0;
	size_t len = 0,
		min;
	size_t start = 0,
		finish;
	while ((start = s.find_first_of("a", start)) != -1)
	{
		finish = s.find_first_not_of("a", start + 1);
		if (finish == -1)
			finish = s.length();
		len = finish - start;
		if (k == 0)
			min = len;
		k++;
		if (len < min)
			min = len;
		start = finish + 1;
	}
	return;
}
int main()
{
    char fname[100];
	string str;
    cout << "enter file name 1: "; cin >> fname;
	cout << "begins a: " << MinLength(str) << endl;
    return 0;
}