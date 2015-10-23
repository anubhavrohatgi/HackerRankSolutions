#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
#include <map>

using namespace std;


bool isPanagram(std::string s)
{
	std::map<char, int> lut; // lookup table

	//Fill in the map or prepare the lookup table
	for (int i = 65; i < 91; i++)
	{
		lut[static_cast<char>(i)] = 0;
		lut[static_cast<char>(i + 32)] = 0;
	}


	//Now let us increment the counters at the location specified by the characters
	for (int l = 0; l < s.length(); l++)
	{
		if ((s[l] >= 'A' && s[l] <= 'Z') || (s[l] >= 'a' && s[l] <= 'z'))
		{
			if ((s[l] >= 65 && s[l] <= 90)) //capital
			{
				lut[static_cast<char>(s[l])]++; // upper case
				lut[static_cast<char>(s[l] + 32)]++; // lower case
			}
			else
			{
				lut[static_cast<char>(s[l])]++; // lower case
				lut[static_cast<char>(s[l] - 32)]++;//upper case
			}
		}
		else if (s[l] == 32)
		{
			continue;
		}
		else
			return false;
	}

	//Now we loop over the alphabet keys and count if they have been used atleast once
	for (std::map<char, int>::iterator ii = lut.begin(); ii != lut.end(); ++ii)
	{
		if ((*ii).second == 0)		
			return false;
			/*std::cout << (*ii).first << ": " << (*ii).second << endl;
			cout << "\n\tNot panagram  ";*/		
	}

	return true;
}




int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */

	std::map<char, int> lut;

	//Fill in the map or prepare the lookup table
	for (int i = 65; i < 91; i++)
	{
		lut[static_cast<char>(i)] = 0;
		lut[static_cast<char>(i + 32)] = 0;
	}
	
	std::string sent;

	std::getline(std::cin, sent);


	std::cout << "\nThe string is :: " << ((isPanagram(sent) == true && sent.length() < 1000) ? "panagram" : "not panagram")<<std::endl;

	system("pause");

	return 0;
}
