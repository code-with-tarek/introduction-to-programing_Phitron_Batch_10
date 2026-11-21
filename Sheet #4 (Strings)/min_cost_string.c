// Given a string S and 26 numbers that represents the cost of each letter. Print the minimum cost that can be achieved and the string S after replacing every '?' symbol in the string.

// Note: The cost of the string will be the sum of the absolute difference of every two consecutive letters costs in the string. For example if cost of 'a'  =  2 and cost of 'x'  =  5 and cost of 'c'  =  1, if the string was equal "axc" then the cost of that string will  =  |cost('a')-cost('x')|  +  |cost('x')-cost('c')|  =  |2 - 5|  +  |5 - 1|  =  7.

// if there are more than one string with minimum cost print the smallest lexicographical one.

// Input
// The first line contains a string S (2 ≤ |S| ≤ 106) where |S| is the length of S.

// The second line will contain 26 numbers (0 ≤ Xi ≤ 105) represents the cost of each letter from 'a' to 'z' respectively.

// Output
// Print the minimum cost that can be achieved by replacing every '?' in the first line followed by the string after the replacement.

// Example
// InputCopy
// abc??def?gh
// 4 9 5 9 6 1 0 3 7 2 5 9 6 1 3 2 3 2 9 1 1 0 1 8 8 4
// OutputCopy
// 25
// abcbbdeffgh
// Note
// Test 1 :

// we can get string "abcdddeffgh" with cost 25 too but its not smallest string.

// string "abcbbdeffgh" smallest one and smallest cost.


