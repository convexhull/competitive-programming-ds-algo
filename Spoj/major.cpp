#include <bits/stdc++.h>
using namespace std;
int ans(int arr[],int n)
{
   int mIndex = 0,counter = 0;
   for(int i=1; i<n; ++i)
   {
      if(arr[mIndex] == arr[i])
         counter++;
      else
         counter--;
      if(counter == 0)	
      {
         counter = 1;
         mIndex = i;
      }
   }
   counter = 0;
   for(int i=0; i<n; ++i)
      if(arr[i] == arr[mIndex])
         counter++;
   if(counter > n/2)		
      cout<<"YES "<<arr[mIndex]<<"\n";
   else
      cout<<"NO\n";
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
   int t,n;
   cin>>t;
   while(t--)
   {
      cin>>n;
      int arr[n];
      for(int i=0; i<n ;++i)
         cin>>arr[i];
      ans(arr,n);
   }
   return 0;
}