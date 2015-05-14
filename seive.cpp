// Seive of Eratosthenes
// Daniel Salazar
// Assignment 8
// 
const int MAX = 3302;
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char output[256] = "out.txt";
	ofstream out(output);
	if(!out)
	{
		return -1;
	}
	bool a[3302];
	for(int x = 0; x < MAX; x++)
	{
		a[x] = true;
	}
	a[0] = false;
	a[1] = false;
	for(int n = 2; n <= MAX / 2; n++)
	{
		if(a[n] == true)
		{
			for(int m = n+n; m < MAX; m+=n)
			{
				a[m] = false;
			}
		}
	}
	int n = 0;
	for(int i = 0; i < MAX; i++)
	{
		if (a[i] == true)
		{
			out << i << " ";
			if( (n % 8) == 0)
			{
				out << endl;
			}
			n++;
		}
		
	}
	system("pause");
	return 0;
}

