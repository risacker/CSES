/*
Your task is to count for k=1,2,…,n the number of ways two knights can be placed on a k×k chessboard so that they do not attack each other.

Input

The only input line contains an integer n.

Output

Print n integers: the results.

Constraints
1≤n≤10000
Example

Input:
8

Output:
0
6
28
96
252
550
1056
1848
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    cout<<0<<endl;
    for(long long i = 2 ; i <= n ; i++) 
      cout<<(i * i) * (i * i - 1) / 2 - (4 * (i - 2) * (i - 1))<<endl; //the total number of ways to place two knights on the board and subtract the number of distinct ways to place two knights so that they attack each other
}