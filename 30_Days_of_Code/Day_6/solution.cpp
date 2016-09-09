#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int Test;
    char s[10000];

    cout << "Enter number of test cases: ";
    cin >> Test;
    cout << "Number of test cases = " << Test << endl;

    cout << "Enter string" << endl;

    for (int i = 0; i < Test ; i++)
    {
        cin >> s;

        //cout << "s[i] = " << s << endl;

        for (int j = 0; j < strlen(s); j++)
        {
            if (j % 2 == 0)
                cout << s[j]; 
        }

        cout << " ";

        for (int k = 0; k < strlen(s); k++)
        {
            if (k % 2 != 0)
                cout << s[k];
        }

        cout << endl;
    } 
    
    return 0;
}



/*int test;
    int size = 100;
    char s[size];
    char s2[size];
    
    cin >> test;
    cin >> s;
    cin >> s2;
    
    //cout << test << endl;
    //cout << s << "\n" << s2 << endl;

    //Used strlen() to make loop until the length of the string
    for (int i = 0; i < strlen(s); i++)
    {
        //cout << "s[" << i << "] = " << s[i] << endl;
        //cout << s[i];

        if(i % 2 == 0)  //Used to check for even numbers
            //cout << "s[" << i << "] = " << s[i] << endl;
            cout << s[i];
    }

    cout << " ";

    for (int i = 0; i < strlen(s); i++)
    {
        //cout << "s[" << i << "] = " << s[i] << endl;
        //cout << s[i];

        if(i % 2 != 0)  ////Used to check for odd numbers
            //cout << "s[" << i << "] = " << s[i] << endl;
            cout << s[i];
    }

    cout << endl;

    for (int j = 0; j < strlen(s2); j++)
    {    
        //cout << "s2[" << j << "] = " << s2[j] << endl;
        //cout << s2[j];
        if(j % 2 == 0)
            cout << s2[j];
    }

    cout << " ";

    for (int j = 0; j < strlen(s2); j++)
    {    
        //cout << "s2[" << j << "] = " << s2[j] << endl;
        //cout << s2[j];
        if(j % 2 != 0)
            cout << s2[j];
    }

    cout << endl;*/