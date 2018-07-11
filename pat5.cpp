#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
    int i,j,r,c,k;


    cout<<"Enter the no. of rows"<<endl;
    cin>>r;
    cout<<"Enter the no. of columns"<<endl;
    cin>>c;
      k=c/2;
    for(i=1;i<=r;++i)
    {
        for(j=1;j<=c;++j)
        {
           if(j>=k+2-i&&j<=k+i)
            {
            cout<<"*";
            }
           else
            {
             cout<<" ";
            }

        }
        cout<<endl;
    }

   return 0;

}
