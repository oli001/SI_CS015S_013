#include <iostream>
#include <map>
#include <vector>
#include <fstream>

using namespace std;

map<string, unsigned int> freq_map(vector<string> words)
{
    map<string, unsigned int> wordMap;
    
    auto it = words.begin();
    while(it != words.end())
    {
        wordMap[*it] += 1;
        ++it;
    }
    return wordMap;
}

vector<string> top_n(map<string, unsigned int> freq_map, unsigned int n = 5)
{
    vector<string> newVec(n);
    auto mit = freq_map.begin();
    auto vit = newVec.begin();
    
    
    
    while(mit != freq_map.end())
    {
        while(vit != newVec.end())
        {
            if(*vit == string())
            {
                *vit = mit->first;
            }
        }
        ++mit;
    }
    
    return newVec;
}

int main(int argc, char* argv[])
{
    vector<string> words;
    string file;
    map<string, unsigned int> counting;
    
    if(argc != 2)
    {
        cout << "Incorrect usage." << endl;
        return 0;
    }
    
    ifstream inFS;
    inFS.open(argv[1]);
    
    if(!inFS.is_open())
    {
        cout << "Couldn't find file" << endl;
        return 0;
    }
    
    string word;
    while(inFS >> word)
    {
        words.push_back(word);
    }
    
    inFS.close();
    
    counting = freq_map(words);
    
    string finding;
    
    while(finding != "QUIT!")
    {
        cout << "Find frequency of(type QUIT! to exit): ";
        cin >> finding;
        cout << counting[finding] << endl;
    }
    
    vector<string> most;
    most = top_n(counting, 2);
    
    cout << "Top 2 words: " << endl;
    auto iter = most.begin();
    while(iter != most.end())
    {
        cout << *iter << endl;
    }
    return 0;
}