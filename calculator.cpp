#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
    float num1,num2,result;
    char op,option;
    cout<<"**** CALCULATOR ****"<<endl;
    do
    {
    cout<<"Enter value of NUMBER 1 & NUMBER 2 :"<<endl;
    cin>>num1>>num2;
    cout<<"NUMBER 1 IS = "<<num1<<endl;
    cout<<"NUMBER 2 IS = "<<num2<<endl;
    cout<<"WHICH OPERATION YOU WILL LIKE TO PERFORM"<<endl;
    cout<<"PRESS (+) FOR ADDITION "<<endl<<"PRESS (-) FOR SUBTRACTION "<<endl<<"PRESS (*) FOR MULTIPLICATION "<<endl<<"PRESS (/) FOR DIVISION "<<endl;
    cin>>op;
    if(op == '+')
        {
            result=num1 + num2;
            cout<<"ADDITION OF "<<num1<<" & "<<num2<<" is = "<<result<<endl;
        }
    else if(op == '-')
        {
            result = num1 - num2;
            cout<<"SUBTRACTION OF "<<num1<<" & "<<num2<<" is = "<<result <<endl;
        }
    else if(op == '*')
        {
            result = num1 * num2;
            cout<<"MULTIPLICATION OF "<<num1<<" & "<<num2<<" is = "<<result<<endl;
        }
    else if(op == '/')
        {
            if (num2 != 0)
            {
                result = num1 / num2;
                cout << "DIVISION OF " << num1 << " & " << num2 << " is = " << result << endl;
            }
            else {
                cout << "MATHEMATICAL ERROR" << endl;
            }
        }
    else
        {
          cout<<"UNRECOGNIZED OPERATOR"<<endl;
        }
    cout << "DO YOU WANT TO CONTINUE THIS PROGRAM ? (Y OR N)";
    option = getche();
    cout << endl;
    }
    while (option != 'N');

    if (option == 'N')
        {
        cout <<"\n\t**** THANK YOU FOR USING THIS CALCULATOR ****" << endl;
        }
    getch();
    return 0;
}
