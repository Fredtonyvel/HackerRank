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

int main()
{
    int n;
    cin >> n;
    
    vector<int> arr(n);

    cout << "Original Array: ";
    for(int arr_i = 0; arr_i < n; arr_i++)
    {
    	cin >> arr[arr_i];
    	//cout << arr[arr_i] << " ";
    }

    cout << endl;

    cout << "Array in Reverse: ";
    for (int arr_j = arr.size()-1; arr_j >= 0; arr_j--)
    {
        cout << arr[arr_j] << " ";
    }

    cout << endl;

    return 0;
}