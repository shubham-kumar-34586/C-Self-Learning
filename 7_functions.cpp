#include <bits/stdc++.h>
using namespace std;
/*
    //first prime number
bool prime (int n){
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
//for calculatin factorial 
int fact(int n){
    int ans=1;
    for(int i=1;i<=n;i++){
        ans=ans*i;
    }
    return ans;
}

//Calling the main function

int main(){
    int a,b;
    cin>>a>>b;

    cout<<prime(a)<<endl;
    cout<< prime(b)<<endl;
    cout<<fact(a)<<endl;
    cout<<fact(b)<<endl;
    cout<<prime(b-a)<<endl;
    cout<<fact(b-a)<<endl;
    
}

*/

/*Or */

/*
int sum(int a, int b){
    int ans = a+b;
    return ans;
}

int main(){
    int m,n;
    cin>>m>>n;
    cout<< sum(m,n);
}  */

/*OR*/
void swap(int &a,int &b) //pass by referance, add & before input variable.
{
    int c;
    c=a;
    a=b;
    b=c;
}
int main(){
    int a,b;
    cin>>a>>b;
    swap(a,b);
    cout<<a<<" "<<b;
}