#include <bits/stdc++.h>
using namespace std;
/* Q. Print name N time usin recursion.


void fut(int i,int n)
{
    if(i>n)return;
    cout<<"Shubham Kumar"<<endl;
    fut(i+1,n);
}

int main(){
    int n;
    cin>>n;
    fut(1,n);

}

*/

/*Q. Print 1 to N usin recursion.*/
/*
void fut(int i,int n)
{
    if(i>n)return;
    cout<<i<<endl;
    fut(i+1,n); // This is important.
}

int main(){
    int n;
    cout<<"Enter the Number:-  ";
    cin>>n;
    fut(1,n);
    return 0;

}

*/

/*Q. print N to 1 usin Recursion.*/

void printNto1(int n) {
    // Base case
    if (n == 0)
        return;

    // Print the current number
    cout << n << " ";

    // Recursive call to print the next number
    printNto1(n - 1);
}

int main() {
    int N;
    cout << "Enter a number: ";
    cin >> N;

    // Call the recursive function
    printNto1(N);

    return 0;
}