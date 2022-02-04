#include<string>
#include<iostream>
using namespace std;

class cafe
{
    protected:
    double q=0;
    double total=0;
    string input="Y";
    string input2,input3;
    double array[3]={30,40,50};
    string array1[3]={"biscuit","cake","chai"};
    public:
    void display()
    {
        int choice;
        while (input == "Y")
        {
        
        cout<<"Welcome to _____________    "<<endl;
        cout<<"items      Price     <<<>>>>"<<endl;
        cout<<"1) Biscuit 30 "<<endl;
        cout<<"2) cake    40"<<endl;
        cout<<"3) chai    50"<<endl;
        cout<<"What would you like (1-8)"<<endl;
        cin>>choice;
        cout<<"how many would you like :"<<endl;
        cin>>q;
        cout<<"Would you like anything else : (Y\n)"<<endl;
        cin>>input;
        total= (q*array[choice-1])+total;
        if(input=="N"|| input=="n"){
            cout<<"are you satisfied :"<<endl;
            cin>>input2;
            if(input2=="Y"){
                cout<<"Thank you"<<endl;
            }
        }
    }
     switch (choice){
         case 0:
         cout<<"Invalid response"<<endl;
         case 1:
             cout<<"You have ordered: "<<q<<array1[0]<<endl;
             cout<<"Your total is "<<total<<endl;
             break;
         case 2:
             cout<<"You have ordered "<<q<<"biscuit rs 30"<<endl;
             cout<<"your total is Rs"<<total<<endl;
             break;
        }
}};     


int main(){
    cafe a;
    a.display();
    return 0;

}
