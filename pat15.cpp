#include <iostream>
#include <conio.h>

using namespace std;

int main()
{


    int i,j,k;

    for(i=1;i<=9;++i)

    {
        k=1;
        for(j=1;j<=5;++j)
        {
            if(i<=5)
            {
                if(j>=6-i)
                {
                    cout<<k;
                    ++k;
                }
                else
                {
                    cout<<" ";
                }
            }
            else
            {
                if(j>=i-4)
                {
                    cout<<k;
                    ++k;

                }
                else
                {
                    cout<<" ";
                }
            }
        }
        cout<<endl;

    }







    return 0;
}
