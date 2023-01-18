/*
User input for color, 1 - 4
print what is inside
rnadomly get a color
 - create string with either g, r, b, or y.
 - randomly pick a number and that spot in string
 - print that color out.

*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>
#include <string>
using namespace std;


string bagOfMarbles = "";
int max = 0;
int main();

// random #
// used from Mosh on Youtube. Says this is a universal basic random number gnerator.
int random(){
    int max = bagOfMarbles.length();
    srand(time(0));
    int number = rand() % max;
    cout << number;
    return 0;
}

string addColors(){
    string tempoption;
    string temp;
    cout << "Add marble to bag (RGBY) or enter x to see menu: ";
    cin >> temp;
    if (temp == "r"){
        tempoption = "r";
        bagOfMarbles.append(tempoption);
    

    }
    else if (temp == "g"){
        tempoption = "g";
        bagOfMarbles.append(tempoption);
    }

    else if (temp == "b"){
        tempoption = "b";
        bagOfMarbles.append(tempoption);
        }

    else if (temp == "y"){
        tempoption = "y";
        bagOfMarbles.append(tempoption);
        }

    else if (temp == "x"){
        ;
    }

    else {
        cout << "Invalid Option.";
        addColors();
        }

    cout << bagOfMarbles;
    return bagOfMarbles;
}

//add to string
//get digit from stringgg
int lengthString(){
    int digitToGet = random();
    char digit = bagOfMarbles[digitToGet];
    cout << digit;
    return 0;
}


int main(){
    int option = 0;
    cout << "1: Add Marbles" << endl;
    cout << "2: Get a random Marble" << endl;
    cout << "3: Quit" << endl;
    cin >> option;
    while (true){
    switch (option){
        case 1:
            addColors();
            break;
        case 2:
            lengthString();
            break;
        case 3:
            exit(0);
            break;
        default:
            cout << "Incorrect Option." << endl;
            main();
            break;
    }};
    return 0;
}
