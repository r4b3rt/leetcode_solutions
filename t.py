from math import sqrt

class Solution:
    def isPowerOfFour(self, n: int) -> bool:
        n = sqrt(n)
        if not n.is_integer():
            return False
        n = int(n)
        return n > 0 and n & (n-1) == 0


def test(test_name, n, expected):
    res = Solution().isPowerOfFour(n)
    if res == expected:
        print(test_name + ' success.')
    else:
        print(test_name + ' failed.')


if __name__ == '__main__':
    n1 = 16
    expected1 = True
    test('test1', n1, expected1)

    n2 = 5
    expected2 = False
    test('test2', n2, expected2)

    n3 = 1
    expected3 = True
    test('test3', n3, expected3)
