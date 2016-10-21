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

vector<int> array_left_rotation(vector<int> a, int size, int k) 
{
    int rotate = size - k;  //find difference to do right rotate
    vector<int> v(size);
    for (int i = 0; i < size; i++)
    {
        v[(i+rotate)%size] = a[i]; //store each element in a[] to v[i+rotate] but use % to keep them within array size
    }
    return v;
}

int main()
{
    int size;
    int k;
    cin >> size >> k;
    
    vector<int> a(size);
    for(int a_i = 0;a_i < size;a_i++)
    {
        cin >> a[a_i];
    }
    
    vector<int> output = array_left_rotation(a, size, k);
    for(int i = 0; i < size;i++)
        cout << output[i] << " ";
    cout << endl;
    
    return 0;
}
