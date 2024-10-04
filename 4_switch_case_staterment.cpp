/*To illustrate the switch statement,
 let's consider a common problem: 
 given a number between 1 and 7, 
 print the corresponding day of the week. 
 Here's how we can use the switch statement for
  this task:*/



#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin >>x;
    switch(x){
        case 1:
            cout<<"monday";
            break;
            case 2:
            cout<<"Tuesday";
            break;
            case 13:
            cout<<"Wednsday";
            break;
            case 4:
            cout<<"Thrusday";
            break;
            case 5:
            cout<<"Friday";
            break;
            case 6:
            cout<<"Saturday";
            break;
            case 7:
            cout<<"sunday";
            break;
            default :
            cout<<"Invalid";
    }
    return 0;
}
