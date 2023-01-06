/*
determining the length of the longest common subsequence

    S1 -> HELLO
    S2 -> HEXO
    count = 0
    LCS(i, j) -> i means staring index of S1 and j means starting index of S2

    iterations :
    H ELLO
    H EXO
    count++

    HE LLO
    HE XO
    count++


    .....


    algo:

    LCS(int i, int j){

        if(i == s1.size() OR j==s2.size())
            return 0;

        if(s1[i] == s2[j])
            return 1 + LCS(i+1, j+1);

        else
            return max(LCS(i+1,j), LCS(i,j+1));

    }

    to implement dp --->

    int dp[100][100]
    LCS(int i, int j){

        if(dp[i][j] != -1)
            return dp[i][j];

        if(i == s1.size() OR j==s2.size())
            return 0;

        if(s1[i] == s2[j])
            dp[i][j] = 1 + LCS(i+1, j+1);

        else
            dp[i][j] = max(LCS(i+1,j), LCS(i,j+1));

        return dp[i][j]

    }

*/


#include <iostream>
using namespace std;

int main()
{



    return 0;
}
