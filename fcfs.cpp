#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    cout<<"             circular"<<endl<<endl;
    cout<<"enter process number : ";
    int n;
    cin>>n;
    int i,ar[n],j,m=0,arr[n];
    cout<<"enter processes : ";
    for(i=0;i<n;i++){
        cin>>ar[i];
        arr[i]=ar[i];
    }
    sort(arr,arr+n);
    int loc = 0;
    for(i=0;i<n;i++){
        if(arr[i]>=53){
            loc = i;
            break;
        }
    }
    cout<<53;
    for(i=loc;i<n;i++){
        cout<<" -> "<<arr[i];
    }
    for(i=0;i<loc;i++){
        cout<<" -> "<<arr[i];
    }
    return 0;
}

