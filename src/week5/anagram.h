#include <iostream>
#include <map>

using namespace std;

class Anagram
{
    private:
        map<string, vector<string>> s;
    public:
        const vector<string>& get_anagrams(string a)
        {
            string s;
            s = merge_sort(a);
            
            for(auto fit = map.begin(); fit != map.end(); ++fit)
            {
                if(s == fit->first)
                {
                    fit.second->push_back(a);
                    return fit->second;
                }
            }
            
            s[a];
        }
}