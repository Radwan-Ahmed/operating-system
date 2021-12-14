#include <iostream>

using namespace std;

int main()
{
    cout<<"Enter process number : ";
    int n;
    cin>>n;
    int a[n],b[n],e[n],i,t,tot = 0, ct, wt[n],le[n];
    bool chk =  1;
    for(i=0;i<n;i++){
        cout<<"Enter arrival time, burst time for process "<<i<<" : ";
        cin>>a[i]>>b[i];
        e[i]=b[i];
        tot+= b[i];
        wt[i] = 0;
        le[i]=a[i];
    }
    t = 0;
    while(tot>0){
        chk = 1;
        for(i=0;i<n;i++){
            if(a[i]<=t && e[i]>0){
                wt[i]+= t-le[i];
                cout<<"time "<<t<<" : process "<<i<<endl;
                ct = min(e[i],3);
                t += ct;
                e[i]-= ct;
                tot -= ct;
                chk = 0;
                le[i]=t;
            }

        }
        if(chk){
            cout<<"time "<<t<<" : idle."<<endl;
            t++;
        }

    }

    cout<<endl<<endl<<"Waiting time : ";
    for(i=0;i<n;i++){
        cout<<endl<<"         process "<<i<<" waiting time : "<<wt[i];
    }
    return 0;
}

