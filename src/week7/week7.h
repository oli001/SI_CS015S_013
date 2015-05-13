#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

template<typename T, typename Less = less<T>>
class MinHeap 
{
    public:
        const T & top()
        {
            return _heap.front();
        }
        
        void push(const T & elem)
        {
            if(empty())
            {   
                _heap.push_back(elem);
            }
            
            else
            {
                _heap.push_back(elem);
                propagate_up(_heap, _heap.size() - 1);
            }
        }
        // void pop()
        // {
        //     int temp = vec.at(0);
        //     vec.at(0) = vec.at(vec.size() - 1);
        //     vec.at(vec.size() - 1) = temp;
            
        // }
        
        bool empty()
        {
            return _heap.empty();
        }
        
        void heapify(const vector<T> & vec)
        {
            for(auto it = vec.begin(); vec != vec.end(); ++it)
            {
                push(*it);
            }
        }
        
        void print()
        {
            for(auto it = _heap.begin(); it != _heap.end(); ++it)
            {
                cout << *it << ' ';
            }
        }
    private:
        vector<T> _heap;
        Less _less;
        void propagate_up(vector<T>& vec, int index)
        {
            if(index == 0)
            {
                return;
            }
            
            if(_less(vec.at(index), vec.at((index - 1) / 2)))
            {
                int temp = vec.at((index - 1) / 2);
                vec.at((index - 1) / 2) = vec.at(index);
                vec.at(index) = temp;
            }
            propagate_up(vec, (index - 1) / 2);
        }
};