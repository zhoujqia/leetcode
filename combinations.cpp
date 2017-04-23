#include <iostream>
#include <vector>
using namespace std;


void dfs(vector<vector<int> >&ans, vector<int>com, int n, int k, int cur)
{
	if(k == 0) 
	{
		//find a combination
		ans.push_back(com);
		for(int i = 0; i < com.size();i++)
		{
			cout << com[i] << " ";
		}
		cout << endl;
		return;
	}

	for(int i = cur; i <= n; i++)
	{
		com.push_back(i);
		dfs(ans, com, n, k-1, i+1);
		com.pop_back();
	}
	return;
}
	
vector<vector<int> > Combinations(int n, int k) {
	vector<vector<int> >  ans;
	if(n <= 0 || k <= 0 || k > n) return ans;
	vector<int> com;
	dfs(ans, com, n, k, 1);
	return ans;	
	
}
	

int main(int argc, char const *argv[])
{
		
    Combinations(5,3);

	return 0;
}


	
	

