#include <iostream>
#include <conio.h>

using namespace std;

int main()

{

    int i,j,k=0;

    for(i=1;i<=9;++i)
    {
         if(i<=5)
         {
             ++k;
         }
         else
         {
             --k;
         }
        for(j=1;j<=5;++j)
        {
            if(j<=k)
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
