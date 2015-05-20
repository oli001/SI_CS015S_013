#include <utility>
#include <algorithm>
#include <vector>
#include <functional>
#include <iostream>
#include <iterator>

using namespace std;
#include "quicksort.h"

int main()
{
    int a = 2;    
    int b = 1;
    int c = 1;
    median_of_three(a, b, c);
    
    cout << "In order: " << a  << ' ' << b << ' ' << c << endl;
    
    vector<int> test = {1 , 3, 8, 54, 2, 43, 23, 0};
    int index = naive_partition(test, 0, test.size()/2, test.size() - 1);
    
    for(auto it = test.begin(); it != test.end(); ++it)
    {
        cout << *it << ' ';
    }
    cout << endl << "Index: " << index << endl;
    
    return 0;
}