#include <Structure.h>
using namespace LJM::Structure;
/// @brief 构造函数
SearchStructure::SearchStructure()
{
    this->Pick = 10;
}
/// @brief 构造函数
/// @param pick
SearchStructure::SearchStructure(int pick)
{
    this->Pick = pick;
}
/// @brief 二分查找
/// @param nums 数组
/// @param target 查找的值
/// @return 返回值
int SearchStructure::BinarySearch(vector<int> &nums, int target)
{
    int left = 0;
    int right = nums.size() - 1;
    int mid = 0;
    while (left <= right)
    {
        mid = left + (right - left) / 2;
        int num = nums[mid];
        if (num > target)
        {
            right = mid - 1;
        }
        else if (num < target)
        {
            left = mid + 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}
/// @brief 猜数字大小(二分查找)
/// @param 第一次猜的数，要求比Pick大
/// @return 返回Pick
int SearchStructure::GuessNumber(int n)
{
    int left = 0;
    int right = n;
    int middle = 0;
    while (true)
    {
        middle = left + (right - left) / 2;
        if (Guess(middle) == -1)
        {
            right = middle - 1;
        }
        else if (Guess(middle) == 1)
        {
            left = middle + 1;
        }
        else
        {
            return middle;
        }
    }
}
/// @brief 和Pick比较
/// @param num 要比较的数
/// @return -1 num>Pick 1 num<Pick 0 num==Pick
int SearchStructure::Guess(int num)
{
    if (num > Pick)
        return -1;
    else if (num < Pick)
        return 1;
    else
        return 0;
}