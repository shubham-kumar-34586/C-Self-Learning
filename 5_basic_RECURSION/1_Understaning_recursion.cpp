/*RECURSION:- When a function calls itself until a specific condition is met.*/



#include <bits/stdc++.h>
using namespace std;

//this is an infinite recursion.
/*void f(){
    cout<<"1"<<endl;
    f();
}

int main(){
    f();
    return 0;
} 

output will be infinite time 1 
*/

//base condition
/*
int cnt=0;
void print(){
    if(cnt==4)return;
    cout<<cnt<<endl;
    cnt++;
    print();
}

int main(){
    print();
    return 0;
}
output:-
0
1
2
3
*/