/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<bits/stdc++.h>
using namespace std;
int ch,j=0;
class game{
    public:
    char square[10]={'0','1','2','3','4','5','6','7','8','9'};
    int checkwin();
    void board();
}g1[50],g2[50];

int game::checkwin(){
	if(square[1]==square[2]&&square[2]==square[3])
		return 1;
	else if(square[4]==square[5]&&square[5]==square[6])
		return 1;
	else if(square[7]==square[8]&&square[8]==square[9])
		return 1;
	else if(square[1]==square[5]&&square[5]==square[9])
		return 1;
	else if(square[1]==square[4]&&square[4]==square[7])
		return 1;
	else if(square[2]==square[5]&&square[5]==square[8])
		return 1;
	else if(square[3]==square[6]&&square[6]==square[9])
		return 1;
	else if(square[3]==square[5]&&square[5]==square[7])
		return 1;
	else if(square[1]!='1'&&square[2]!='2'&&square[3]!='3'&&square[4]!='4'&&square[5]!='5'&&square[6]!='6'&&square[7]!='7' &&square[8]!='8'&&square[9]!='9')
			return 0;
	else
		return -1;
}
void game::board(){
system("cls");
system("clear");
cout<<"    TIC TAC TOE  "<<endl;
if(ch==1)
    cout<<"   PLAYER 1: X   PLAYER 2: O  "<<endl;
else
    cout<<"   PLAYER: X   COMPUTER: O  "<<endl;
cout << "     |     |     " << endl;
cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;

cout << "_____|_____|_____" << endl;
cout << "     |     |     " << endl;

cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;

cout << "_____|_____|_____" << endl;
cout << "     |     |     " << endl;

cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;

cout << "     |     |     " << endl << endl;
}
int main(){
re:	int ply=1,i,flag=1,choice;
	string replay;
	char mark='\0';
    again: cout<<"\n******************MAINMENU*******************";
    cout<<"\n\t1.Two-Player Mode";
    cout<<"\n\t2.Computer v/s Player Mode";
    cout<<"\n\t3.Exit";
    cout<<"\nEnter your choice: ";
    cin>>ch;
    if(ch==1)
    {
        goto twoplayers;
    }
    else if(ch==3)
        return 0;
    else if(ch==2)
    {
        do{
            g2[j].board();
            int f=0;
            flag=flag%2;
            if(flag==1)
            {
                mark='X';
            A:  cout<<"\nPlayer enter a number: ";
                cin>>choice;
                switch(choice)
                {
                    case 1: if(g2[j].square[1]=='1')
                                g2[j].square[1]=mark;
                            else
                                f=1;
                            break;
                    case 2: if(g2[j].square[2]=='2')
                                g2[j].square[2]=mark;
                            else
                                f=1;
                            break;
                    case 3: if(g2[j].square[3]=='3')
                                g2[j].square[3]=mark;
                            else
                                f=1;
                            break;
                    case 4: if(g2[j].square[4]=='4')
                                g2[j].square[4]=mark;
                            else
                                f=1;
                            break;
                    case 5: if(g2[j].square[5]=='5')
                                g2[j].square[5]=mark;
                            else
                                f=1;
                            break;
                    case 6: if(g2[j].square[6]=='6')
                                g2[j].square[6]=mark;
                            else
                                f=1;
                            break;
                    case 7: if(g2[j].square[7]=='7')
                                g2[j].square[7]=mark;
                            else
                                f=1;
                            break;
                    case 8: if(g2[j].square[8]=='8')
                                g2[j].square[8]=mark;
                            else
                                f=1;
                            break;
                    case 9: if(g2[j].square[9]=='9')
                                g2[j].square[9]=mark;
                            else
                                f=1;
                            break;
                    default:cout<<"\nInvalid Input, Try again: ";
                            goto A;
                }
                if(f==1)
                {
                    cout<<"\nInvalid!, try again: ";
                    goto A;
                }
            }
            else
            {
                mark='O';
            B:  choice=rand()%10;    //computer rand()
                switch(choice)
                {
                    case 1: if(g2[j].square[1]=='1')
                                g2[j].square[1]=mark;
                            else
                                goto B;
                            break;
                    case 2: if(g2[j].square[2]=='2')
                                g2[j].square[2]=mark;
                            else
                                goto B;
                            break;
                    case 3: if(g2[j].square[3]=='3')
                                g2[j].square[3]=mark;
                            else
                                goto B;
                            break;
                    case 4: if(g2[j].square[4]=='4')
                                g2[j].square[4]=mark;
                            else
                                goto B;
                            break;
                    case 5: if(g2[j].square[5]=='5')
                                g2[j].square[5]=mark;
                            else
                                goto B;
                            break;
                    case 6: if(g2[j].square[6]=='6')
                                g2[j].square[6]=mark;
                            else
                                goto B;
                            break;
                    case 7: if(g2[j].square[7]=='7')
                                g2[j].square[7]=mark;
                            else
                                goto B;
                            break;
                    case 8: if(g2[j].square[8]=='8')
                                g2[j].square[8]=mark;
                            else
                                goto B;
                            break;
                    case 9: if(g2[j].square[9]=='9')
                                g2[j].square[9]=mark;
                            else
                                goto B;
                            break;
                    default:goto B;
                }
            }
            i=g2[j].checkwin();
            flag++;
        }while(i==-1);
        g2[j].board();
        if(i==1)
        {
            if(flag==2)
			    cout<<"\nPlayer has Won!"<<endl;
			else
			    cout<<"\nComputer Won :/"<<endl;
        }
		else
			cout<<"Draw"<<endl;
		cout<<"\n\n\tDo you want to continue: ";
		cin>>replay;
		if(replay=="y" || replay=="Y") 
		{
		    j++;
		    system("cls");
		    system("clear");
		    goto re;
		}
		cout<<"\n************************END*************************";
		return 0;
    }
    else
    {
        cout<<"\nInvalid choice! Try again...";
        goto again;
    }
twoplayers:
    do
	{
		g1[j].board();
		ply=(ply%2)?1:2;
		
		cout<<"Player "<<ply<<", enter a number: ";
		cin>>choice;

		mark=(ply==1)? 'X':'O';
		if (choice==1&&g1[j].square[1]=='1'){
		g1[j].square[1]=mark;
		}
		else if(choice==2&&g1[j].square[2]=='2'){
		g1[j].square[2]=mark;
		}
		else if(choice==3&&g1[j].square[3]=='3'){
		g1[j].square[3]=mark;
		}
		else if(choice==4&&g1[j].square[4]=='4'){
		g1[j].square[4]=mark;
		}
		else if(choice==5&&g1[j].square[5]=='5'){
		g1[j].square[5]=mark;
		}
		else if(choice==6&&g1[j].square[6]=='6'){
		g1[j].square[6]=mark;
		}
		else if(choice==7&&g1[j].square[7]=='7'){
		g1[j].square[7]=mark;
		}
		else if(choice==8&&g1[j].square[8]=='8'){
		g1[j].square[8]=mark;
		}
		else if(choice==9&&g1[j].square[9]=='9'){
		g1[j].square[9]=mark;
		}
		else{
		cout<<"Invalid Move"<<endl;
		ply--;
		}
		i=g1[j].checkwin();
		ply++;
		}
		while(i==-1);
		g1[j].board();
		if(i==1)
			cout<<"Player "<<--ply<<" has Won!!!"<<endl;
		else
			cout<<"Draw"<<endl;
		cout<<"\n\n\tDo you want to continue: ";
		cin>>replay;
		if(replay=="y" || replay=="Y") 
		{
		    j++;
		    system("clear");
		    system("cls");
		    goto re;
		}
		cout<<"\n************************END*************************";
		return 0;
}
