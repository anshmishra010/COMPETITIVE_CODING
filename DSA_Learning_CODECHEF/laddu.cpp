#include<iostream>
using namespace std;
int main()
{
    int test_c;
    cin>>test_c;
    while(test_c--)
    {
        int test_c_1;
        char nati[15];
        int sum =0;

        cin>>test_c_1>>nati;

        for(int i=0;i<test_c_1;i++)
        {
            char a[16];
            cin>>a;

            if(a[8] == 'W')
            {
                int r;
                cin>>r;
                sum+=320 - (r<20?r:20);
            }
            else if(a[8] == 'R')
            {
                sum+=300;
            }
            else if(a[8] == 'H')
            {
                sum+=50;
            }
            else
            {
                int bug;
                cin>>bug;
                if(bug>=50 && bug<=1000)
                {
                    sum+=bug;
                }
            }


        }
        if(nati[0] == 'I')
        {
            cout<<sum/200<<endl;
        }
        else
        {
            cout<<sum/400<<endl;
        }
    }
}