#include <iostream>
#include <random>
#include <time.h>

using namespace std;

void CountSort(int *a, int *b, int k, int n);

int main() 
{
	int n;

	cout << "Enter the size of array: ";

	cin >> n;

	int *a = new int[n];

	int k;

	cout << "Enter the max: ";

	cin >> k;

	srand(time(NULL));

	for (int i = 0; i < n;++i)
	{
		a[i] = rand() % k;
		cout << a[i] << " ";
	}

	cout << endl;

	int * b = new int[n];

	for (int i = 0; i < n; ++i) 
	{
		b[i] = 0;
	}

	CountSort(a,b,k,n);

	for (int i = 0; i < n; ++i) 
	{
		cout << b[i] << " ";
	}

	return 0;
}

void CountSort(int *a, int *b, int k, int n) 
{
	int *c = new int[k];

	for (int i = 0; i < k; ++i) 
	{
		c[i] = 0;	
	}
	cout << "a: ";
	for (int j = 0; j < k; ++j)
	{
		for (int i = 0; i < n; ++i) 
		{
			if (a[i] == j)
			{
				++c[j];
			}
		}
		cout << c[j] << " ";
	}
	cout << endl;

	int cnt = 0;
	for (int i = 0; i < k; ++i)
	{
		while (c[i] != 0)
		{
			b[cnt] = i;
			--c[i];
			++cnt;
		}
		
	}
	cout << endl;
	/*for (int i = 0; i < n; ++i)
	{
		int x = a[i];
		b[c[x]] = x;
		++c[x];
	}*/
}