#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <string>
using namespace std;

int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   

	int n;
	string name, query_name;
	int phone;

	cin >> n;	//readin integer for creating test phone_numbers cases

	//declared a map object with "string" key type and "int" value
	map<string, int> phone_number;

	for (int i = 0; i < n; i++)		
	{
		cin >> name >> phone;	//readin key and value
		
		//Method #1: Creating key/value pair
		phone_number[name] = phone;

		//Method #2: Insert the key/value pair
		//phone_number.insert(pair<string,int>(name, phone));
	}

	cout << endl;

	while (cin >> query_name)
	{
		//Search through query to find name and its value
		//If name readin exist, phone number is printed
		//Otherwise, name doesn't exist
		if (phone_number.find(query_name) != phone_number.end())
		{
			cout << query_name << "=" << phone_number.find(query_name)->second << endl;
		}
		else
			cout << "Not Found" << endl;
	}

	cout << endl;

	map<string, int>::iterator it;

	//Print contents of the map
	for (it = phone_number.begin(); it != phone_number.end(); it++) 
	{
		cout << it->first << "=" << it->second << endl;
	}

    return 0;
}