#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference 
{
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;
  	
  	// Add your code here
  	Difference(vector<int> ele_array)
  	{
  		for (int i = 0; i < ele_array.size(); i++)
  		{
  			elements.push_back(ele_array.at(i));
  		}

  		/*for (vector<int>::iterator it = elements.begin(); it != elements.end(); it++)
  		{
  			cout << *it << " ";
  		}
  		cout << endl;*/
  	}

  	void computeDifference()
  	{
  		sort(elements.begin(), elements.end());

  		maximumDifference = abs(elements.front() - elements.back());
  	}

}; // End of Difference class

int main() 
{
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference << endl;
    
    return 0;
}

