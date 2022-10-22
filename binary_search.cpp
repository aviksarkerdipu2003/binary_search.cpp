#include<iostream>
using namespace std;

int main()
{
    int a=6;
    int loc;
    int arr[]={1,2,3,4,5,6,7,8};
    int i=0;
    int j=7;
    while(i<j)
    {
        int m=(i+j)/2;
        if(arr[m]<a)
            i=m+1;
        else
            j=m;
        if(a==arr[i])
            loc=i;
        else
            loc=-1;
    }
    cout<<loc;
    return 0;
}
