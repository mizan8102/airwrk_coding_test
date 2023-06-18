#include<bits/stdc++.h>

#include<iostream>
using namespace std;
int main(){
   int a;
   cin >> a; //121 
   int n=a,r,rr=0;
   while (n !=0)
   {
        r=n %10; 
        rr=rr*10+r;
        n=n/10;
   }
   if(a<0){
    cout << "false" << endl;
   }
   else if(a==rr){
     cout << "true" << endl;
   }else{
    cout << "false" << endl;
   }
   
   return 0;
}