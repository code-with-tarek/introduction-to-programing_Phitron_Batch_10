// Given a source code in C++. Print the source code after cleaning it as follows :

// If there are comments you have to remove them all whether it's a single comment (e.g. : //) or a block comment (e.g.: /* */).

// If there are any blank lines or lines consists of spaces you must remove them all.
// See the test cases carefully for more clarifications.

// Input
// Source code in C++ (maximum number of lines is 50).

// Output
// Print the clean code according to the problem statement.

// Example
// InputCopy
// // I am a single comment and you must remove me :((
// /*
// I am a block comment and you must remove me
// */

// #include<iostream>
// using namespace std;

// int main() {

// int a, b;
// cin » a » b; // Reading two variables from user (please remove me!! :( )
// cout « a + b « endl;

// // End of the program (remove me please :))
// return 0;

// }
// OutputCopy
// #include<iostream>
// using namespace std;
// int main() {
// int a, b;
// cin » a » b; 
// cout « a + b « endl;
// return 0;
// }
// Note
// Please be careful in handling the priority of comments.

// Comment symbols may be included in comments and it's not guaranteed that the resulting source code is a valid C++ syntax.


