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

int main(int argc, char* argv[])
{
	Solution s1;
	std::cout << std::boolalpha << s1.isSubsequence("abc", "ahbgdc") << "\n";
	std::cout << std::boolalpha << s1.isSubsequence("axc", "ahbgdc") << "\n";

	return 0;
}