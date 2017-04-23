
#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib> 
#include <utility>
#include <queue> 
using namespace std;

class Solution {
public:
     int lastRemaining(int n) {
        int head = 1;
        int size = n;
        int step = 1;
        bool left = true;
        while (size != 1)
        {
            if (left || size % 2 == 1) head += step;
            
            size /= 2;
            step *= 2;
            left = !left;

        }
        return head;
         
     
    }
};
int main(int argc, char const *argv[]) {
    Solution s;
    cout << s.lastRemaining(1) << endl;
    cout << s.lastRemaining(2) << endl;
    cout << s.lastRemaining(6) << endl;
    cout << s.lastRemaining(7) << endl;
    cout << s.lastRemaining(8) << endl;
    return 0;
}
