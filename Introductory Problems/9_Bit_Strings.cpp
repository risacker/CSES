/*
Your task is to calculate the number of bit strings of length n.

For example, if n=3, the correct answer is 8, because the possible bit strings are 000, 001, 010, 011, 100, 101, 110, and 111.

Input

The only input line has an integer n.

Output

Print the result modulo 109+7.

Constraints
1≤n≤10^6
Example

Input:
3

Output:
8
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    long long mod = 1e9+7;
    long long ans = 1;
    long long a = 2;
    while(n > 0){
        if(n&1)
            ans = (ans * a) % mod;
        a = (a * a) % mod;
        n >>= 1;
    }
    cout<<ans;
}