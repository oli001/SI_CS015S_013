#include <iostream>
#include <vector>

using namespace std;

template <typename BidirectionalIter>
void my_reverse(BidirectionalIter first, BidirectionalIter last)
{
    for(int i = 0; i < last; ++i)
    {
        
    }
}

int main()
{
    vector<int> intvec {2, 3, 4, 6, 6, 9};
    
    vector<int>::iterator vec_it = intvec.begin();
    
    my_reverse(intvec.begin(), intvec.end());
    for(int i: intvec)
    {
        cout << i;
    }
    cout << endl;
}