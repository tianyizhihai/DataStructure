#include <iostream>
#include <vector>
using namespace std;
namespace LJM::Structure
{
    /// @brief 数字大小的数据结构
    class SearchStructure
    {
    public:
        /// @brief 猜的数的大小
        int Pick = 0;

    public:
        /// @brief 构造函数
        SearchStructure();
        /// @brief 构造函数
        /// @param pick 要猜的数的大小
        SearchStructure(int pick);

    public:
        /// @brief 二分查找
        /// @param nums 数组
        /// @param target 查找的值
        /// @return 返回查找值的index,若没有则返回-1
        int BinarySearch(vector<int> &nums, int target);
        /// @brief 猜数字大小(二分查找)
        /// @param 第一次猜的数，要求比Pick大
        /// @return 返回Pick
        int GuessNumber(int n);
        /// @brief 和Pick比较
        /// @param num 要比较的数
        /// @return -1 num>Pick 1 num<Pick 0 num==Pick
        int Guess(int num);
    };
}