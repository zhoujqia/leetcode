#include <iostream>
#include <algorithm>
#include <cstdlib> 
#include <cmath>
#include <climits>

using namespace std;


class Solution {
public:
    int reverse(int x) {
        long long ans = 0;
        int y = abs(x);

        do {           
            ans = ans*10 + y%10;
            y = y/10;
       } while (y);

        ans = x > 0 ? ans : -ans;
        
        if ( ans > INT_MAX || ans < INT_MIN ) return 0;

        return (int) ans;

    }
};


int main(int argc, char const *argv[])
{
    int x = pow(2,31) - 1;
    int y = 1004;

    Solution s;
    cout << s.reverse(x) << endl;
    cout << s.reverse(y) << endl;
    return 0;
}