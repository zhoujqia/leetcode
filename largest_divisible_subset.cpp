#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib> 
#include <utility>
#include <algorithm> 
using namespace std;

class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
    	int size = nums.size();
    	vector<int> ans;
    	if (size == 0) {
    		return ans;
		}
    	sort(nums.begin(), nums.end());
    	int max_index = -1;
    	int max_size = 1;
    	vector<int> dp(size, 1);
    	vector<int> pre(size, -1);
	
		for (int i = 1; i < size; i++) {
			for (int j = 0; j < i; j++) {
				if (nums[i] % nums[j] == 0 && dp[i] < (dp[j] + 1)) {
					dp[i] = dp[j] + 1;
					pre[i] = j;
					if(dp[i] > max_size) {
						max_size = dp[i];
						max_index = i;
					}
				}
			}
		}

	
        if (max_index == -1) {
        	ans.push_back(nums[0]);
        	return ans;	
        }
        ans.push_back(nums[max_index]);
        int index = max_index;
  		while(pre[index]!=-1) {
  			index = pre[index];
  			ans.push_back(nums[index]);
		}
        sort(ans.begin(), ans.end());
        return ans;
    }
};

int main(int argc, char const *argv[])
{
	vector<int> v1{2,3};
	Solution s;
	vector<int> ans = s.largestDivisibleSubset(v1);
	for(int i = 0; i < ans.size(); i++)
	{
		cout << ans[i] << " " ;
	}
	return 0; 
} 




