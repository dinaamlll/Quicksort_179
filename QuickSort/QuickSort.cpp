#include <iostream>
using namespace std;

//array of integrers to hold values
int arr[20];
int cmp_count = 0; // number of comprasion
int mov_count = 0; // number of movement
int n;
void input() {
	while (true)
	{
		cout << "masukkan panjang element array :";
		cin >> n;

		if (n <= 20)
			break;
		else
			cout << "\nMaksimum panjang array adalah 20" << endl;

	}

	cout << "\n========================" << endl;
	cout << "\nEnter attau element" << endl;
	cout << "\n========================" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> arr[i];
	}
}
// swap the element at index x with the element at index y
void swip(int x, int y)
{
	int temp;
	temp = arr[x];
	arr[x] = arr[y];
	arr[y] = temp;
}
void q_short(int low, int high) 
{
	int pivot, i, j;
	if (low > high)	//Langkah 1
		return;

	//Partition the list into two parts
	//One containing elements less that or equal to pivot
	//Outher containing elemnt greather than pivot
	i = low + 1; // Langkah 2
	high; // Langkah 4
	pivot = arr[low];	//Langkah 2

	while (i <= j) // Langkah 10
	{
		// Search for an element greater than pivot 
		while ((arr[i] <= pivot) && (i <= high)) // Langkah 5
		{
			j++; // Langkah 6
			cmp_count++;
		}
		cmp_count++;
		// Search for an element less thaner equal to pivot
		while ((arr[j] > pivot) && (j >= low)) // Langkah 7
		{j--; // Langkah 8
		cmp_count++;
		}

