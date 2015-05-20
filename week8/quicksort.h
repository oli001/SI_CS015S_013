#include <utility>
#include <algorithm>
#include <vector>
#include <functional>
#include <iostream>
#include <iterator>

using namespace std;
/*
 * takes three values and uses comp to put them in sorted order.
 * the median ends up at b.
 */
template<typename T, typename Compare = less<T>>
void median_of_three(T & a, T & b, T & c, Compare comp = Compare())
{
    if(comp(c,a))
    {
        swap(c,a);
    }
    
    if(comp(b,a))
    {
        swap(b,a);
    }
    
    if(comp(c,b))
    {
        swap(c,b);
    }
}

// /*
//  * partitions v from first to last using mid as the pivot
//  */
// template<typename T, typename Compare = less<T>>
// int partition(vector<T> & v, int first, int mid, int last, Compare comp = Compare());

/*
 * same as other partition;
 * creates two vectors for the left and right, then puts all the elements (except for mid)
 * in the two. Then, they are put back in v so that v is partitioned, and returns the
 * index of the pivot value.
 */
template<typename T, typename Compare = less<T>>
int naive_partition(vector<T> & v, int first, int mid, int last, Compare comp = Compare())
{
    vector<T> x;
    vector<T> y;
    int pivot = v.at(mid);
    swap(v.at(last),v.at(mid));
    
    int index = 0;
    for(int i = first; i < last; ++ i)
    {
        if(comp(v.at(i), pivot))
        {
            x.push_back(v.at(i));
            ++index;
        }
        
        else
        {
            y.push_back(v.at(i));
        }
    }
    
    int j = 0;
    while(j < x.size())
    {
        v.at(j) = x.at(j);
        ++j;
    }
    
    v.at(j) = pivot;
    ++j;
    
    for(int k = 0; k < y.size(); ++k)
    {
        v.at(j) = y.at(k);
        ++j;
    }
    
    return index;
}

/*
 * uses the median of three pivot selection method, and the naive partition method
 * to implement quicksort
 *
 * has a base case of a list of size 1 or fewer
 */
// template<typename T, typename Compare = less<T>>
// void naive_quicksort(vector<T> & v, int first, int last, Compare comp = Compare())
// {
//     if( <= 1)
//     {
//         return;
//     }
    
    
// }

/*
 * overload
 */
template<typename T>
void naive_quicksort(vector<T> & v) 
{
    naive_quicksort(v, 0, v.size());
}

// /*
//  * uses the median of three pivot selection method, and the faster partition method
//  *
//  * has a base case of a list of size 1 or fewer
//  */
// template<typename T, typename Compare = less<T>>
// void quicksort(vector<T> & v, int first, int last, Compare comp = Compare());

// /*
//  * overload
//  */
// template<typename T>
// void quicksort(vector<T> & v) {
//     quicksort(v, 0, v.size());
// }

// /*
//  * InsertionSort
//  */
// template<typename T, typename Compare = less<T>>
// void insertionsort(vector<T> & v, int first, int last, Compare comp = Compare()) {
//     for(int sorted = first + 1; sorted < last; ++sorted) {
//         for(int i = sorted; i > first && comp(v.at(i), v.at(i-1)); --i) {
//             swap(v.at(i), v.at(i-1));
//         }
//     }
// }

// /*
//  * overload
//  */
// template<typename T>
// void insertionsort(vector<T> & v) {
//     insertionsort(v, 0, v.size());
// }

// /*
//  * uses the median of three pivot selection method and the faster partition method
//  *
//  * insertion sort is called for reasonably small lists
//  */
// template<typename T, typename Compare = less<T>>
// void faster_quicksort(vector<T> & v, int first, int last, Compare comp = Compare());

// /*
//  * overload
//  */
// template<typename T>
// void faster_quicksort(vector<T> & v) {
//     faster_quicksort(v, 0, v.size());
// }
