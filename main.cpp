#include <iostream>

using namespace std;

int icecream_vanilla=1;
int icecream_vanilla_qty=20;
int payment;


int main()
{
    while(true)
    {
            cout << "Jkuat Vending machine! Ice cream available at 60/= each" << endl;
    cout<<"Only 20 and 40 shs coins are accepted."<<endl;
    cout<<"We have "<<icecream_vanilla_qty<<" cans of vanilla icecream"<<endl;
    cout<<"Enter payment"<<endl;
    cin>>payment;
    int total_amount=0;

    switch(payment)
    {
    case 20:
    int amount;
    cout<<"You entered 20 kshs, you need 40 more to complete transaction"<<endl;
    cout<<"Enter amount"<<endl;
    cin>>amount;
    if(amount==40){
        cout<<"Collect can! Good day!"<<endl;
    }

    else if(amount==20){
    int new_amount;
    total_amount=amount+payment;
    cout<<"You have entered "<<total_amount<<" Add 20shs to complete transaction"<<endl;
    cin>>new_amount;
    if(new_amount==20 || new_amount==40){
    cout<<"Collect can! Good day"<<endl;
    }
    else{
        cout<<"Only 20 and 40 shs coins accepted!"<<endl;
    }

    }
    else{
        cout<<"Only 20 and 40 shs coins accepted!"<<endl;

    }
    break;

    case 40:
        cout<<"You entered 40ksh, you need 20 more to complete transaction"<<endl;
        cout<<"Enter amount"<<endl;
        cin>>amount;
        if(amount==20 || amount==40){
            cout<<"Collect can,good day!"<<endl;
        }

        else{
            cout<<"Only 20 and 40 shs coins accepted!"<<endl;
        }
    break;

    default:
        cout<<"Only 20 and 40 shs coins accepted!"<<endl;

        }

    }


    }
