#include<iostream>
using namespace std;
int main(){
    int game;
    int transport;
   int bus2;
   int bus1;
    cout<<"MAIN MENU \n Welcome! What game do you want to play today? \n 1. Adventure \n 2. Madlib \n";
    cin >> game;
    if (game == 2) {

    std::string gerund, verbOne, nounOne, nounTwo, AdjOne, AdjTwo, AdjThree, verbTwo, nounsOne, verbThree, nounThree;


    cout << "Welcome to Madlib! (Remember NOT to use spaces) \n Input a verb: ";
    cin >> verbOne;

    cout << " add another verb: ";
    cin >> verbTwo;

    cout << " and one more: ";
    cin >> verbThree;

    cout << " noun: ";
    cin >> nounOne;

    cout << " nouns: ";
    cin >> nounsOne;

    cout << " another noun: ";
    cin >> nounTwo;

    cout << " adjective: ";
    cin >> AdjOne;

    cout << " another adjective: ";
    cin >> AdjTwo;

    cout << " add one more: ";
    cin >> AdjThree;

    cout << " gerund: ";
    cin >> gerund;

    cout << " sorry! add one more noun: ";
    cin >> nounThree;

    cout << "A lady and an engineer were " << verbOne << " in a ball. ";
    cout << " The engineer was " << verbTwo << " one some " << nounOne << " after " << AdjOne << ". ";
    cout << " His " << AdjTwo << " method was " << AdjThree << " to observe. ";
    cout << " While his right hand " << nounThree << " the " << nounsOne << " .";
    cout << " His left hand " << verbThree << " the " << nounTwo << ". " << endl;
}
else if (game == 1){
    
    cout << "Welcome to Adventure! I heard you wanted to go to the city? What do you want to take?: \n 1. The Local Bus? \n 2. The Express Bus? \n 3. The Train? \n 4. Walk \n";
    cin >> transport;
    if (transport == 1 || transport == 3){
        cout << "You got dropped off at the ferry. \n";
    }
    else if (transport == 2){
        cout << "You got dropped off in Lower Manhattan. \n";
    }
    else if (transport == 4){
        cout << "You walked a while, got tired, and just decided to stay home." << endl;
    }
   if (transport == 1 || transport == 3){
       cout << "Do you want to:\n 1. Discover the outlets? \n 2. Hop on the ferry? \n";
       cin >> bus1;
   }
   if(bus1 == 1){
       cout << "You went shopping at the outlets then went home.";
   }
   else if (bus1 == 2){
     cout << "You got dropped off in Lower Manhattan. \n";
   }
  
        if (transport == 2 || bus1 == 2){
        cout << "Where do you want to go now?:\n 1. Times Square? \n 2. Central Park? \n 3. Stay in Lower Manhattan? \n";
        }
        cin >> bus2;
        if (bus2 == 1){
        cout << "You went to Times Square, met some celebrities, and made some friends!";
        }
        else if (bus2 == 2){
        cout << "You went to Central Park and took pictures of the park!";
        }
        else if (bus2 == 3){
        cout << "You went shopping and found a $1000 Zara Gift Card!";
    }


}
}
