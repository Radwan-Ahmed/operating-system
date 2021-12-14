// removes from future  change increases miss. no change -> hit

#include <iostream>

using namespace std;

int main()
{
    cout<<"Enter process number : ";
    int n,num=0;
    cin>>n;
    int i,ar[n];
    cout<<"Enter string : ";
    for(i=0;i<n;i++){
        cin>>ar[i];
    }
    int p[3],kn[3];
    for(i=0;i<3;i++){
        p[i] = ar[i];
    }
    cout<<endl;
    int j,k;
    for(i=0;i<3;i++){
        cout<<i<<"         : ";
        for(j=0;j<=i;j++){
            cout<<p[j]<<' ';
        }
        cout<<endl;
    }
    for(i=3;i<n;i++){
        for(j=0;j<3;j++){
            for(k=i;k<n;k++){
                if(ar[k]==p[j])
                    break;
            }
            kn[j] = k;
        }



        int big_ind = 0;
        for(j=1;j<3;j++){
            if(kn[j]>kn[big_ind]){
                big_ind = j;
            }
        }

        bool chk = 1;
        for(j=0;j<3;j++){
            if(p[j]==ar[i]){
                chk = 0;
                break;
            }
        }

        if(chk){
            p[big_ind]=ar[i];
            num++;
        }
        cout<<i<<"         : ";
        for(j=0;j<3;j++){
            cout<<p[j]<<' ';
        }
        cout<<endl;
    }
    cout<<"hit ratio : "<<float(8-num)/(float)8<<endl;
    cout<<"miss ratio : "<<float(num)/(float)8<<endl;
    return 0;
}

