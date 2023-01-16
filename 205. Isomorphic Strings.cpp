#include <iostream>
#include <String>
#include <unordered_map>

using namespace std;
class Solutions
{
public:
  Solutions(/* args */) {}
  ~Solutions() {}

  bool isIsomorphic( const string &s,  const string &t) {
        unordered_map<char,char> mp,mp2;

        for (size_t i =0; i < s.length(); i++)
        {   if (mp[s[i]] && mp[s[i]]!=t[i]) return false; //mp[s[i]] буква есть, но в строке не совпадают.
            if (mp2[t[i]] && mp2[t[i]]!=s[i]) return false;//mp2[t[i]] буква есть, но в строке не совпадают.
            mp[s[i]]=t[i];// вносим отсутствующую букву в map 
            mp2[t[i]]=s[i];// вносим отсутствующую букву в map
        }
       return true;
    }
};


int main(int argc, char* argv[])
{
Solutions sol;
std::cout<< std::boolalpha<<sol.isIsomorphic("egg","add")<<"\n";
std::cout<< std::boolalpha<<sol.isIsomorphic("foo","bar")<<"\n";
std::cout<< std::boolalpha<<sol.isIsomorphic("paper","title")<<"\n";

return 0;
}