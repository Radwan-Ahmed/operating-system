#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    cout<<"                 FCFS"<<endl<<endl;
    cout<<"enter process number : ";
    int n;
    cin>>n;
    n=n+1;
    int i,ar[n],arr[n],j;
    bool b[n];
    ar[0]=53;
    b[0]=1;
    arr[0]=53;
    cout<<"enter processes : ";
    for(i=1;i<n;i++){
        cin>>ar[i];
        arr[i]=ar[i];
        b[i]=1;
    }
    sort(arr,arr+n);

   /* for(i=0;i<n;i++){
        cout<<arr[i]<<' ';
    }
    cout<<endl<<endl;  */


    int loc[n];
                                // creating location array.

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(b[j]&&arr[j]==ar[i]){
                loc[i]=j;
              //  cout<<loc[i]<<' ';
                b[j]=0;
                break;
            }
        }
    }




    for(i=1;i<n;i++){
        cout<<endl<<"Step "<<i<<" :  ";
        if(loc[i]<loc[i-1]){
           // cout<<"in if"<<endl;
            for(j=loc[i];j<loc[i-1];j++){
                cout<<arr[j]<<" <- ";
            }
            cout<<arr[j]<<endl;
        }
        else{
            for(j=loc[i-1];j<loc[i];j++){
                cout<<arr[j]<<" -> ";
            }
            cout<<arr[j]<<endl;
        }
    }
    return 0;
}


 //       98 183 37 122 14 124 65 67

