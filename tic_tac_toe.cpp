#include<bits/stdc++.h>
using namespace std;

void Design(char num1,char num2,char num3,char num4,char num5,char num6,char num7,char num8,char num9)
{
    cout<<"\n\n\n\n";
    cout<<"\t";
    cout<<"TIC-TAC-TOE : "<<endl;
    cout<<"\n\n\n\n\n";
    cout<<"\t|---|---|---|";
    cout<<"\n\t| "<<num1<<" | "<<num2<<" | "<<num3<<" |";
    cout<<"\n\t|---|---|---|";
    cout<<"\n\t| "<<num4<<" | "<<num5<<" | "<<num6<<" |";
    cout<<"\n\t|---|---|---|";
    cout<<"\n\t| "<<num7<<" | "<<num8<<" | "<<num9<<" |";
    cout<<"\n\t|---|---|---|\n";
}

int main()
{
    Restart :
    char ch,ch2;
    char num1='1',num2='2',num3='3',num4='4',num5='5',num6='6',num7='7',num8='8',num9='9';

    int num=1,count1=0;
    do
    {
        system("CLS");
        Design(num1,num2,num3,num4,num5,num6,num7,num8,num9);
        cout<<"\n\n";
        if(num==1)
        {
            cout<<"\t";
            cout<<"Player 1 : O\n";
            cout<<"\t";
            cout<<"Player 2 : X\n";
        }
        cout<<"\t";
        if(num%2!=0)
            cout<<"Player 1 : Enter any number from above box : ";
        else
            cout<<"Player 2 : Enter any number from above box : ";
        cin>>ch;
        if(num%2!=0)
        {
            switch(ch)
            {
                case '1' :
                            num1='O';
                            break;
                case '2' :
                            num2='O';
                            break;
                case '3' :
                            num3='O';
                            break;
                case '4' :
                            num4='O';
                            break;
                case '5' :
                            num5='O';
                            break;
                case '6' :
                            num6='O';
                            break;
                case '7' :
                            num7='O';
                            break;
                case '8' :
                            num8='O';
                            break;
                case '9' :
                            num9='O';
                            break;

                default :
                            num--;
                            cout<<"\t";
                            cout<<"Please enter a valid number!";
                            break;
            }
        }
        else
        {
            switch(ch)
            {
                case '1' :
                            num1='X';
                            break;
                case '2' :
                            num2='X';
                            break;
                case '3' :
                            num3='X';
                            break;
                case '4' :
                            num4='X';
                            break;
                case '5' :
                            num5='X';
                            break;
                case '6' :
                            num6='X';
                            break;
                case '7' :
                            num7='X';
                            break;
                case '8' :
                            num8='X';
                            break;
                case '9' :
                            num9='X';
                            break;

                default :
                            num--;
                            system("CLS");
                            Design(num1,num2,num3,num4,num5,num6,num7,num8,num9);
                            cout<<"\t";
                            cout<<"Please enter a valid number!";
                            break;
            }
        }
        if(num>=4)
        {
            if((num1==num2 && num1==num3 && num1=='O') || (num4==num5 && num4==num6 && num4=='O') || (num7==num8 && num7==num9 && num7=='O') || (num1==num4 && num1==num7 && num1=='O') || (num2==num5 && num2==num8 && num2=='O') || (num3==num6 && num3==num9 && num3=='O') || (num1==num5 && num1==num9 && num1=='O') || (num3==num5 && num3==num7 && num3=='O'))
            {
                system("CLS");
                Design(num1,num2,num3,num4,num5,num6,num7,num8,num9);
                cout<<"\t";
                cout<<"Player 1 won the game!"<<endl;
                count1++;
                break;
            }
            if((num1==num2 && num1==num3 && num1=='X') || (num4==num5 && num4==num6 && num4=='X') || (num7==num8 && num7==num9 && num7=='X') || (num1==num4 && num1==num7 && num1=='X') || (num2==num5 && num2==num8 && num2=='X') || (num3==num6 && num3==num9 && num3=='X') || (num1==num5 && num1==num9 && num1=='X') || (num3==num5 && num3==num7 && num3=='X'))
            {
                system("CLS");
                Design(num1,num2,num3,num4,num5,num6,num7,num8,num9);
                cout<<"\t";
                cout<<"Player 2 won the game!"<<endl;
                count1++;
                break;
            }
        }
        num++;

    }while(num<=9);

    if(count1==0)
    {
        system("CLS");
        Design(num1,num2,num3,num4,num5,num6,num7,num8,num9);
        cout<<"\t";
        cout<<"Game tied !\n";
    }
    cout<<"\t";
    cout<<"Enter E to exit the game Or Any key to restart the game : ";
    cin>>ch2;
    if(ch2=='E')
        exit(0);
    else
    {
        goto Restart;
    }

    return 0;
}
