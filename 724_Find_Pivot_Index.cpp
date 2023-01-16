#include <iostream>
#include <string>
#include <vector>

using namespace std;
class Solutions
{
public:
  Solutions(/* args */) {}
  ~Solutions() {}
    int pivotIndex(std::vector<int>& nums) {
        int sum = 0, leftSum=0, i=0;
        for( const int& num : nums ) sum += num;
        for( const int& num : nums )
        {
            if( leftSum*2 == sum - num ) return i;
            leftSum += num;
            ++i;
        }
        return -1;
    }
 
};


int main(int argc, char* argv[])
{
    std::vector<int> v1{}; 
    Solutions s1; 

    v1= {1,7,3,6,5,6}; std::cout<<s1.pivotIndex(v1)<<"\n";
    v1= {1,2,3};std::cout<<s1.pivotIndex(v1)<<"\n";  
    v1= {2,1,-1};std::cout<<s1.pivotIndex(v1)<<"\n";  
return 0;
}