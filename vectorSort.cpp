#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

inline bool sortAscending(int a, int b)
{
	return a < b;
}


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */


	int n;
	cin >> n;
	std::vector<int> list;

	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		list.push_back(a);
	}

	std::sort(list.begin(), list.end(), sortAscending);

	for (int i = 0; i < list.size(); i++)
		cout << list[i] << " ";

	system("pause");
	return 0;
}
