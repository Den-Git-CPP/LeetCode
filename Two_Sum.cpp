#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
 using namespace std;

class Sol
{
    public:
    Sol() {}
    ~Sol() {}
    
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        for(size_t i=0;i<nums.size()-1;i++){
            for (size_t j = i+1; j<nums.size(); j++){
                if ((nums.at(i)+nums.at(j))== target) {
                    nums.clear();
                    nums.push_back(i);
                    nums.push_back(j);    
                     
                     for (auto &&elem : nums) {
                            std::cout<<elem<<"  ";
                        }
                      std::cout<<"\n";
                    }
                }
            }
         return nums;      
    }
};

class Sol2
{//Optimized Code
    public:
    Sol2() {}
    ~Sol2() {}
    
    std::vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> mp;
       
        for(int i = 0; i < nums.size(); i++){
            if(mp.find(target - nums[i]) == mp.end())
                mp[nums[i]] = i;
            else
                return {mp[target - nums[i]], i};
        }
         return {-1,-1};
    }
};

int main(int argc, const char** argv)
{ 
    std::vector<int> v1; 
    int i1{0}; 
    
    Sol s1;
    v1= {2,7,11,15}; i1=9; s1.twoSum(v1,i1);        // [0,1] 
    v1= {3,2,4}; i1=6; s1.twoSum(v1,i1);            //  [1,2]
    v1= {3,3}; i1=6; s1.twoSum(v1,i1);              //  [0,1]
    v1= {2,5,5,11}; i1=10; s1.twoSum(v1,i1);        //  [1,2]
    

     std::cout<<"\nunordered_map<int, int> mp\n";

    Sol2 s2;
    v1= {2,7,11,15}; i1=9; s2.twoSum(v1,i1);        // [0,1] 
    v1= {3,2,4}; i1=6; s2.twoSum(v1,i1);            //  [1,2]
    v1= {3,3}; i1=6; s2.twoSum(v1,i1);              //  [0,1]
    v1= {2,5,5,11}; i1=10; s2.twoSum(v1,i1);        //  [1,2]
    
return 0;
};


