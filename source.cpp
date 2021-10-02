//Run program on any c++ compiler. 
#include <iostream>
#define N 100 //max array ize size
using namespace std;

void print_array(float target[], int n);
void exchange_(float &a, float &b);
void signed_sort(float floatArr[], int n);

int main()
{
	float floatArr[] = { 4, 3, -2, 0, 2, 9, -1, 10, 0, 5, 23, -4 };
	int n = sizeof(floatArr) / sizeof(floatArr[0]);
	signed_sort(floatArr, n);
	print_array(floatArr, n);
	return 0;
}

void signed_sort(float floatArr[], int n)
{
	int posIndex = 0;
	int negIndex = 0;
	for (int i = 0; i < n; i++)
	{
		if (floatArr[i] < 0)
		{

			exchange_(floatArr[negIndex], floatArr[i]);
			negIndex++;
		}
	}
}

void exchange_(float& a, float& b)
{
	float temp = a;
	a = b;
	b = temp;
}

void print_array(float target[], int n)
{
	for (int i = 0; i < n; i++)
		cout << target[i] << " ";
	cout << endl;
}
