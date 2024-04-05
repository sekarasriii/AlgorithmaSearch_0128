#include <iostream>
using namespace std;

int arr[20];
int n;
int i;

void input()
{
	while (true)
	{
		cout << "Enter the number of elements in the array : ";
		cin >> n;
		if ((n > 0) && (n <= 20))
			break;
		else
			cout << "\nArray should have minimum 1 and minimum 20 elements.\n\n";
	}

	//Accept array element
	cout << "\n----------\n";
	cout << "Enter array elements\n";
	cout << "------------\n";


}
