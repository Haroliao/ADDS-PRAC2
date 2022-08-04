#include<iostream>
#include<string>
#include "Referee.h"

using namespace std;
Referee::Referee(){

}
char Referee::refGame(Human player1, Computer player2){
    player2.makeMove();
    char choice=player1.makeMove();
     switch(choice){
        case 'R':
        return 'T';
        break;
        case 'P':
       return 'W';
        break;
        case 'S':
        return 'L';
        break;
        default:
        return 0;
    }
    
}

