#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib> 
#include <utility> 
using namespace std;

class Solution 
{
public:
    vector<int> twoSum(vector<int>& numbers, int target) 
    {
        int low = 0, high = numbers.size()-1;
        while(low < high && numbers[low] + numbers[high] != target)
        {
        	if (numbers[low] + numbers[high] > target)
        	{
        		high--;
        	} else {
        		low++;
        	}

        }

        if(low < high)
        {
        	return vector<int> ({low+1, high+1});
        } else {
        	return vector<int> ({});
        }
    }
};


int main(int argc, char const *argv[])
{
	vector<int> v1{1,3,4,6};
	Solution s;
	vector<int> ans = s.twoSum(v1, 9);
	for(int i = 0; i < ans.size(); i++)
		cout << ans[i] << " ";

	return 0;
}