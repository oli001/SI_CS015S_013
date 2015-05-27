#ifndef GRAPH_H_
#define GRAPH_H_

#include <iostream>

using namespace std;

class AdjacencyMatrix{
    private:
        int n;
        int **adj;
        bool *visited;
    public:
        AdjacencyMatrix(int n)
        {
            this->n = n;
            visited = new bool [n];
            adj = new int* [n];
            
            for (int i = 0; i < n; i++)
            {
                adj[i] = new int [n];
                for(int j = 0; j < n; j++)
                {
                    adj[i][j] = 0;
                }
            }
        }
        
        ~AdjacencyMatrix()
        {
            delete visited[];
            for(int i = 0; i < n; i++)
            {
                delete adj[i][];
            }
            delete adj;
        }
        
        void add_edge(int origin, int destin, int weight)
        {
            adj[origin - 1][destin - 1] = weight;
        }
        
        void display()
        {
            for(int i = 0; i < n; i++)
            {
                for(int j = 0; j < n; j++)
                {
                    cout << adj[i][j] << ' ';
                }
                cout << endl;
            }
        }
        /* etc. */
};

#endif