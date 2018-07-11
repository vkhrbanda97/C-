

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int i,j,k,c,r,d,q;

      cout<<"Enter the no. of rows"<<endl;
      cin>>r;
      cout<<"Enter the no. of columns"<<endl;
      cin>>c;
      d=c/2;
      q=d+1;
      if(r==(c/2+1)&&c%2!=0)
      {

     for(i=1;i<=r;++i)
         {    k=1;
         for(j=1;j<=c;++j)
         {
             if(j>=d+2-i&&j<=d+i)
             {
                cout<<k;
                 if(j<q)
                 {
                     ++k;
                 }
                else
                {
                    --k;
                }

            }


             else
             {
                 cout<<" ";
             }
         }
         cout<<endl;
         }
      }
     else
     {
         cout<<"Invalid no. of rows and columns!!!!";
     }


    return 0;

}
