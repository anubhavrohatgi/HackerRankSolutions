#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int n;

	cin >> n;


	for (int i = 0; i < n; i++){

		for (int k = 0; k < n; k++)
		{
			if (k>n - i -2)
				cout << "#";
			else
				cout << " ";
		}
		cout << endl;
	}

	system("pause");
	return 0;
}
