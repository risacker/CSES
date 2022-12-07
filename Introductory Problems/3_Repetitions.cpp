/*
You are given a DNA sequence: a string consisting of characters A, C, G, and T. Your task is to find the longest repetition in the sequence. This is a maximum-length substring containing only one type of character.

Input

The only input line contains a string of n characters.

Output

Print one integer: the length of the longest repetition.

Constraints
1≤n≤10^6
Example

Input:
ATTCGGGA

Output:
3
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n = s.length();
    int ans = 0;
    int maxm;
    for(int i = 0; i < n; i++){
        maxm = 1;
        while(s[i] == s[i+1]){
            maxm++;
            i++;
        }
        ans = max(ans, maxm);
    }
    cout<<ans;
}