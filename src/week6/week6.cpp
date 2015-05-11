#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <list>
#include <fstream>

using namespace std;
#include "week6.h"

int main(int argc, char* argv[])
{
    // vector<int> myvec {3, 1, 32, 12, 35, 12, 2, 8};
    // pq_sort(myvec);
    
    // for(auto it = myvec.begin(); it != myvec.end(); ++it)
    // {
    //     cout << *it << ' ';
    // }
    
    // cout << endl;
    
    if(argc != 2)
    {
        cout <<"Error: " << endl;
        exit(-1);
    }
    
    else
    {
        ifstream inFS;
        inFS.open(argv[1]);
        vector<string> v;
        string s;
        UnorderedSet uS;
        
        if(inFS.is_open())
        {
            while(inFS >> s)
            {
                v.push_back(s);
            }
        }
        
        for(string& x: v)
        {
            uS.insert(x);
        }
        
        uS.print();
    }
    
    
    return 0;
}