#include<iostream>


using namespace std;

int reverse(int number){
    int ans = 0;

    while(number>0){
        int digit = number%10;
        ans = ans*10 + digit;
        number/=10;
    }

    return ans;
}

int main(){
   
   int number;
   cout<<"Enter the number : ";
   cin>>number;

   cout<<endl;

   cout<<"The reverse Integer is : "<<reverse(number)<<endl;

    return 0;
}