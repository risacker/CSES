/*
Given a string, your task is to reorder its letters in such a way that it becomes a palindrome (i.e., it reads the same forwards and backwards).

Input

The only input line has a string of length n consisting of characters A–Z.

Output

Print a palindrome consisting of the characters of the original string. You may print any valid solution. If there are no solutions, print "NO SOLUTION".

Constraints
1≤n≤10^6
Example

Input:
AAAACACBA

Output:
AACABACAA
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	unordered_map<char, int> a;
	for(auto c : s){
		a[c]++;
	}
	string s1(s.size(),' ');
	int l = 0, r = s.size()-1;
	int m = -1;
	if(s.size() % 2) 
       m = (l+r)/2;
	for(auto x : a){
		if(x.second % 2){
			if(m != -1){
				s1[m] = x.first;
				m = -1;
			}
			else{
				cout<<"NO SOLUTION\n";
				return 0;
			}
		}
		for(int c = x.second; c >= 2; c-=2){
			s1[l++] = s1[r--] = x.first;
		}	
	}
	cout<<s1<<endl;
	return 0;
}