#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a[50];
    int q[50];
    while(t--)
    {
        for(int i=0;i<50;i++)
        {
            a[i]=0;
            q[i]=-1;
        }
        int m,n;
        cin>>n>>m;
        int f[n],p[n];
        for(int i=0;i<n;i++)
            cin>>f[i];
        for(int i=0;i<n;i++)
            cin>>p[i];
        int k=0;
        for(int i=0;i<n;i++)
        {
            if(f[i]==1)
            {
                a[0]+=p[i];
                q[0]=1;
            }
            else if(f[i]==2){
                a[1]+=p[i];
                q[1]=1;}
            else if(f[i]==3){
                a[2]+=p[i];
                q[2]=1;}
            else if(f[i]==4){
                a[3]+=p[i];
                q[3]=1;}
            else if(f[i]==5){
                a[4]+=p[i];
                q[4]=1;}
            else if(f[i]==6){
                a[5]+=p[i];
                q[5]=1;}
            else if(f[i]==7){
                a[6]+=p[i];
                q[6]=1;}
            else if(f[i]==8){
                a[7]+=p[i];
                q[7]=1;}
            else if(f[i]==9){
                a[8]+=p[i];
                q[8]=1;}
            else if(f[i]==10){
                a[9]+=p[i];
                q[9]=1;}
            else if(f[i]==11){
                a[10]+=p[i];
                q[10]=1;}
            else if(f[i]==12){
                a[11]+=p[i];
                q[11]=1;}
            else if(f[i]==13){
                a[12]+=p[i];
                q[12]=1;}
            else if(f[i]==14){
                a[13]+=p[i];
                q[13]=1;}
            else if(f[i]==15){
                a[14]+=p[i];
                q[14]=1;}
            else if(f[i]==16){
                a[15]+=p[i];
                q[15]=1;}
            else if(f[i]==17){
                a[16]+=p[i];
                q[16]=1;}
            else if(f[i]==18){
                a[17]+=p[i];
                q[17]=1;}
            else if(f[i]==19){
                a[18]+=p[i];
                q[18]=1;}
            else if(f[i]==20){
                a[19]+=p[i];
                q[19]=1;}
            else if(f[i]==21){
                a[20]+=p[i];
                q[20]=1;}
            else if(f[i]==22){
                a[21]+=p[i];
                q[21]=1;}
            else if(f[i]==23){
                a[22]+=p[i];
                q[22]=1;}
            else if(f[i]==24){
                a[23]+=p[i];
                q[23]=1;}
            else if(f[i]==25){
                a[24]+=p[i];
                q[24]=1;}
            else if(f[i]==26){
                a[25]+=p[i];
                q[25]=1;}
            else if(f[i]==27){
                a[26]+=p[i];
                q[26]=1;}
            else if(f[i]==28){
                a[27]+=p[i];
                q[27]=1;}
            else if(f[i]==29){
                a[28]+=p[i];
                q[28]=1;}
            else if(f[i]==30){
                a[29]+=p[i];
                q[29]=1;}
            else if(f[i]==31){
                a[30]+=p[i];
                q[30]=1;}
            else if(f[i]==32){
                a[31]+=p[i];
                q[31]=1;}
            else if(f[i]==33){
                a[32]+=p[i];
                q[32]=1;}
            else if(f[i]==34){
                a[33]+=p[i];
                q[33]=1;}
            else if(f[i]==35){
                a[34]+=p[i];
                q[34]=1;}
            else if(f[i]==36){
                a[35]+=p[i];
                q[35]=1;}
            else if(f[i]==37){
                a[36]+=p[i];
                q[36]=1;}
            else if(f[i]==38){
                a[37]+=p[i];
                q[37]=1;}
            else if(f[i]==39){
                a[38]+=p[i];
                q[38]=1;}
            else if(f[i]==40){
                a[39]+=p[i];
                q[39]=1;}
            else if(f[i]==41){
                a[40]+=p[i];
                q[40]=1;}
            else if(f[i]==42){
                a[41]+=p[i];
                q[41]=1;}
            else if(f[i]==43){
                a[42]+=p[i];
                q[42]=1;}
            else if(f[i]==44){
                a[43]+=p[i];
                q[43]=1;}
            else if(f[i]==45){
                a[44]+=p[i];
                q[44]=1;}
            else if(f[i]==46){
                a[45]+=p[i];
                q[45]=1;}
            else if(f[i]==47){
                a[46]+=p[i];
                q[46]=1;}
            else if(f[i]==48){
                a[47]+=p[i];
                q[47]=1;}
            else if(f[i]==49)
            {
                a[48]+=p[i];
                q[48]=1;
            }
            else if(f[i]==50)
            {
                a[49]+=p[i];
                q[49]=1;
            }
        }
        int z[n],e=0;
        for(int i=0;i<50;i++)
        {
            if(q[i]==1)
                z[e++]=a[i];
        }
//        cout<<"e:"<<e<<endl;
//        for(int i=0;i<e;i++)
//            cout<<z[i]<<endl;
        sort(z,z+e);
        cout<<z[0]<<endl;
    }
return 0;
}
