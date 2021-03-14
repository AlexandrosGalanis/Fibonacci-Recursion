#include<bits/stdc++.h>

using namespace std;
//Recursion programming

int fib(int n) {
    //if we reach n<=1 we return
    if (n <= 1){
        return n;
    }
    //creation of left and right tree
    return fib(n-1) + fib(n-2);
}

int main () {
    int n ,i=0;
    //scan input for fib
    cout<<"Give me input for fibonacci :";
    cin>>n;
    //basic check for user input
    if(n==1){
        cout<<" 0";
    }
    else if(n==2){
        cout<<" 0"<<" 1";
    }
    else{
    //we call the fib function N times and print the result to have our final result
        while(i < n) {
          cout << fib(i) <<" ";
          i++;
        }
    }
    return 0;
}

