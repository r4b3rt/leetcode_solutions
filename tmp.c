#include <stdio.h>
#include "meta_c/utils.h"

char* reverseWords(char* s){
    
}

void test(const char *test_name, char *s, char *expected)
{
    char *res = reverseWords(s);
    if (is_equal_str(res, expected))
        printf("%s success.\n");
    else
        printf("%s failed.\n");
}

int main()
{
    char *s1 = "the sky is blue";
    char *expected1 = "blue is sky the";
    test("test1", s1, expected1);

    char *s2 = "  hello world!  ";
    char *expected2 = "world! hello";
    test("test2", s2, expected2);

    return 0;
}

// 输入一个英文句子，翻转句子中单词的顺序，但单词内字符的顺序不变。
// 为简单起见，标点符号和普通字母一样处理。例如输入字符串"I am a student. "，
// 则输出"student. a am I"。

// 示例 1：

// 输入: "the sky is blue"
// 输出: "blue is sky the"
// 示例 2：

// 输入: "  hello world!  "
// 输出: "world! hello"
// 解释: 输入字符串可以在前面或者后面包含多余的空格，但是反转后的字符不能包括。
// 示例 3：

// 输入: "a good   example"
// 输出: "example good a"
// 解释: 如果两个单词间有多余的空格，将反转后单词间的空格减少到只含一个。
//  

// 说明：

// 无空格字符构成一个单词。
// 输入字符串可以在前面或者后面包含多余的空格，但是反转后的字符不能包括。
// 如果两个单词间有多余的空格，将反转后单词间的空格减少到只含一个。
