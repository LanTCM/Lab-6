#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int input1, input2, input3, input4, input5, input6, input7, input8, input9;
	int binary[9];
	ifstream infile;
	infile.open("BinaryIn.dat");
	infile >> input1 >> input2 >> input3 >> input4 >> input5 >> input6 >> input7 >> input8 >> input9 >> binary[9];

	binary[0] = input1;
	binary[1] = input2;
	binary[2] = input3;
	binary[3] = input4;
	binary[4] = input5;
	binary[5] = input6;
	binary[6] = input7;
	binary[7] = input8;
	binary[8] = input9;

	cin.get(binary, 9);
	
	for (int i; i < 9; i++)
	{
		if (binary[i] == 1)
		{
			if (binary[i] == 0)
			{
				while (i < 9)
				{
					for (int o; i < 3; i++)
					{
						i * (2 ^ o);
						cout << binary[i]
					}
				}	
			}
			else
			{
				cout << "Bad Digit On Input";
			}
		}
	}

	infile.close();

	return 0;
}