#include <iostream>
#include <string>

using namespace std;

void clearScreen()
{
    cout << string(50, '\n');
}

void displayIntroduction()
{
    cout << "Welcome to the Scooby doo Horror Text Adventure Game!\n";
    cout << "Scooby Doo: The Mystery of the Haunted Mansion\n";
    cout << "==============================================\n";
    cout << "You are part of the Scooby Doo gang, solving mysteries together.\n";
    cout << "But Fred wants to split up the gang to solve the mystery of the haunted mansion.\n";
    cout << "You must convince the gang to stay together and solve the mystery as a team!\n\n";
    cout << "==================================\n";
    
}
void playConvicefred(bool& isGangTogether);
{
    string playerInput;

    bool isGangTogether = true;

    while (true) {
        cout << "What would you like to do? ";
        getline(cin, playerInput);

        if (playerInput == "look") {
            cout << "You are standing outside the haunted mansion.\n";
            cout << "You see Shaggy, Velma, and Daphne nearby.\n";
        }
        else if (playerInput == "talk to Shaggy") {
            cout << "Shaggy: Like, I'm not sure about splitting up, man. It's dangerous!\n";
        }
        else if (playerInput == "talk to Velma") {
            cout << "Velma: Fred, we should stick together. Our teamwork is our strength!\n";
        }
        else if (playerInput == "talk to Daphne") {
            cout << "Daphne: I agree with Velma. We should work as a team to solve this mystery.\n";
        }
        else if (playerInput == "talk to Fred") {
            if (isGangTogether) {
                cout << "Fred: I think splitting up will cover more ground. We can reunite later.\n";
                cout << "You need to convince Fred to keep the gang together!\n";
                isGangTogether = false;
            }
            else {
                cout << "Fred: Alright, I understand. Let's stick together and solve this mystery!\n";
                break;
            }
        }
        else {
            cout << "I don't understand that command.\n";
        }
    }

}
void exampleChoices()
{
   

    cout << "\nThe gang decides to stay together and enters the haunted mansion.\n";
    cout << "They encounter various spooky challenges and eventually solve the mystery.\n";
    cout << "Congratulations! The gang successfully foils the ghost's plans!\n";
}
    while (true) {
        cout << "What would you like to do? ";
        getline(cin, playerInput);

        if (playerInput == "action") {
            cout << "";
        }
        else if (playerInput == "action2") {
            cout << "";
        }
        else if (playerInput == "action3") {
            cout << "";
        }
        else if (playerInput == "action4") {
            cout << "";
            break;
        }
        else {
            cout << "I don't understand that command.\n";
        }
    }
}

// next game play gatheritems1
void gatheritems1(hasFlashlight, hasKey)
{
    while (true) {
        cout << "What would you like to do? ";
        getline(cin, playerInput);

        if (playerInput == "look") {
            cout << "You are in a dark room. You can't see anything.\n";
        }
        else if (playerInput == "open door") {
            if (hasKey) {
                cout << "You unlock the door and enter the next room.\n";
                break;
            }
            else {
                cout << "The door is locked. You need to find a key.\n";
            }
        }
        else if (playerInput == "find key") {
            cout << "You find a key under the bed.\n";
            hasKey = true;
        }
        else if (playerInput == "find flashlight") {
            cout << "You find a flashlight on the table.\n";
            hasFlashlight = true;
        }
        else if (playerInput == "use flashlight") {
            if (hasFlashlight) {
                cout << "You turn on the flashlight. The room is now visible.\n";
            }
            else {
                cout << "You don't have a flashlight.\n";
            }
        }
        else if (playerInput == "use key") {
            cout << "You can't use the key here.\n";
        }
        else {
            cout << "I don't understand that command.\n";
        }
    }
}

int main()
{
    clearScreen();
    displayIntroduction();
    exampleChoices();
    playHauntedMansion();
    playConvicefred(isGangTogether);
    playGatheritem1();

    return 0;
}
