#include <stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    vector<int> a(q);
    vector<int> b(q);
    vector<int> m(q);
    for (int i = 0; i < q; i++)
    {
        cin>>a[i]>>b[i]>>m[i];
    }
    int disa,disb;
    for (int i = 0; i < q; i++)
    {
        disa=m[i]-a[i];
        disb=m[i]-b[i];
        if(disa<0){disa=disa*-1;}
        if(disb<0){disb=disb*-1;}
        if(disa<disb){cout<<"CatA\n";}
        if(disb<disa){cout<<"CatB\n";}
        if(disa==disb){cout<<"Mouse\n";}
    }
    return 0;
}