#include"bits/stdc++.h"
using namespace std;

//simple operations like addition,multiplication,subtraction and division..
int main(){
    double a,b;char c;
    cout<<"\n enter two no's"<<endl;
    cin>>a>>b;
    cout<<"\n what operation you want to perform:"<<endl;
    cin>>c;
    if(c=='+') cout<<a+b<<endl;
    else if(c=='-') cout<<a-b<<endl;
    else if(c=='*') cout<<a*b<<endl;
    else if(c=='/') cout<<a/b<<endl;
    else cout<<"\n invalid operation";
}
