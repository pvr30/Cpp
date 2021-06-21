#include<iostream>
using namespace std;
char a[3][3]={'1','2','3','4','5','6','7','8','9'};
char player1,player2;
void showboard()
{
   cout<<"  "<<a[0][0]<<" | "<<a[0][1]<<" | "<<a[0][2]<<endl;
   cout<<"-------------"<<endl;
   cout<<"  "<<a[1][0]<<" | "<<a[1][1]<<" | "<<a[1][2]<<endl;
   cout<<"-------------"<<endl;
   cout<<"  "<<a[2][0]<<" | "<<a[2][1]<<" | "<<a[2][2]<<endl;
}
void player1_input()
{
    int pos1;
    cout<<"\nEnter Player 1's Position"<<endl;
    cin>>pos1;
    if(pos1==1){
        if(a[0][0]=='1'){
            a[0][0]=player1;
        }
        else{
            cout<<"This Position is Already Filled"<<endl;
            player1_input();
        }
    }
    else if(pos1==2){
        if(a[0][1]=='2'){
            a[0][1]=player1;
        }
        else{
            cout<<"This Position is Already Filled"<<endl;
            player1_input();
        }
    }
    else if(pos1==3){
        if(a[0][2]=='3'){
            a[0][2]=player1;
        }
        else{
            cout<<"This Position is Already Filled"<<endl;
            player1_input();
        }
    }
    else if(pos1==4){
        if(a[1][0]=='4'){
            a[1][0]=player1;
        }
        else{
            cout<<"This Position is Already Filled"<<endl;
            player1_input();
        }
    }
    else if(pos1==5){
        if(a[1][1]=='5'){
            a[1][1]=player1;
        }
        else{
            cout<<"This Position is Already Filled"<<endl;
            player1_input();
        }
    }
    else if(pos1==6){
        if(a[1][2]=='6'){
            a[1][2]=player1;
        }
        else{
            cout<<"This Position is Already Filled"<<endl;
            player1_input();
        }
    }
    else if(pos1==7){
        if(a[2][0]=='7'){
            a[2][0]=player1;
        }
        else{
            cout<<"This Position is Already Filled"<<endl;
            player1_input();
        }
    }
    else if(pos1==8){
        if(a[2][1]=='8'){
            a[2][1]=player1;
        }
        else{
            cout<<"This Position is Already Filled"<<endl;
            player1_input();
        }
    }
    else if(pos1==9){
        if(a[2][2]=='9'){
            a[2][2]=player1;
        }
        else{
            cout<<"This Position is Already Filled"<<endl;
            player1_input();
        }
    }

}


void player2_input()
{
    int pos2;
    cout<<"\nEnter Player 2's Position"<<endl;
    cin>>pos2;
    if(pos2==1){
        if(a[0][0]=='1'){
            a[0][0]=player2;
        }
        else{
            cout<<"This Position is Already Filled"<<endl;
            player2_input();
        }
    }
    else if(pos2==2){
        if(a[0][1]=='2'){
            a[0][1]=player2;
        }
        else{
            cout<<"This Position is Already Filled"<<endl;
            player2_input();
        }
    }
    else if(pos2==3){
        if(a[0][2]=='3'){
            a[0][2]=player2;
        }
        else{
            cout<<"This Position is Already Filled"<<endl;
            player2_input();
        }
    }
    else if(pos2==4){
        if(a[1][0]=='4'){
            a[1][0]=player2;
        }
        else{
            cout<<"This Position is Already Filled"<<endl;
            player2_input();
        }
    }
    else if(pos2==5){
        if(a[1][1]=='5'){
            a[1][1]=player2;
        }
        else{
            cout<<"This Position is Already Filled"<<endl;
            player2_input();
        }
    }
    else if(pos2==6){
        if(a[1][2]=='6'){
            a[1][2]=player2;
        }
        else{
            cout<<"This Position is Already Filled"<<endl;
            player2_input();
        }
    }
    else if(pos2==7){
        if(a[2][0]=='7'){
            a[2][0]=player2;
        }
        else{
            cout<<"This Position is Already Filled"<<endl;
            player2_input();
        }
    }
    else if(pos2==8){
        if(a[2][1]=='8'){
            a[2][1]=player2;
        }
        else{
            cout<<"This Position is Already Filled"<<endl;
            player2_input();
        }
    }
    else if(pos2==9){
        if(a[2][2]=='9'){
            a[2][2]=player2;
        }
        else{
            cout<<"This Position is Already Filled"<<endl;
            player2_input();
        }
    }

}
char win()
{
    if((a[0][0]=a[0][1]=a[0][2])==player1){
            return player1;
    }
    if((a[1][0]=a[1][1]=a[1][2])==player1){
            return player1;
    }
    if((a[2][0]=a[2][1]=a[2][2])==player1){
            return player1;
    }
    if((a[0][0]=a[1][0]=a[2][0])==player1){
            return player1;
    }
    if((a[0][1]=a[1][1]=a[2][1])==player1){
            return player1;
    }
    if((a[0][2]=a[1][2]=a[2][2])=player1){
            return player1;
    }
    if((a[0][0]=a[1][1]=a[2][2])=player1){
            return player1;
    }
    if((a[0][2]=a[1][1]=a[2][0])=player1){
            return player1;
    }
    if((a[0][0]=a[0][1]=a[0][2])==player2){
            return player2;
    }
    if((a[1][0]=a[1][1]=a[1][2])==player2){
            return player2;
    }
    if((a[2][0]=a[2][1]=a[2][2])==player2){
            return player2;
    }
    if((a[0][0]=a[1][0]=a[2][0])==player2){
            return player2;
    }
    if((a[0][1]=a[1][1]=a[2][1])==player2){
            return player2;
    }
    if((a[0][2]=a[1][2]=a[2][2])=player2){
            return player2;
    }
    if((a[0][0]=a[1][1]=a[2][2])=player2){
            return player2;
    }
    if((a[0][2]=a[1][1]=a[2][0])=player2){
            return player2;
    }
}


int main()
{
    char temp;
    int n=9;
    cout<<"\t\t\t\tTIC TAC TOE"<<endl;
    cout<<"\n\n";
    showboard();
    cout<<"Enter Player 1's Choice 'X' Or '0'\n\n"<<endl;
    cin>>player1;
     if(player1=='X')
        player2='0';
     else
        player2='X';
     cout<<"Player 1 chosen:- "<<player1<<endl;
     cout<<"Player 2 chosen:- "<<player2<<endl;
     while(1)
{
     player1_input();
     player2_input();
     showboard();
     temp=win();
     cout<<temp<<endl;
     while(temp==player1){
        cout<<"Congratulation Player 1 Won The Game"<<endl;
        break;
     }
     while(temp=player2){
        cout<<"Congratulation Player 2 Won The Game"<<endl;
        break;
     }
    /* else if(player1_win()=='='){ //&& player2_win()=='='){
         cout<<"The Game Is Tie "<<endl;
         break;
     } */
}
    return 0;
}
