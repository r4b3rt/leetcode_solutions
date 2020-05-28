#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Solution {
public:
    int cuttingRope(int n) {
        if (n < 4)      // n = 2, 3
            return n-1;
        int a = n / 3, b = n % 3;
        if (b == 0)
            return pow(3, a);
        if (b == 1)
            return pow(3, a-1) * 4;
        if (b == 2)
            return pow(3, a) * 2;
        return 0;                   // impossible, for compile
    }
};

void test(string test_name, int n, int expected)
{
    int res = Solution().cuttingRope(n);
    if (res == expected)
        cout << test_name << " success." << endl;
    else
        cout << test_name << " failed." << endl;
}

int main()
{
    int n1 = 2;
    int expected1 = 1;
    test("test1", n1, expected1);

    int n2 = 10;
    int expected2 = 36;
    test("test2", n2, expected2);

    return 0;
}



// 给你一根长度为 n 的绳子，请把绳子剪成整数长度的 m 段（m、n都是整数，n>1并且m>1），
// 每段绳子的长度记为 k[0],k[1]...k[m-1] 。请问 k[0]*k[1]*...*k[m-1] 
// 可能的最大乘积是多少？例如，当绳子的长度是8时，我们把它剪成长度分别为2、3、3的三段，
// 此时得到的最大乘积是18。

// 示例 1：
// 输入: 2
// 输出: 1
// 解释: 2 = 1 + 1, 1 × 1 = 1

// 示例 2:
// 输入: 10
// 输出: 36
// 解释: 10 = 3 + 3 + 4, 3 × 3 × 4 = 36

// 提示：
// 2 <= n <= 58

