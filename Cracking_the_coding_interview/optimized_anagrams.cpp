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
    int count = 0;
    vector<int> freq(26, 0);
    for (int c = 0; c < a.size(); c++) 
    {
        ++freq[c - 'a']; 
    }
    for (int c = 0; c < b.size(); c++) 
    {
        --freq[c - 'a']; 
    }
    for (int val = 0; val < freq.size(); val++) 
    { 
        count += abs(val); 
    }
    return count;   
}

int main(){
    string a;
    cin >> a;
    string b;
    cin >> b;

    cout << number_needed(a, b) << endl;
    return 0;
}