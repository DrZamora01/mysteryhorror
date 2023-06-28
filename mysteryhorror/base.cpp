#include <iostream>
#include <string>

using namespace std;

void displayIntroduction()
{
    cout << "Welcome to the Scooby Doo Horror Text Adventure Game!\n";
    cout << "Scooby Doo: The Mystery of the Haunted Mansion\n";
    cout << "==============================================\n";
    cout << "You are part of the Scooby Doo gang, solving mysteries together.\n";
    cout << "But Fred wants to split up the gang to solve the mystery of the haunted mansion.\n";
    cout << "You must convince the gang to stay together and solve the mystery as a team!\n\n";
    cout << "==================================\n";
}

void playConvinceFred(bool& isGangTogether)
{
    string playerInput;

    while (!isGangTogether) {
        cout << "What would you like to do? \n";
        cout << "1. Look\n";
        cout << "2. Talk to Shaggy\n";
        cout << "3. Talk to Velma\n";
        cout << "4. Talk to Daphne\n";
        cout << "5. Talk to Fred\n";
        getline(cin, playerInput);

        if (playerInput == "1") {
            cout << "You are standing outside the haunted mansion.\n";
            cout << "You see Shaggy, Velma, and Daphne nearby.\n";
        }
        else if (playerInput == "2") {
            cout << "Shaggy: Like, I'm not sure about splitting up, man. It's dangerous!\n";
        }
        else if (playerInput == "3") {
            cout << "Velma: Fred, we should stick together. Our teamwork is our strength!\n";
        }
        else if (playerInput == "4") {
            cout << "Daphne: I agree with Velma. We should work as a team to solve this mystery.\n";
        }
        else if (playerInput == "5") {
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

void playGatherItems(bool& hasFlashlight, bool& hasKey)
{
    string playerInput;

    while (true) {
        cout << "What would you like to do?\n";
        cout << "1. Look\n";
        cout << "2. Open door\n";
        cout << "3. Find key\n";
        cout << "4. Find flashlight\n";
        cout << "5. Use flashlight\n";
        cout << "6. Use key\n";
        getline(cin, playerInput);

        if (playerInput == "1") {
            cout << "You are in a dark room. You can't see anything.\n";
        }
        else if (playerInput == "2") {
            if (hasKey) {
                cout << "You unlock the door and enter the next room.\n";
                break;
            }
            else {
                cout << "The door is locked. You need to find a key.\n";
            }
        }
        else if (playerInput == "3") {
            cout << "You find a key under the bed.\n";
            hasKey = true;
        }
        else if (playerInput == "4") {
            cout << "You find a flashlight on the table.\n";
            hasFlashlight = true;
        }
        else if (playerInput == "5") {
            if (hasFlashlight) {
                cout << "You turn on the flashlight. The room is now visible.\n";
            }
            else {
                cout << "You don't have a flashlight.\n";
            }
        }
        else if (playerInput == "6") {
            cout << "You can't use the key here.\n";
        }
        else {
            cout << "I don't understand that command.\n";
        }
    }
}

int main()
{
    displayIntroduction();

    bool isGangTogether = true;
    bool hasFlashlight = false;
    bool hasKey = false;

    playConvinceFred(isGangTogether);
    playGatherItems(hasFlashlight, hasKey);

    return 0;
}
