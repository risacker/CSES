/*
A number spiral is an infinite grid whose upper-left square has number 1. Here are the first five layers of the spiral:

img link: https://cses.fi/file/bba36f2601b99c7edc15865aa2a49e680a271075f30e86aa0e4e18d00a779c21

Your task is to find out the number in row y and column x.

Input

The first input line contains an integer t: the number of tests.

After this, there are t lines, each containing integers y and x.

Output

For each test, print the number in row y and column x.

Constraints
1≤t≤105
1≤y,x≤10^9
Example

Input:
3
2 3
1 1
4 2

Output:
8
1
15
*/

#include<bits/stdc++.h>
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int t;
    cin>>t;
    long long r,c;
    long long ans = 0;
    while(t--){
        cin>>r>>c;
        if(c > r){//if col is greater than row => ans = (col-1)*col+row
            if(c % 2 != 0){//if col is odd no
                ans = (c*c)-r+1;
            }
            else{// if col is even no
                ans = ((c-1)*(c-1))+r;
            }
            cout<<ans<<endl;
        }
        else{
            if(r % 2 == 0){
                ans = (r*r)-c+1;
            }
            else{
                ans = ((r-1)*(r-1))+c;
            }
            cout<<ans<<endl;
        }
    }
}