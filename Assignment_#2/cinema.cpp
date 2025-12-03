#include<iostream>
using namespace std;

string hall[10][9];

void initializeHall(){
    int seatNum=1;
    for(int i=0;i<10;i++){
        for(int j=0;j<9;j++){
            if(seatNum<10)
                hall[i][j]="0"+to_string(seatNum)+"-f";
            else
                hall[i][j]=to_string(seatNum)+"-f";
            seatNum++;
        }
    }
}

void displayHall(){
    cout<<"\n";
    for(int i=0;i<10;i++){
        for(int j=0;j<9;j++){
            cout<<hall[i][j]<<"  ";
        }
        cout<<endl;
    }
}

bool isValidSeat(int seatNum){
    return seatNum>=1 && seatNum<=90;
}

int main(){
    initializeHall();
    int choice;
    
    do{
        cout<<"\n1. View Hall\n2. Book Seat\n3. Exit\nChoice: ";
        cin>>choice;
        
        if(choice==1){
            displayHall();
        }
        else if(choice==2){
            int numSeats;
            cout<<"How many seats do you want to book? ";
            cin>>numSeats;
            
            for(int k=0;k<numSeats;k++){
                int seatNum;
                cout<<"Enter seat number "<<k+1<<" (01-90): ";
                cin>>seatNum;
                
                if(!isValidSeat(seatNum)){
                    cout<<"Invalid seat! Please enter between 01-90.\n";
                    k--;
                    continue;
                }
                
                int row=(seatNum-1)/9;
                int col=(seatNum-1)%9;
                
                if(hall[row][col].back()=='R'){
                    cout<<"Seat already booked! Choose another seat.\n";
                    k--;
                    continue;
                }
                
                if(seatNum<10)
                    hall[row][col]="0"+to_string(seatNum)+"-R";
                else
                    hall[row][col]=to_string(seatNum)+"-R";
                
                cout<<"Seat "<<seatNum<<" booked successfully!\n";
            }
            cout<<"\nUpdated Hall:\n";
            displayHall();
        }
    }while(choice!=3);
    
    return 0;
}








// int row=0,col=0;
// int current=1;
// bool found=false;
                
// for(int i=0;i<10 && !found;i++){
//     for(int j=0;j<9 && !found;j++){
//         if(current==seatNum){
//             row=i;
//             col=j;
//             found=true;
//         }
//         current++;
//     }
// }
                
// if(hall[row][col].back()=='R'){
//     cout<<"Seat already booked! Choose another seat.\n";
//     k--;
//     continue;
// }
                