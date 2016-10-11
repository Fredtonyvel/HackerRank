#include <iostream>

using namespace std;

void print_array(int array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;
}

const int numOfRows = 3;
const int numofColumns = 3;

void fill_2D_array(int array[numOfRows][numofColumns])
{
	int cell;

	for (int row = 0; row < numOfRows; ++row)
	{
		for (int column = 0; column < numofColumns; ++column)
		{
			cin >> cell;
			array[row][column] = cell;
		}
	}
}

void print_2D_array(int array[numOfRows][numofColumns])
{
	for (int row = 0; row < numOfRows; ++row)
	{
		//cout << "Cell " << (row + 1) << " = ";
		for (int column = 0; column < numofColumns; ++column)
		{
			cout << array[row][column] << " ";
		}
		cout << endl;
	}
}

int main()
{	
	//Using an array
	int array[] = {1,2,3,4,5,6,7,8,9,10};
	//print_array(array, 10);

	//Praciting a 2D array
	int array2[numOfRows][numofColumns];

	fill_2D_array(array2);
	print_2D_array(array2);

	return 0;
}