#include <iostream>
#include <string>
class Solution {
public:
   bool isSubsequence( const std::string &s, const std::string &t) {
		if (s.empty()){	return true;}
    	if (t.empty()) { return false; }
        int i{0};
        for(char c:t){
            if(c==s[i]){
                i++;
                if(i==(int)s.size()){
                    return true;
                }
            }
        }
	return false;
	}
};
// Best
class SolutionII {
public:
    bool isSubsequence(std::string s, std::string t) {
        int strCount = 0;
        int start = 0,end = t.length();

        std::string str;

        while(start < end && strCount < s.length()){
            if(s[strCount] == t[start]){
                str.push_back(t[start]);
                strCount++;
            }
            start++;
        }

        if(s==str)
            return true;
        else
            return false;
    }
};



int main(int argc, char* argv[])
{
	Solution s1;
	std::cout << std::boolalpha << s1.isSubsequence("abc", "ahbgdc") << "\n";
	std::cout << std::boolalpha << s1.isSubsequence("axc", "ahbgdc") << "\n";

	SolutionII s1_1;
	std::cout << std::boolalpha << s1_1.isSubsequence("abc", "ahbgdc") << "\n";
	std::cout << std::boolalpha << s1_1.isSubsequence("axc", "ahbgdc") << "\n";
	return 0;
}