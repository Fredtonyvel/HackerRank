#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
//#include <unordered_map>

using namespace std;

int number_needed(string a, string b) 
{
   int count = 0, diff = 0, diff2 = 0, result = 0;
   for (int i = 0; i < a.size(); i++)
   {
   		for (int j = 0; j < b.size(); j++)
   		{
   			if (a[i] == b[j])
   			{
   				count++;
   			}
   		}
   }

   diff = a.size()-count;
   diff2 = b.size()-count;
   result = abs(diff+diff2);

   return result;
}

/*string remove_duplicate(string a)
{
	for (int i = 0; i < a.size(); i++)
	{
		int j = i+1;
		while(j < a.size())
		{
			if (a[i] == a[j])
			{
				a.erase(j, 1);
			}
			else
				j++;
		}
	}
	return a;
}*/

//Function not relevant to coding challenge, but just for myself
void print(string z)
{
	cout << "String: ";
	for (int i = 0; i < z.size(); i++)
    {
    	//cout << "string[" << i << "] = " << z[i] << endl;
    	cout << z[i];
    }
    cout << "\n";
}

//Function not relevant to coding challenge, but just for myself
void printReverse(string y)
{	
	cout << "Reverse form: ";
	for (int i = (y.size()-1); i >= 0; i--)
    {
    	cout << y[i];
    }
    cout << "\n";	
}

int main()
{
    string a;
    cin >> a;
    string b;
    cin >> b;
   
    print(a);
    print(b);
    printReverse(a);
    printReverse(b);
    //cout << "Duplicates removed: " << remove_duplicate(a) << endl;
    //cout << "Duplicates removed: " << remove_duplicate(b) << endl;
 
    cout << number_needed(a, b) << endl;
    
    //string new_a = remove_duplicate(a);
	//string new_b = remove_duplicate(b);
    //cout << number_needed(new_a, new_b) << endl;
    
    return 0;
}