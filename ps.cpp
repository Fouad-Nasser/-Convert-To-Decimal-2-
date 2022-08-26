#include<iostream>
using namespace std;

int main(){
    unsigned int t,n,d,c,dec;
    cin>>t;

    for (int i = 0; i < t; i++)
    {
        c=0;
        dec=0;
        cin>>n;

        while (n != 0)
        {
            d=n%2;
            n /= 2;
            if (d==1)
            {
                c++;
            }            
        }
        for (int i = 0,b=1; i < c; i++,b*=2)
        {
            dec += 1*b;
        }
        cout<<dec<<endl;        
    }
    

    return 0;
}
