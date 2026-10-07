#include<bits/stdc++.h>
using namespace std;
void calfp(int frate[5][3],int fac_rate)
{
     string funUnits[5]={"input","output","inquiries","logical file","interface file"};
     string wtRates[3]={"low","average","high"};
     int wtFactors[5][3]={{3,4,6},{4,5,7},{3,4,6},{7,10,15},{5,7,10}};
     
     int ufp=0;
     for(int i =0;i<5;i++)
     {
             for(int j=0;j<3;j++)
             {
                     int freq=frate[i][j];
                     ufp+=freq*wtFactors[i][j];
                     }
                     }
                     
        int sum=14;
        sum=sum*fac_rate;
                
                double caf=0.65+(0.01*sum);
                double fp=ufp*caf;
                cout<<"Function point:"<<fp<<endl;
                cout<<"UFP:"<<ufp<<endl;
                cout<<"CAF:"<<caf<<endl;
                }
                int main()
                {
                    int frates[5][3]={{0,50,0},{0,40,0},{0,35,0},{0,6,0},{0,4,0}};
                    int fac_rate=3;
                    calfp(frates,fac_rate);
                    return 0;
                    }