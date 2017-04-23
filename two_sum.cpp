#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib> 
#include <utility> 
#include <map>
using namespace std;

class Solution 
{
public:
    vector<int> twoSum(vector<int>& numbers, int target) 
    {
        map<int,int> value_index;
        
        int size = numbers.size();
   
        for (int i = 0; i < size; ++i)
        {
            auto value_index_it = value_index.find(target-numbers[i]);
            if (value_index_it != value_index.end())
            {
                return vector<int> ({value_index_it->second,i});
            }
            value_index[numbers[i]] = i;
        }
        return vector<int> ({});
    
    }
};


int main(int argc, char const *argv[])
{
	vector<int> v1{5,0,3,0};
	Solution s;
	vector<int> ans = s.twoSum(v1, 0);
	for(int i = 0; i < ans.size(); i++)
		cout << ans[i] << " ";

	return 0;
}