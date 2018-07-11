#include <iostream>
#include <conio.h>

using namespace std;

int main()
{

     int i,j,f=65;
     char ch;
     for(i=1;i<=5;++i)
     {   ch='A';
          f=65;
         for(j=1;j<=9;++j)
         {
             ch=char(f);

             if(j<=6-i||j>=4+i)
             { cout<<ch;

                if(j<5)
                {
                    ++f;
                }
                else
                {
                    --f;
                }
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
