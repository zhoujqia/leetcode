#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib> 
#include <utility> 
using namespace std;

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
    	int size = nums.size();
    	for (int i = 0; i < size; )
    	{
    		//nums[i] in range[1,n] shoud put in the position nums[i] - 1
    		if (nums[i] > 0 && nums[i] <= size && nums[nums[i]-1] != nums[i])
    		{
    			swap(nums[i],nums[nums[i]-1]);
    		} 
    		//nums[i] in the right position or nums[i] out of range[1,n]
    		else {
				i++;
    		}
    	}

    	for (int i = 0; i < size; ++i)
    	{
    		if (nums[i] != i+1)
    		{
    			return i+1;
    		}
    	}

    	return size+1;
    }
        
};


int main(int argc, char const *argv[])
{
	vector<int> v1{3,4,-1,1};
	vector<int> v2{1,2,3};
	vector<int> v3{};
	vector<int> v4{2,3,1};
	Solution s;
	cout << s.firstMissingPositive(v1) << endl;
	cout << s.firstMissingPositive(v2) << endl;
	cout << s.firstMissingPositive(v3) << endl;
	cout << s.firstMissingPositive(v4) << endl;
	return 0;
}

