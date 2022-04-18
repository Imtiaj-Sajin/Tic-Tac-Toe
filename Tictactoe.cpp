#include<iostream>
using namespace std;
int a;  string k,l;//player 1=k,2=l
char coordinate[10]={'1','2','3','4','5','6','7','8','9'};
void board(){

    system("cls");

    cout<<"\n";
    cout<<"\t\t               |       |               \n";
    cout<<"\t\t           "<< coordinate [0]<<"   |   "<<coordinate [1] <<"   |   " <<  coordinate [2]  <<"        \n";
    cout<<"\t\t        _______|_______|_______        \n";
    cout<<"\t\t               |       |               \n";
    cout<<"\t\t           "<< coordinate [3]<<"   |   "<<coordinate [4] <<"   |   " <<  coordinate [5]  <<"        \n";
    cout<<"\t\t        _______|_______|_______        \n";
    cout<<"\t\t               |       |               \n";
    cout<<"\t\t           "<< coordinate [6]<<"   |   "<<coordinate [7] <<"   |   " <<  coordinate [8]  <<"        \n";
    cout<<"\t\t               |       |               \n";
    cout<<"\n";
}
int result();
void winner(){
        a=result();
        if(a==1)
        cout<<k<<" win";
        else if(a==2)
        cout<<l<<" win";
        else if(a==3)
        cout<<" \t\tMatch Draw!";
}

void assignSign(){
    int n11, n12, n13, n14, n15, n21, n22, n23, n24;
    cout<<k<<" -> X"<<endl;
    cout<<l<<" -> O"<<endl;
    cout<<"Enter a Cell number you want to put mark\n";

        cout<<k<<":";
        cin>>n11;
        coordinate[n11-1]='X';
        board();

        cout<<l<<":";
        cin>>n21;
        if(n11==n21){
            cout<<"Wrong move\n";
            cout<<l<<" :";
            cin>>n21;
        }
        coordinate[n21-1]='O';
        board();


        cout<<k<<":";
        cin>>n12;
        if(n12==n21||n12==n11){
            cout<<"Wrong move\n";
            cout<<k<<" :";
            cin>>n12;
        }
        coordinate[n12-1]='X';
        board();


        cout<<l<<":";
        cin>>n22;
        if(n22==n21||n22==n11||n22==n12){
            cout<<"Wrong move\n";
            cout<<l<<":";
            cin>>n22;
        }
        coordinate[n22-1]='O';
        board();

        cout<<k<<":";
        cin>>n13;
        if(n13==n21||n13==n11||n13==n12||n13==n22){
            cout<<"Wrong move\n";
            cout<<k<<":";
            cin>>n13;
        }
        coordinate[n13-1]='X';
        board();
        winner();

        if(a==1||a==2){
            cout<<"\n Thanks for playing";
        }
        else{
            cout<<l<<":";
            cin>>n23;
            if(n23==n21||n23==n11||n23==n12||n23==n22||n23==n13){
                cout<<"Wrong move\n";
                cout<<l<<":";
                cin>>n23;
            }
            coordinate[n23-1]='O';
            board();
            winner();
            if(a==1||a==2){
            cout<<"\nThanks for playing";
            }
            else{
                cout<<k<<":";
                cin>>n14;
                if(n14==n21||n14==n11||n14==n12||n14==n22||n14==n13||n14==n23){
                    cout<<"Wrong move\n";
                    cout<<k<<":";
                    cin>>n14;
                }
                coordinate[n14-1]='X';
                board();
                winner();
                if(a==1||a==2){
                cout<<"Thanks for playing";
                }
                else{
                    cout<<l<<":";
                    cin>>n24;
                    if(n24==n21||n24==n11||n24==n12||n24==n22||n24==n13||n24==n23||n24==n14){
                        cout<<"Wrong move\n";
                        cout<<l<<":";
                        cin>>n24;
                    }
                    coordinate[n24-1]='O';
                    board();
                    winner();
                    if(a==1||a==2){
                    cout<<"Thanks for playing";
                    }
                    else{
                        cout<<k<<":";
                        cin>>n15;
                        if(n15==n21||n15==n11||n15==n12||n15==n22||n15==n13||n15==n23||n15==n14||n15==n24){
                            cout<<"Wrong move\n";
                            cout<<k<<":";
                            cin>>n15;
                        }
                        coordinate[n15-1]='X';
                        board();
                        winner();
}}}}}
int result(){

    if((coordinate[0]==coordinate[3])&&coordinate[0]==coordinate[6]){
    if(coordinate[0]=='X')
    a=1;
    else
    a=2;
    }
    if(a==1||a==2)
    return a;
    else{
        if((coordinate[1]==coordinate[4])&&coordinate[1]==coordinate[7]){
        if(coordinate[1]=='X')
        a=1;
        else
        a=2;
        }
            if(a==1||a==2)
            return a;
            else{
                if((coordinate[2]==coordinate[5])&&coordinate[2]==coordinate[8]){
                if(coordinate[2]=='X')
                a= 1;
                else
                a= 2;
                }
                if(a==1||a==2)
                return a;
                else{
                    if((coordinate[0]==coordinate[1])&&coordinate[0]==coordinate[2]){
                    if(coordinate[0]=='X')
                    a= 1;
                    else
                    a= 2;
                    }
                    if(a==1||a==2)
                    return a;
                    else{
                        if((coordinate[3]==coordinate[4])&&coordinate[3]==coordinate[5]){
                        if(coordinate[3]=='X')
                        a= 1;
                        else
                        a= 2;
                        }
                        if(a==1||a==2)
                        return a;
                        else{
                            if((coordinate[6]==coordinate[7])&&coordinate[6]==coordinate[8]){
                            if(coordinate[6]=='X')
                            a= 1;
                            else
                            a= 2;
                            }
                            if(a==1||a==2)
                            return a;
                            else{
                                if((coordinate[0]==coordinate[4])&&coordinate[0]==coordinate[8]){
                                if(coordinate[0]=='X')
                                a= 1;
                                else
                                a= 2;
                                }
                                if(a==1||a==2)
                                return a;
                                else{
                                    if((coordinate[6]==coordinate[4])&&coordinate[6]==coordinate[2]){
                                    if(coordinate[6]=='X')
                                    a= 1;
                                    else
                                    a= 2;
                                    }
                                    if(a==1||a==2)
                                    return a;
                                    else{
                                        if (coordinate[0] != '1' && coordinate[1] != '2' && coordinate[2] != '3' && coordinate[3] != '4' && coordinate[4] != '5' && coordinate[5] != '6' && coordinate[6] != '7' && coordinate[7] != '8' && coordinate[8] != '9'){
                                        return 3;
    }}}}}}}}}}


int main(){
    system("color CF");
    cout<<"Player 1 name:";

    cin>>k;
    cout<<"Player 2 name:";
    cin>>l;

    board();
    assignSign();
    return 0;

}
