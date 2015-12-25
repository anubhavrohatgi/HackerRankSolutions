#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;


int main()
{
	int n;
	cin >> n;

	vector<int> a;

	int npos = 0;
	int nzero = 0;
	int nneg = 0;	

	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		a.push_back(temp);

		if (temp > 0)
			npos++;
		else if (temp < 0)
			nneg++;
		else
			nzero++;
	}
	
	
	cout << setprecision(3) << 1.0 * npos/a.size()<<endl;
	cout << setprecision(3) << 1.0 * nneg/a.size() << endl;
	cout << setprecision(3) << 1.0 * nzero/a.size() << endl;



	system("pause");
	return 0;
}