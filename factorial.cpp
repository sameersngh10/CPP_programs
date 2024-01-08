/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
// #include<bits/stdc++.h>
using namespace std;

int main(){

    int i,n,n1=0, n2=1, nT;
    cin>>n;

    for (i=1;i<=n;++i){
        cout<<n1<<" ";
        nT=n1+n2;
        n1=n2;
        n2=nT;
    }
    return 0;
}
