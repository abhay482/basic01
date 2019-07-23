#include<bits/stdc++.h>
using namespace std;

class book
{
public:
    int bal;
    double price;
    void balance()
    {
        cout<<"Balance of Publisher:";
        cin>>bal;
    }
    int cost()
    {
        int x,y,z;
        cout<<"Type 1"<<" "<<"Type 2"<<" "<<"Type 3";
        cin>>x>>y>>z;
        int p=x*2+y*3+z*5;
        return p;
    }
    void profit(int n)
    {
        int p=1.5*price*n-price*n;
        bal+=p;
    }
};

book publish;

int main()
{
    int y=0;
    while(y<3)
    {
        cout<<"1. Enter Balance"<<"\n"<<"2. Enter Book is Published"<<"\n"<<"3. Enter Book to Publish"<<endl;
        int choice;
        cin>>choice;
        book temp;
        switch(choice)
        {
            case 1:temp.balance();
            y++;
            break;
            case 2:temp.price=temp.cost();
            y++;
            break;
            case 3: cout<<"Enter no. of book sold:";

                int n;
                cin>>n;
                temp.profit(n);
                if(temp.bal>=temp.cost())
                {
                    cout<<"YES";
                }
                else
                {
                    cout<<"NO";
                }
                y++;
                break;
         default:cout<<"invalid input";
        }
    }
}
