#include <iostream>
using namespace std;

string electronConfig(int input)
{
	string order[22] = {"1s","2s","2p","3s","3p","4s","3d","4p","5s","4d","5p","6s","4f","5d","6p","7s","5f","6d","7p","6f","7d","7f"};
	string output = "";
	for (int i = 0; i < 22;i++)
	{
		int maxAmount;

		switch (order[i][1])
		{
			case 's':
			maxAmount = 2;
			break;
			case 'p':
			maxAmount = 6;
			break;
			case 'd':
			maxAmount = 10;
			break;
			case 'f':
			maxAmount = 14;
			break;
		}
		
		if (input == 0)
		{
			break;
		}
		if (input >= maxAmount)
		{
			output+=order[i] + "^"+ to_string(maxAmount);
			input-=maxAmount;
		}else
		{
			output+=order[i] + "^"+to_string(input);
			input = 0;
		}
		output+= " ";
	}
	return output;
}

int main() {
	system("clear");
  cout << "Number of electrons: \n";
	int input;
	cin >> input;
	cout << electronConfig(input);
} 
