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
using namespace std;


int main()
{
    vector< vector<int> > arr(6,vector<int>(6));
    
    for(int row = 0;row < 6;row++)
    {
    	for(int column = 0;column < 6;column++)
    	{
    		cin >> arr[row][column];
    	}
    }

    cout << endl;

    for(int row = 0;row < 6;row++)
    {
    	for(int column = 0;column < 6;column++)
    	{
    		cout << arr[row][column] << " ";
    	}
    	cout << endl;
    }

    cout << endl;

    int sum[16];
    int count = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            sum[count] = arr[i][j] + arr[i][j+1] + arr[i][j+2] +
                         arr[i+1][j+1] + arr[i+2][j] + arr[i+2][j+1] +
                         arr[i+2][j+2];
            cout << "sum[" << count << "] = " << sum[count] << " " << endl;
            count++; 
        }

    }

    cout << endl;

    sort(sum, sum+count);
    cout << "Max sum = " << sum[15] << endl;

    return 0;
}