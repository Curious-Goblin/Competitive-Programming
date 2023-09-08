#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, r, a;
        cin >> l >> r;
        bool flag=false;
        if ((l == r) && (l % 2 != 0))
        {
            int divisor = 0;
            for (int i = 2; i*i<=l; i++)
            {
                if (l % i == 0)
                {
                    divisor = i;
                    break;
                }
            }
            if(divisor!=0)
            {
                cout << divisor << " " << l - divisor << endl;
                flag=true;
            }
        }
        else
        {
            if(r<=3)
            {
                cout<<-1<<endl;
                flag=true;
            }
            else if (r % 2 == 0)
            {
                cout<<r/2<<" "<<r/2<<endl;
                flag=true;
            }
            else
            {
                a = (r-1) / 2;
                cout<<a<<" "<<a<<endl;
                flag=true;
            }
        }
        if(flag==false)
        {
            cout<<"-1"<<endl;
        }
    }

    return 0;
}