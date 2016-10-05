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
#include <iomanip>
#include <algorithm>
//#include <unordered_map>

using namespace std;

int main()
{
    int num, num_remainder=0, count=0, max=0;
    cin >> num;
    cout << num << " = ";

    list<string> binary;

    while (num > 0)
    {
        num_remainder = num%2;
        num = num/2;

        //converts integer to string
        stringstream convert;
        convert << num_remainder;
        string bin_str = convert.str();
        //cout << bin_str << endl;

        binary.push_front(bin_str);

        //Checks for max number of consecutive 1's
        if (num_remainder == 1)
        {
            count++;
            if (count >= max)
                max = count;
        }
        else
            count = 0;
    }

    //while loop to ensure that decimal converted into binary
    //is padded with 0s. For example: on screen 1 will print 
    //as 1, but with while loop, it will print 0001  
    while(binary.size()%4 != 0)
    {
        //cout << "Size is not divisible by 4! \nPadding 0..." << endl << endl;
        binary.push_front("0");
    }
    
    for (list<string>::iterator it = binary.begin(); it != binary.end(); it++)
    {
        cout << *it;
    }
    cout << endl;

    cout << "Max number of consecutive 1\'s is: " << max << endl;

    return 0;
}