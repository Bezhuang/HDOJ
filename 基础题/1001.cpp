#include<iostream>
using namespace std;
int main(){
    int num1;
    while(cin >> num1){
        int sum = 0;
        for(int i = 1; i <= num1; i++)
           sum += i;
        cout << sum << endl << endl; 
        //For each case, output SUM(n) in one line, followed by a blank line.
    }
    return 0;
}