#include<bits/stdc++.h>

#include<iostream>
using namespace std;

int distinct_of_array(int ar[],int a){
    int sumof_ar=0;
   for (int i = 0; i < a; i++)
   {
        cin >> ar[i];
   }

   for (int i = 0; i < a; i++)
   {
        sumof_ar+=ar[i];
   }
  
  int sum_of_reverse=0;
  for (int i = 0; i < a; i++)
  {
    int n=ar[i],r,rr=0;
    while (n !=0)
    {
        r=n %10; 
        rr=rr*10+r;
        n=n/10;
    }
    sum_of_reverse =sum_of_reverse+rr;
      
  }
    int swap;
    if(sum_of_reverse > sumof_ar){
        swap=sumof_ar;
        sumof_ar=sum_of_reverse;
        sum_of_reverse=swap;
    }

  int dis=sumof_ar-sum_of_reverse;
  return  dis;
   
}
int main(){
   int a;
   cin >> a;
   int ar[a];
//    [1,13,10,12,31]
   cout << distinct_of_array(ar,a) << endl;
   return 0;
}