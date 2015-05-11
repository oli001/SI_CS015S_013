#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <list>
#include <fstream>

#ifndef WEEK6_H_
#define WEEK6_H_

#define NUM_BUCKETS 6159

using namespace std;

void pq_sort(vector<int> & v)
{
    priority_queue<int> a;
    
    int x = v.size() - 1;
    while(!v.empty())
    {
        a.push(v.at(x));
        v.pop_back();
        x--;
    }
    
    while(!a.empty())
    {
        v.push_back(a.top());
        a.pop();
    }
    
    reverse(v.begin(), v.end());
}

class UnorderedSet
{
    private:
        list<string> _buckets[6159];
        unsigned int str_hash(string s)
        {
            /*
             * This hash simply adds up
             * the ascii values of each character in
             * the string.
            */
            unsigned int hash_val = 0;
            unsigned int ascii_val = 0;
            for (char c : s) 
            {
                ascii_val = static_cast<unsigned int>(c);
                hash_val += ascii_val;
            
            }
            return hash_val;
        }
        
    public:
        int count(const string & elem)
        {
            list<string>::iterator p = find(
                (_buckets[str_hash(elem) % NUM_BUCKETS]).begin(),
                (_buckets[str_hash(elem) % NUM_BUCKETS]).end(), elem);
            return (p != (_buckets[str_hash(elem) % NUM_BUCKETS]).end());
        }
        void remove(const string & elem) 
        {
            (_buckets[str_hash(elem) % NUM_BUCKETS]).remove(elem);
        }
        
        void insert(const string & elem)
        {
            (_buckets[str_hash(elem) % NUM_BUCKETS]).push_back(elem);
        }
        
        void print() 
        {
           unsigned int used_buckets = 0;
           unsigned int num_elems = 0;
           for(unsigned int i = 0; i < NUM_BUCKETS; ++i) 
           {
                const auto & bucket = _buckets[i];
                if(!bucket.empty()) 
                {
                    ++used_buckets;
                    cout << "bucket #" <<  i << ':';
                    for(const auto & elem: bucket) 
                    {
                        cout << elem << ',';
                        ++num_elems;
                    }
                    cout << endl << endl;
                }
           }
           cout << "Number of buckets used: " << used_buckets
               << '/'  << NUM_BUCKETS  << endl;
           cout << "Number of total elements: " << num_elems << endl;
        }
};

#endif