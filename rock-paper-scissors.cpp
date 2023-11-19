// rock, paper, scissors game by alfred siby cyriac 
#include <iostream>
#include <cstdlib> 
#include <ctime>
using namespace std;

void rps(){
    srand(time(0));
    string userAnswer, computerAnswer2, result, q2; 
    int computerAnswer1, count=0;
    cout << "Enter your object [Rock, Paper, Scissors]: ";
    cin >> userAnswer; 
    string options[3] = {"Rock", "Paper", "Scissors"};
    computerAnswer1 = rand() % (2-0+1)+(0);
    computerAnswer2 = options[computerAnswer1];
    for(int i=0; i<3; i++){
        if(userAnswer==options[i]) result = "Draw";
    }
    if(userAnswer=="Rock"&&computerAnswer2=="Paper") result = "Loser";
    else if(userAnswer=="Rock"&&computerAnswer2=="Scissors"){
        result = "Winner!";
        count++;
    }
    else if(userAnswer=="Paper"&&computerAnswer2=="Rock"){
        result = "Winner!";
        count++; 
    }
    else if(userAnswer=="Paper"&&computerAnswer2=="Scissors") result = "Loser";
    else if(userAnswer=="Scissors"&&computerAnswer2=="Rock") result = "Loser";
    else if(userAnswer=="Scissors"&&computerAnswer2=="Paper"){
        result = "Winner!";
        count++;
    }
    cout << "Rock, paper, scissors, say shoot: " << computerAnswer2 << endl; 
    cout << "Looks like we have a: " << result << endl; 
    cout <<  "Would you like to play again? [Yes/No] "; 
    cin >> q2; 
    if(q2=="YES"||q2=="Yes"||q2=="yes") rps(); 
    else{
        cout << "Thanks for playing! You won " << count << " game(s)" << endl;
        return; 
    }
}

int main()
{
    string q1; 
    cout << "Would you like to play rock, paper, scissors? [Yes/No] " ;
    cin >> q1;
    if(q1=="Yes"||q1=="YES"||q1=="yes") rps();
    else return 0; 
    return 0;
}
