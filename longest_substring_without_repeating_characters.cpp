#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib> 
#include <utility>
#include <queue> 
#include <set>
#include <algorithm> 
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len = s.length();
    	int longest = 0;
    	int start = 0;
    	vector<int> v(256,-1);
    	for (int i = 0; i < len; ++i)
    	{
    		if (v[s[i]] != -1)
    		{
    			start = max(start, v[s[i]]+1);
    			
    		}
    		longest = max(longest, i-start+1);
    	
    		v[s[i]] = i;
    	}
        return longest;
        
    }
};

int main(int argc, char const *argv[])
{
	string s = "abcabcbb";
	Solution so;
	cout << so.lengthOfLongestSubstring(s) << endl;
	
	return 0;
}