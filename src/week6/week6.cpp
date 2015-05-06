#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <list>

using namespace std;
#include "week6.h"

int main()
{
    vector<int> myvec {3, 1, 32, 12, 35, 12, 2, 8};
    pq_sort(myvec);
    
    for(auto it = myvec.begin(); it != myvec.end(); ++it)
    {
        cout << *it << ' ';
    }
    
    cout << endl;
    return 0;
}