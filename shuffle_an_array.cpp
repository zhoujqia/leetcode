#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib> 
#include <utility> 
using namespace std;


class Solution {
public:
    Solution(vector<int> nums) {
   		this->nums = nums;
   		srand(time(0));
        
    }
    
    /** Resets the array to its original configuration and return it. */
    vector<int> reset() {
        return this->nums;
    }
    
    /** Returns a random shuffling of the array. */
    vector<int> shuffle() {
        vector<int> shuffle_permutation = this->nums;
        int j = 0;
        int len = shuffle_permutation.size();
        for (int i = 0; i <= len - 1; ++i)
        {   
            /*from [i,len-1] random get a num to swap*/
            /*p = (1/n)*(1/(n-1))*...*(1/2)*(1/1) = 1/(n!)*/
        	j = rand() % (len - i) + i;
        	swap(shuffle_permutation[i], shuffle_permutation[j]);
        }

        return shuffle_permutation;

    }
private:
	vector<int> nums;
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution obj = new Solution(nums);
 * vector<int> param_1 = obj.reset();
 * vector<int> param_2 = obj.shuffle();
 */

int main(int argc, char const *argv[])
{
	vector<int> nums {1,2,3};

 	Solution obj(nums);
 	vector<int> param_1 = obj.reset();
 	vector<int> param_2 = obj.shuffle();

 	for (int i = 0; i < param_1.size(); ++i)
 	{
 		cout << param_1[i] << " ";
 	}
	cout << endl;
 	
 	for (int i = 0; i < param_2.size(); ++i)
 	{
 		cout << param_2[i] << " ";
 	}

	return 0;
}
