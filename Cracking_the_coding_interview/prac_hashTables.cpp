#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

static const int tableSize = 50;

struct node
{
	int data;
	node* next;
};

node* HashTable[tableSize];

int hash(vector<string> note)
{
	int index;
	int Hash;
	int x = 0; //used for string conversion

	for (int i = 0; i < note.size(); i++)
	{
		stringstream convert(note[i]);
		convert >> x;
		Hash = Hash + x; 
	}

	index = Hash % tableSize;

	return index;
}

void printArray(vector<string> note)
{
	cout << "Note: ";
	for (int i = 0; i < note.size(); ++i)
	{
		cout << note[i] << " "; 
	}
	cout << endl;
}

int main()
{
	int m, n;
	cout << "Enter values for m and n\n";
	cin >> m >> n;	
	vector<string> note1(m);
	for (int i = 0; i < m; i++)
	{
		cin >> note1[i];
	}

	vector<string> note2(n);
	for (int j = 0; j < n; j++)
	{
		cin >> note2[j];
	}

	//printArray(note1);
	//printArray(note2);	

	cout << hash(note1) << endl;


	return 0;
}