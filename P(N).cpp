/*
문제
Consider the spiral of triangles shown in Figure 1. It starts with an equilateral triangle, that is, a triangle whose side lengths are the same, of side length 1 and it is extended by adding equilateral triangles repeatedly as follows: An equilateral triangle of side length k is added to the longest side of a spiral, where k is the length of the longest side of the spiral. 

Then, the Padovan sequence P(N) is the sequence of side lengths of the equilateral triangles in the spiral. The first 10 values P(1) through P(10) are 1, 1, 1, 2, 2, 3, 4, 5, 7, 9. 
 
Given a positive integer N, write a program to compute P(N).

입력
Your program is to read from standard input. The input consists of T test cases. The number of test cases T is given in the first line of the input. Each test case consists of one line containing an integer N (1 ≤ N ≤ 100).

출력
Your program is to write to standard output. Print exactly one line for each test case. The line should contain P(N).
*/

#include <iostream>
using namespace std;

int main() {
    int T, N;
    long long dp[101] = {0};

    // 초기값 설정
    dp[1] = dp[2] = dp[3] = 1;
    dp[4] = dp[5] = 2;

    // 점화식으로 수열 채우기
    for (int i = 6; i <= 100; i++) {
        dp[i] = dp[i - 1] + dp[i - 5];
    }

    cin >> T;
    while (T--) {
        cin >> N;
        cout << dp[N] << '\n';
    }

    return 0;
}
