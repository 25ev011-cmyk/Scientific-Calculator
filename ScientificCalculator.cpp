#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int choice;
    double a,b;

    do
    {
        cout<<"\n--- Scientific Calculator ---\n";
        cout<<"1. Addition\n";
        cout<<"2. Subtraction\n";
        cout<<"3. Multiplication\n";
        cout<<"4. Division\n";
        cout<<"5. Power\n";
        cout<<"6. Square Root\n";
        cout<<"7. Exit\n";
        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                cout<<"Enter two numbers: ";
                cin>>a>>b;
                cout<<"Result = "<<a+b;
                break;

            case 2:
                cout<<"Enter two numbers: ";
                cin>>a>>b;
                cout<<"Result = "<<a-b;
                break;

            case 3:
                cout<<"Enter two numbers: ";
                cin>>a>>b;
                cout<<"Result = "<<a*b;
                break;

            case 4:
                cout<<"Enter two numbers: ";
                cin>>a>>b;
                if(b!=0)
                    cout<<"Result = "<<a/b;
                else
                    cout<<"Division by zero not possible";
                break;

            case 5:
                cout<<"Enter base and exponent: ";
                cin>>a>>b;
                cout<<"Result = "<<pow(a,b);
                break;

            case 6:
                cout<<"Enter a number: ";
                cin>>a;
                cout<<"Result = "<<sqrt(a);
                break;

            case 7:
                cout<<"Thank You!";
                break;

            default:
                cout<<"Invalid Choice";
        }

    }while(choice!=7);

    return 0;
}