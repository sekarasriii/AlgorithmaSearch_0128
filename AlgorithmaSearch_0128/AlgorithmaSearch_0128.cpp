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
	for (i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> arr[i];
	}
}

void LinearSearch()
{
	char ch;
	int ctr; //Number of comparisons
	int item;

	do {
		// Accept the number to be searched
		cout << "\nEnter the elmenent you want to search : "; //step 1
		cin >> item;

		ctr = 0;
		i = 0; // step 2
		while (i < n) //step 3

		
	}
}