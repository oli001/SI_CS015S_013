#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
using namespace std;

class SortGreater {
    public:
        bool operator() (const int & a, const int & b ) const {
            return a > b;
        }
};

class IsEven {
    public:
        bool operator() (const int & x) const {
            return x % 2 == 0;
        }
};

int main() {
    vector<int> from_vector {1, 2, 3, 4};
    list<int> to_list(2);

    sort(from_vector.begin(), from_vector.end(), SortGreater());
    for (int elem : from_vector) {
        cout << elem << ' ';
    }
    cout << endl;

    copy_if(from_vector.begin(), from_vector.end(), to_list.begin(), IsEven());

    for (int elem : to_list) {
        cout << elem << ' ';
    }
}