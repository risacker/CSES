/*
Your task is to calculate the number of trailing zeros in the factorial n!.

For example, 20!=2432902008176640000 and it has 4 trailing zeros.

Input

The only input line has an integer n.

Output

Print the number of trailing zeros in n!.

Constraints
1≤n≤10^9
Example

Input:
20

Output:
4
*/

#include <iostream>
using namespace std;

int main(){
    long long n;
    cin>>n;
    long long ans = 0;
    for(long long i = 5; n/i >= 1; i *= 5)
        ans += n/i;
    cout<<ans;
}