// Given a number N
//  and a string S
//  of size N
//  consisting of 5 different uppercase characters only {V,W,X,Y,Z}.

// V: Adds to the score 5 points.
// W: Adds to the score 2 points.
// X: Removes the next consecutive character from the string.
// Y: Moves the next consecutive character to the end of the string.
// Z: If the next consecutive character is V it divides the total score by 5 but if it is W it divides the total score by 2. Then it removes the next consecutive character from the string if and only if the next character is V or W.
// Note: In case the string ends with X or Y or Z ignore their operations. The score is calculated from left to right and starts with 0.

// Input
// The first line contains a number N
//  (1≤N≤106)
//  the length of the string.

// The second line contains a string S
// .

// It's guaranteed that S
//  consists of only {V,W,X,Y,Z} letters.

// Output
// The total score of string.

// Examples
// InputCopy
// 5
// VYWZW
// OutputCopy
// 4
// InputCopy
// 6
// WZYVXW
// OutputCopy
// 7
// Note
// Test 1:

// String S = "VYWZW" and score initially = 0 .

// First char is 'V' so add 5 to score and become 5.

// Second char is 'Y' then move 'W' to end of string and it become "VYZWW" and score = 5.

// Third char is 'Z' then divide total score by 2 because next char is 'W' and remove it so string become "VYZW" and score = 2.

// Fourth char is 'W' so add 2 to score and become 4.

// So final answer is 4.


