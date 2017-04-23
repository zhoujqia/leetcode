#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib> 
#include <utility>
#include <list> 
using namespace std;

class Solution {
public:

    int lastRemaining(int n) {
        int  size = n;
        bool left = true;
        int  head = 1; 
        int  step = 1;
        while (size != 1)
        {
            if ( left || size % 2 == 1)
            {
                head = head + step; 
            }
            size /= 2;
            step *= 2;
            left = !left;

        }
        return head;
    }
};

int main(int argc, char const *argv[])
{

	return 0;
}