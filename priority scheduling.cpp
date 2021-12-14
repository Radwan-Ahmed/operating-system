#include <iostream>

using namespace std;

int main()
{
    int n,i,m,s,time=-1;
    cout<<"Number of processes : ";
    cin>>n;
    m=n;
    int ar[n],bt[n],pr[n],turn[n],waiting[n];
    for(i=0;i<n;i++){                                                                                                    // eta theke input nibe.
        cout<<"for process "<<i<<" input serially :- arrival time, burst time r priority : ";
        cin>>ar[i]>>bt[i]>>pr[i];
        waiting[i]=0;
    }
    while(m>0){
        time++;
        s=-1;
        for(i=0;i<n;i++){
            if(bt[i]>0&&ar[i]<=time){
                s=i;
                break;
            }
        }
        for(i++;i<n;i++){
            if(bt[i]>0 &&  ar[i]<=time && pr[i]<pr[s]){
                s = i;
            }
        }
        for(i=0;i<s;i++){
            if(bt[i]>0 && ar[i]<=time){
                waiting[i]++;
            }
        }
        for(i=s+1;i<n;i++){
            if(bt[i]>0 && ar[i]<=time){
                waiting[i]++;
            }
        }
        if(s>-1){
            cout<<"At time "<<time<<" process : "<<s<<"\n";
            bt[s]--;
            if(bt[s]==0)
                m--;
            turn[s]=time;
        }
        else{
            cout<<"At time "<<time<<" : idle\n";
        }
    }

    for(i=0;i<n;i++){
        cout<<"Process "<<i<<" turn around time "<<turn[i]<<" waiting time : "<<waiting[i]<<endl;
    }

    return 0;
}


