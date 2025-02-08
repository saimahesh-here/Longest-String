# Longest-String

#Longest Common Substring Problem

#This project implements a solution for the Longest Common Substring Problem using C++. The program identifies the longest substring that is common between two strings using a dynamic programming approach. It also displays the intermediate 2D lookup table used to compute the solution.

#Problem Description
#The Longest Common Substring Problem is to find the longest string that is a substring of two or more input strings.

#Example 1:
Input Strings:

s1 = "ABABC"
s2 = "BABCA"
#Output:

#Longest Common Substring: BABC
#Length: 4
#Example 2:
#Input Strings:

s1 = "ABAB"
s2 = "BABA"
#Output:

#Longest Common Substring: BAB or ABA (both have the same length of 3)
#Features
#Dynamic Programming Approach:
#The solution uses a 2D lookup table to compute the longest common suffix for prefixes of the two strings.

Efficiency:

#Time Complexity: 
O(n×m), where 
n and 
m are the lengths of the two input strings.

#Space Complexity: 
O(n×m) due to the 2D table.

#Outputs:

#The 2D lookup table used for computation.
#The longest common substring.
#The length of the longest common substring.
#How It Works
#Input:
#The program accepts two strings of equal length.

#Dynamic Programming Table:

#Each cell (i, j) in the table represents the length of the longest common suffix of substrings s1[0...i-1] and s2[0...j-1].
#If characters match: dp[i][j] = dp[i-1][j-1] + 1.
Otherwise: dp[i][j] = 0.

#Result Extraction:

The maximum value in the table gives the length of the longest common substring.
The indices of the maximum value are used to extract the substring.

#How to Run the Code
#Clone the Repository:
#git clone <repository-url>
#cd <repository-folder>
#Compile the Code: Use a C++ compiler like g++ to compile the code:
#g++ longest_common_substring.cpp -o lcs
#Run the Program:
./lcs
#Example Input:

#Input Strings: "ABABC" and "BABCA"
#Example Output:

#Dynamic Programming Table (2D Grid):
0 0 0 0 0 0 
0 0 1 0 0 1 
0 1 0 2 0 0 
0 0 2 0 0 2 
0 1 0 3 0 0 
0 0 0 0 4 0 

#Longest Common Substring: BABC
Length of Longest Common Substring: 4
