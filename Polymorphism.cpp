#include<iostream>
using namespace std;

class Books
{
    private:
    double bookid, price;
    char bookn[50];
    public:
    void input()
    {
        cout<<"enter Book name"<<endl;
        cin>>bookn;
        cout<<"Enter book id and price"<<endl;
        cin>>bookid;
        cin>>price;
    }
    void show()
    {
        cout<<"The name of book is: "<<bookn<<endl;
        cout<<"Book id is: "<<bookid<<endl;
        cout<<"Book price is: "<<price<<endl;
    }
};
class writer: public Books
{
    private:
    char writern[40];
    double add, nobooks[4];
    public:
    void inputt()
    {
        int i,e=1;
        cout<<"Enter writer name: "<<endl;
        cin>>writern;
        cout<<"Writer adress: "<<endl;
        cin>>add;
        while(e!=6)
        {
            cout<<"Enter books name: "<<endl;
            cin>>nobooks[e];
            e++;
        }
    }
};
int main()
{
    writer a;
    a.input();
    a.show();
    a.inputt();
    return 0;

}