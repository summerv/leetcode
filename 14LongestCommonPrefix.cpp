/*
* 14 Longest Common Prefix
* https://leetcode.com/problems/longest-common-prefix/
* 最长字符串组公共子串
* by Summer_V
*/
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution
{
public:
	string longestCommonPrefix(vector<string> &strs)
	{
		if (strs.size() == 0)
		{
			return "";
		}
		string prefix = strs[0];
		for (int i = 1; i < strs.size(); ++i)
		{
			if (prefix.length() == 0 || strs[i].length() == 0)
			{
				return "";
			}
			int prefixLen = prefix.length() <= strs[i].length() ? prefix.length() : strs[i].length();
			int j;
			for (j = 0; j < prefixLen; ++j)
			{
				if (prefix[j] != strs[i][j])
				{
					break;
				}
			}
			prefix = prefix.substr(0, j);
		}
		return prefix;
	}
};
int main()
{
	vector<string> vec;
	//vec.push_back("[]");
	vec.push_back("a");
	vec.push_back("b");
	string prefixResult;
	Solution mysolution;
	prefixResult = mysolution.longestCommonPrefix(vec);
	cout << prefixResult;
	return 0;
}
