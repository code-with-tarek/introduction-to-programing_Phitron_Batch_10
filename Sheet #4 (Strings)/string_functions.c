// Given two numbers N
// , Q
//  and a string S
//  of size N
// . Followed by Q lines of the following queries:

// pop_back : remove the last character in the string.
// front : print the first character in the string.
// back : print the last character in the string.
// sort l r : where (1≤l,r≤|S|)
//  sort all characters of S
//  from l
//  to r
// .
// reverse l r : where (1≤l,r≤|S|)
//  reverse all characters of S
//  from l
//  to r
// .
// print pos : where (1≤pos≤|S|)
//  print the character in the index pos
// .
// substr l r : where (1≤l,r≤|S|)
//  print sub-string of s
//  from l
//  to r
// .
// push_back x : add character x
//  in the end of the string.
// For each query, print the answer associated with it in a single line.

// It's guaranteed that in the first 7 types of the query, the string is not empty.

// it's recommended to use built-in functions of String.

// Input
// The first line contains two integers N
// , Q
//  (1≤N,Q≤103)
//  N
//  denoting the size of the string and Q number of queries.

// The second line contains the string S
//  consists of only lowercase English letters.

// Next Q
//  lines contain the queries.

// Output
// For each query, print the answer associated with it in a single line.

// Example
// InputCopy
// 18 8
// assiutinupperegypt
// substr 1 6
// sort 5 8
// pop_back
// back
// reverse 1 6
// front
// push_back i
// print 4
// OutputCopy
// assiut
// p
// n
// s

