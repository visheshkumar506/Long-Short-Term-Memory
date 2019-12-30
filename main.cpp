#include<iostream>
#include<vector>
using namespace std;

vector<int> output(vector<int> &arr, int d);
vector<int> output(vector<int> &arr, int d)
{
    int temp1,temp2, temp3 ;
    int n = arr.size();

    for(int i=0; i<(d/2);i++)
    {
        temp1 = arr[i];
        arr[i] = arr[d-1-i];
        arr[d-1-i] = temp1;
    }

    for(int i=0;i<(n-d)/2;i++)
    {
        temp2 = arr[d+i];
        arr[d+i]= arr[n-1-i];
        arr[n-1-i] = temp2;
    }

    for(int i=0;i<(n/2);i++)
    {
        temp3 = arr[i];
        arr[i]= arr[n-1-i];
        arr[n-1-i]= temp3;
    }

    return(arr);
}

int main()
{
    int t,n,d;
    cin>>t;
    for(int j=0;j<t;j++)
    {
     cin>>n;
     vector<int> arr(n);
     for(int i =0;i<n;i++)
     {
        cin>> arr[i];
     }
     cin>>d;
     vector<int> temp;
     temp = output(arr,d);

     for(int i=0; i<n;i++)
     {
         cout<< temp[i]<<" ";
     }
    }

    return 0;

}
