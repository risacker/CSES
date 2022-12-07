/*
You are given all numbers between 1,2,…,n except one. Your task is to find the missing number.

Input

The first input line contains an integer n.

The second line contains n−1 numbers. Each number is distinct and between 1 and n (inclusive).

Output

Print the missing number.

Constraints
2≤n≤2⋅10^5
Example

Input:
5
2 3 1 5

Output:
4
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    int sumOfNumbers = 0;
    int sumOfNaturalNumbers = 0;
    vector<int> arr(n);
    for(int i = 1; i < n; i++){
        cin>>arr[i];
        sumOfNaturalNumbers = n*(n+1)/2;
        sumOfNumbers += arr[i];
    }
    int ans = sumOfNaturalNumbers - sumOfNumbers;
    cout<<ans;
}