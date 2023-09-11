#include <bits/stdc++.h>
#define ll long long
using namespace std;

void sort012(int arr[],int n)
{
    int a=0,b=0,c=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
            a++;
            else if(arr[i]==1)
            b++;
            else c++;
        }
        // cout<<"values "<<a<<" "<<b<<" "<<c<<"end";
        for(int i=0;i<a;i++)
          {  arr[i]=0; }
        for(int i=a;i<a+b;i++)
          {  arr[i]=1; }
        for(int i=a+b;i<n;i++)
          { arr[i]=2; }
        
}
int main()
{
    int arr[]={0 ,1 ,1 ,2 ,0 ,0, 2, 2 ,0, 1};
    sort012(arr,10);
    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}