// Link= https://practice.geeksforgeeks.org/problems/longest-valid-parentheses/0/?track=stack

#include <bits/stdc++.h>
#define ll long long int
#define f(in,lt,st) for(int i=in;i<lt;i+=st)
using namespace std;

void input(int a[],int len);

int lengthBal(string a){
    stack<int> s;
    int res=0;
    int len=a.length();
    s.push(-1);
    for(int i=0;i<len;i++){
        if(a[i]=='(')
            s.push(i);
        else{
            s.pop();
            if(!s.empty())
                res=max(res,i-s.top());
            else
                s.push(i);
        }
    }
    return res;

}

int main(){
    long long int test;
    cin>>test;
    while(test--){
        string a;
        cin>>a;
        cout<<lengthBal(a)<<endl;;    

      }
    return 0;
}

