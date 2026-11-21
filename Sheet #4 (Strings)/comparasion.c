// Given a string S. Print the smallest string that can be obtained by doing the following operations on the original string only:

// Split the string into two non empty consecutive strings (for example if you split the string into X and Y so S = X + Y).
// Sort every one of the separated strings.
// Re-concatenate the two stings into one string.
// Note: If you couldn't split the string print the original string.
// Input
// Only one line contains a string S (1 ≤ |S| ≤ 104) where |S| is the length of the string and it consists of lowercase English letters.

// Output
// Print the smallest string that can be obtained.

// Example
// InputCopy
// acmicpc
// OutputCopy
// acccimp
// Note
// All possible strings that can be obtained :

// a + cmicpc : after sorting each part > a + cccimp = acccimp

// ac + micpc : after sorting each part > ac + ccimp = acccimp

// acm + icpc : after sorting each part > acm + ccip = acmccip

// acmi + cpc : after sorting each part > acim + ccp = acimccp

// acmic + pc : after sorting each part > accim + cp = accimcp

// acmicp + c : after sorting each part > accimp + c = accimpc
// So the smallest one is "acccimp" .


