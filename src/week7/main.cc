#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;
#include "week7.h"

int main()
{
    MinHeap<int> mh;
    mh.push(6);
    mh.push(12);
    mh.push(43);
    mh.push(64);
    mh.push(8);
    mh.push(42);
    mh.push(31);
    
    mh.print();
    cout << endl;
    return 0;
}