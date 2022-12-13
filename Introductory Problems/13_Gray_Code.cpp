/*
A Gray code is a list of all 2^n bit strings of length n, where any two successive strings differ in exactly one bit (i.e., their Hamming distance is one).

Your task is to create a Gray code for a given length n.

Input

The only input line has an integer n.

Output

Print 2^n lines that describe the Gray code. You can print any valid solution.

Constraints
1≤n≤16
Example

Input:
2

Output:
00
01
11
10
*/

#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    for(int i = 0; i < (1 << n); i++){
        int val = (i ^ (i >> 1));
        bitset<32> r(val);
        string s = r.to_string();
        cout<<s.substr(32 - n)<<endl;
    }
}