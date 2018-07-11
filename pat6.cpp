#include <iostream>
#include <conio.h>

using namespace std;

int main()
{

    int i,j,k;
     for(i=0;i<5;++i)
     {   k=1;
         for(j=0;j<9;++j)
         {
             if(j>=6-i&&j<=4+i&&k)
             {
                cout<<"*";
                k=0;
             }
             else
             {
                cout<<" ";
                k=1;
             }
         }
         cout<<endl;
     }


     return 0;

}
