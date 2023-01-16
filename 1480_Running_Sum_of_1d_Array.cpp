#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Sol2
{ 
    public:
    Sol2() {}
    ~Sol2() {}
    vector<int> runningSum(vector<int> &nums) {
        vector<int> res = {nums[0]};
        for (size_t i = 1; i < nums.size(); i++) {
            res.push_back(res.back() + nums[i]);
        }
        for (auto &&elem : res) {
                   std::cout<<elem<<"  ";
               }
              std::cout<<"\n";

        return res;
    }    
    
};

int main(int argc, const char** argv)
{ 
    std::vector<int> v1; 
    Sol2 s1; 
    v1= {1,2,3,4};  s1.runningSum(v1);
    v1= {1,1,1,1,1};  s1.runningSum(v1);
    v1= {3,1,2,10,1};  s1.runningSum(v1);
return 0;
};


