/*
Your task is to divide the numbers 1,2,…,n into two sets of equal sum.

Input

The only input line contains an integer n.

Output

Print "YES", if the division is possible, and "NO" otherwise.

After this, if the division is possible, print an example of how to create the sets. First, print the number of elements in the first set followed by the elements themselves in a separate line, and then, print the second set in a similar way.

Constraints
1≤n≤10^6
Example 1

Input:
7

Output:
YES
4
1 2 4 7
3
3 5 6

Example 2

Input:
6

Output:
NO
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    long long k = n*(n+1); 
    k /= 2;
	if((k&1)) 
       cout<<"NO\n";
    else if((n&1)==0){//sum of set can be divided by 2
       cout<<"YES\n";
       for(int i = 1;i <= n/2;i += 2) 
        cout<<i<<" ";
	   for(int i = n;i > n/2;i -= 2) 
        cout<<i<<" ";
	   cout<<"\n"<<n/2<<"\n";
	   for(int i = 2;i <= n/2;i += 2) 
        cout<<i<<" ";
	   for(int i = n-1;i > n/2;i -= 2) 
        cout<<i<<" ";
	   cout<<"\n";
    }
    else{
        cout<<"YES\n";
		int count = 0;
		long long p = n+1, q = k/2,sum = k/2;
		vector<bool> lks(p,true);
		p -= 1;
		vector<long long> v;
		while(sum != 0){
			if(sum >= p){
				v.push_back(p);
				sum -= p; 
                lks[p] = false; 
                p -= 1;
			}
			else{
				v.push_back(sum); 
                lks[sum] = false;
				break;
			}
		}
		cout<<v.size()<<"\n";
		for(long long x : v) 
           cout<<x<<" ";
		cout<<"\n"<<n - v.size()<<"\n";
		for(int i = 1;i <= n;i++) 
            if(lks[i]) 
              cout<<i<<" ";
		cout<<"\n";
    }
}