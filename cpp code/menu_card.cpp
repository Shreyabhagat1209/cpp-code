#include<bits/stdc++.h>
using namespace std;

// mail- charan.kata80@gmail.com
//pass- Charan@786
class menu
{
    private:
        int ch,quantity,total=0,dosa=0,idli=0,md=0,samosa=0,chat=0,kachori=0,noodles=0,man=0,rice=0,gulab=0,malai=0,ice=0;
    public:
    
        void south_indian();
        void north_indian();
        void chinese();
        void dessert();
        void report();
        void update();
};

void menu::south_indian()
{
    cout<<"1. dosa - 50 Rs"<<endl<<"2. Idli - 50 Rs"<<endl<<"3 masala dosa - 80 Rs"<<endl;
    cout<<"enter your order"<<endl;
    cin>>ch;
    switch(ch)
    {
        case 1:
                dosa=1;
                cout<<"Enter the how many you want"<<endl;
                cin>>quantity;
                total+=quantity* 50;
                break;
        case 2:
                idli=1;
                cout<<"Enter the how many you want"<<endl;
                cin>>quantity;
                total+=quantity* 50;
                break;
        case 3:
                md=1;
                cout<<"Enter the how many you want"<<endl;
                cin>>quantity;
                total+=quantity* 50;
                break;
    }
}

void menu::north_indian()
{
    cout<<"1. samosa - 20 Rs"<<endl<<"2. chats - 50 Rs"<<endl<<"3. kachori - 30 Rs"<<endl;
    cout<<"enter your order"<<endl;
    cin>>ch;
    switch(ch)
    {
        case 1:
                samosa=1;
                cout<<"Enter the how many you want"<<endl;
                cin>>quantity;
                total+=quantity* 20;
                break;
        case 2:
                chat=1;
                cout<<"Enter the how many you want"<<endl;
                cin>>quantity;
                total+=quantity* 50;
                break;
        case 3:
                kachori=1;
                cout<<"Enter the how many you want"<<endl;
                cin>>quantity;
                total+=quantity* 30;
                break;
    }
}

void menu::chinese()
{
    cout<<"1. noodles - 80 Rs"<<endl<<"2. fried rice - 80 Rs"<<endl<<"3. manchurian - 50 Rs"<<endl;
    cout<<"enter your order"<<endl;
    cin>>ch;
    switch(ch)
    {
        case 1:
                noodles=1;
                cout<<"Enter the how many you want"<<endl;
                cin>>quantity;
                total+=quantity* 80;
                break;
        case 2:
                rice=1;
                cout<<"Enter the how many you want"<<endl;
                cin>>quantity;
                total+=quantity* 80;
                break;
        case 3:
                man=1;
                cout<<"Enter the how many you want"<<endl;
                cin>>quantity;
                total+=quantity* 50;
                break;
    }
    
}

void menu::dessert()
{
    cout<<"1. gulab jamun - 30 Rs"<<endl<<"2. ras malai - 30 Rs"<<endl<<"3. ice-cream- 50 Rs"<<endl;
    cout<<"enter your order"<<endl;
    cin>>ch;
    switch(ch)
    {
        case 1:
                gulab=1;
                cout<<"Enter the how many you want"<<endl;
                cin>>quantity;
                total+=quantity* 30;
                break;
        case 2:
                malai=1;
                cout<<"Enter the how many you want"<<endl;
                cin>>quantity;
                total+=quantity* 30;
                break;
        case 3:
                ice=1;
                cout<<"Enter the how many you want"<<endl;
                cin>>quantity;
                total+=quantity* 50;
                break;
    }
}

void menu::report()
{
    cout<<total<<endl;

    
}

void menu:: update()
{
    
}

int main()
{
    menu m;
    map<int,menu>data;
    char val;
    do
    {
        cout<<"------- Welcome to hotel-----"<<endl;
        cout<<"1. South Indian"<<endl;
        cout<<"2. North Indian"<<endl;
        cout<<"3. Chinese"<<endl;
        cout<<"4. dessert"<<endl;
        int ch,i=0;
        cout<<"Enter your order"<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1:
                    m.south_indian();
                    
                    break;
            case 2:
                    m.north_indian();

                    break;
                    
            case 3:
                     m.chinese();

                     break;
            case 4:
                    m.dessert();

                    break;
            
        }
        data[i]=m;
        i++;
        cout<<"Do you want something else......y/n"<<endl;
        cin>>val;
        
    }while(val=='y');
    
    m.report();
    map<int,menu>:: iterator itr;
    for(itr=data.begin();itr!=data.end();++itr)
        {       cout<<"total bill:"<<" ";
                cout<<itr->first<<" ";
                menu a=itr->second;
                a.report();
                cout<<endl;
        }
    return 0;
}