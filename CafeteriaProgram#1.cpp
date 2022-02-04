   #include <string>
    #include <iostream>
    
    
    using namespace std;
    
    int main()
    
    {
    
     int choice; //declare variables
    double q=0;
    double total=0;
    string input ="Y"; //default input is yes
    string input2,input3,input4;
    double array [8]={30, 40,100,80,250,300,280,60}; // declare array 
    string array1 [8]={"Regular Chai (Rs 30)", "Doodh Pati (Rs 40)", "Chicken Roll (Rs 100)", "Shawarma (Rs 80)", "Burger (Rs 250)", "Special Burger (Rs 300)", "Zinger Burger(Rs 280)","Kabaab (Rs 60)"};
    
    while (input=="Y" || input=="y"){ // while loop when input=y
        cout << "******Abdullah Cafe *******" << endl; //menu display
    cout <<"Welcome! Here is the Cafe Menu:"<< endl;
    cout <<      "Items            **Cost**  "<<endl;
    cout<<" 1-) Regular chai      Rs 30         "<<endl;
    cout<<" 2-) Doodh patti       Rs 40         "<<endl;
    cout<<" 3-) Chicken Roll      Rs 100        "<<endl;
    cout<<" 4-) Shawarma          Rs 80         "<<endl;
    cout<<" 5-) Burger            Rs 250        "<<endl;
    cout<<" 6-) Special Burger    Rs 300        "<<endl;
    cout<<" 7-) Zinger Burger     Rs 280        "<<endl;
    cout<<" 8-) Kabaab            Rs 60         "<<endl;
    cout<<"what would you like?(1-8):" <<endl;
    cin >> choice;
      

    
    cout << "how many would you like?:" <<endl;
    cin >> q; //quantity
    cout <<"Would you like anything else?(Y/N):"<<endl;
    cin >> input;
        total= (q*array[choice-1])+total;
        if(input=="N" ||input=="n"){
            cout<<"Are you satisfied with your order?(Y/N)"<<endl;
            cin >>input2;
            if (input2=="Y"){
                cout << "Thank you! Have a nice day!"<<endl;
            }
            
        }
    }
    
     switch(choice){
         case 0:
         cout <<"invalid response"<<endl;
         case 1:
            cout << "you have ordered: "<<q<<array1[0] <<endl;
            cout << "your total is  Rs "<<total<<endl;
            break;
         case 2:
            cout << "you have ordered: "<<q<<" Chai Rs 30"<<endl;
            cout << "your total is  Rs "<<total<<endl;
            break;
         case 3:
            cout << "you have ordered: "<<q<< " Doodh patti Rs 40"<< endl;
            cout << "your total is  Rs "<<total<<endl;
            break;
         case 4:
            cout<< "you have ordered: "<<q<< " Chicken Roll Rs 100" <<endl;
            cout << "your total is  Rs "<<total<<endl;
            break;
         case 5:
            cout<< "you have ordered: "<<q<< " Shawarma Rs 80"<<endl;
            cout << "your total is Rs  "<<total<<endl;
            break;
        case 6:
            cout<< "you have ordered: "<<q<< " Burger"<<endl;
            cout << "your total is  Rs "<<total<<endl;
            break;
        case 7:
            cout<< "you have ordered: "<<q<<  " Special Burger"<<endl;
            cout << "your total is Rs  "<<total<<endl;
            break;
        case 8:
            cout<< "you have ordered: "<<q<< " Kabab"<<endl;
            cout << "your total is Rs  "<<total<<endl;
            break;
        
       
     
        
    }
    
    
     return 0;
    
    }