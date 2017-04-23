
#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib> 
#include <utility>
#include <queue> 
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
    	int len = matrix.size();
    	int tmp;
        for (int i = 0; i < len; ++i)
        {
        	for (int j = i; j < len; ++j)
        	{
        		tmp = matrix[i][j];
        		matrix[i][j] = matrix[j][i];
        		matrix[j][i] = tmp; 
        	}
        }

        for (int i = 0; i < len; ++i)
        {
        	for (int j = 0; j < len/2; ++j)
        	{
        		tmp = matrix[i][j];
        		matrix[i][j] = matrix[i][len-j-1];
        		matrix[i][len-j-1] = tmp;
        	}
        }

  		return;
    }
};
int main(int argc, char const *argv[]) {

	Solution s;
	vector<vector<int>> matrix { {1,   2,  3,},
                                  {4,   5,  6,},
                                  {7,   8,  9,} };

    s.rotate(matrix);

    for (int i = 0; i < matrix.size(); ++i)
    {
    	for (int j = 0; j < matrix[i].size(); ++j)
    	{
    		cout << matrix[i][j] << " ";
    	}
    	cout << endl;
    }
	return 0;
}
