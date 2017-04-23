#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib> 
#include <utility> 
#include <climits>
using namespace std;

class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        int size = nums.size();
        int min_len = INT_MAX;
        int begin = 0, end = 0, sum = 0;
        for (end = 0; end < size; end++) {
            sum += nums[end];
            while(sum >= s) {
                min_len =  min(min_len, end-begin+1);
                sum -= nums[begin++];

            } 
        }
        return min_len==INT_MAX?0:min_len;   
    }
};


int main(int argc, char const *argv[])
{
	vector<int> v1{1,2,4};
	Solution s;
	int ans = s.minSubArrayLen(7, v1);
    cout << ans << endl;

	return 0;
}