#include "Structure.h"
using namespace LJM::Structure;
int main()
{
    //二分查找
    SearchStructure Ljmsearch(65);
    vector<int> nums({1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20});
    cout<<"BinarySearch"<<endl;
    cout<<Ljmsearch.BinarySearch(nums,3)<<endl;
    cout<<"GuessNumber"<<endl;
    cout<<Ljmsearch.GuessNumber(100)<<endl;
    return 0;
}
    // search.BinarySearch