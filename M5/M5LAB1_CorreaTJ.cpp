#include <iostream>
#include <limits>
using namespace std;

/*
CSC 134
M5LAB1 - Choose Your Own Adventure
Survive the Night: Blackwood Motel
CorreaTJ
10/26/26
*/

// FUNCTION PROTOTYPES
void main_menu();
void choice_window();
void choice_reception();
void choice_clerk();
void choice_back_door();
void choice_basement();
void choice_road();
void ending_escape();
void ending_motel();
void choice_go_home();

int main()
{
    cout << "====================================" << endl;
    cout << "  SURVIVE THE NIGHT" << endl;
    cout << "  BLACKWOOD MOTEL" << endl;
    cout << "====================================" << endl;

    main_menu();

    cout << endl;
    cout << "Thanks for playing Survive the Night!" << endl;

    return 0;
}

// MAIN MENU
void main_menu()
{
    int choice = 0;

    cout << "\n11:47 PM - BLACKWOOD ROAD" << endl;
    cout << "------------------------------------" << endl;
    cout << "Rain pounds against your car windows." << endl;
    cout << "Your GPS has lost its signal, and your phone is at 8%." << endl;
    cout << "You find an old roadside motel and step inside." << endl;
    cout << endl;

    cout << "The clerk whispers, \"You're late.\"" << endl;
    cout << "Suddenly, every light goes out." << endl;
    cout << "Someone knocks three times on the office door." << endl;
    cout << endl;

    cout << "WHAT DO YOU DO?" << endl;
    cout << "1. Look through the window" << endl;
    cout << "2. Hide behind the reception desk" << endl;
    cout << "3. Leave the motel" << endl;
    cout << "4. Quit the game" << endl;
    cout << "Choose: ";

    cin >> choice;

    if (cin.fail())
    {
        cin.clear();
        choice = 0;
    }

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    if (choice == 1)
    {
        choice_window();
    }
    else if (choice == 2)
    {
        choice_reception();
    }
    else if (choice == 3)
    {
        choice_go_home();
    }
    else if (choice == 4)
    {
        cout << "\nYou decide not to enter the nightmare." << endl;
    }
    else
    {
        cout << "\nInvalid choice. Try again." << endl;
        main_menu();
    }
}

// LOOK THROUGH THE WINDOW
void choice_window()
{
    int choice = 0;

    cout << "\n--- THE WINDOW ---" << endl;
    cout << "You wipe the fog from the glass." << endl;
    cout << "A tall figure stands motionless in the rain." << endl;
    cout << "The clerk whispers, \"Don't let it see you.\"" << endl;
    cout << "The figure points toward the back entrance." << endl;
    cout << endl;

    cout << "1. Ask the clerk what is happening" << endl;
    cout << "2. Sneak toward the back door" << endl;
    cout << "Choose: ";

    cin >> choice;

    if (cin.fail())
    {
        cin.clear();
        choice = 0;
    }

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    if (choice == 1)
    {
        choice_clerk();
    }
    else if (choice == 2)
    {
        choice_back_door();
    }
    else
    {
        cout << "Invalid choice. Try again." << endl;
        choice_window();
    }
}

// HIDE AT RECEPTION
void choice_reception()
{
    int choice = 0;

    cout << "\n--- HIDE AT RECEPTION ---" << endl;
    cout << "You hide behind the front desk." << endl;
    cout << "The clerk pulls a brass key from beneath his shirt." << endl;
    cout << "A phone rings. The caller ID displays YOUR NUMBER." << endl;
    cout << "\"Whatever you do, don't answer it,\" he whispers." << endl;
    cout << endl;

    cout << "1. Ask about the brass key" << endl;
    cout << "2. Head downstairs into the basement" << endl;
    cout << "Choose: ";

    cin >> choice;

    if (cin.fail())
    {
        cin.clear();
        choice = 0;
    }

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    if (choice == 1)
    {
        choice_clerk();
    }
    else if (choice == 2)
    {
        choice_basement();
    }
    else
    {
        cout << "Invalid choice. Try again." << endl;
        choice_reception();
    }
}

// THE CLERK'S SECRET
void choice_clerk()
{
    int choice = 0;

    cout << "\n--- THE CLERK'S SECRET ---" << endl;
    cout << "The clerk says the motel was abandoned twenty years ago." << endl;
    cout << "\"Every night, someone checks in.\"" << endl;
    cout << "\"Every morning, one fewer person checks out.\"" << endl;
    cout << "He gives you a brass key marked 13." << endl;
    cout << endl;

    cout << "1. Use the key at the back door" << endl;
    cout << "2. Investigate the basement" << endl;
    cout << "Choose: ";

    cin >> choice;

    if (cin.fail())
    {
        cin.clear();
        choice = 0;
    }

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    if (choice == 1)
    {
        choice_back_door();
    }
    else if (choice == 2)
    {
        choice_basement();
    }
    else
    {
        cout << "Invalid choice. Try again." << endl;
        choice_clerk();
    }
}

// THE BACK DOOR
void choice_back_door()
{
    int choice = 0;

    cout << "\n--- THE BACK DOOR ---" << endl;
    cout << "The brass key feels strangely warm in your hand." << endl;
    cout << "You hear footsteps rushing toward you." << endl;
    cout << "Headlights shine beside your car outside." << endl;
    cout << endl;

    cout << "1. Unlock the door and run to your car" << endl;
    cout << "2. Find another way out" << endl;
    cout << "Choose: ";

    cin >> choice;

    if (cin.fail())
    {
        cin.clear();
        choice = 0;
    }

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    if (choice == 1)
    {
        choice_road();
    }
    else if (choice == 2)
    {
        choice_basement();
    }
    else
    {
        cout << "Invalid choice. Try again." << endl;
        choice_back_door();
    }
}

// THE BASEMENT
void choice_basement()
{
    int choice = 0;

    cout << "\n--- THE BASEMENT ---" << endl;
    cout << "You descend a cold, damp staircase." << endl;
    cout << "Dozens of suitcases line the walls." << endl;
    cout << "One suitcase has YOUR NAME written on it." << endl;
    cout << "A radio crackles: \"The motel keeps those who belong here.\"" << endl;
    cout << endl;

    cout << "1. Crawl through a narrow tunnel toward the road" << endl;
    cout << "2. Open the suitcase and enter the code inside" << endl;
    cout << "Choose: ";

    cin >> choice;

    if (cin.fail())
    {
        cin.clear();
        choice = 0;
    }

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    if (choice == 1)
    {
        choice_road();
    }
    else if (choice == 2)
    {
        ending_motel();
    }
    else
    {
        cout << "Invalid choice. Try again." << endl;
        choice_basement();
    }
}

// THE ROAD
void choice_road()
{
    int choice = 0;

    cout << "\n--- THE ROAD ---" << endl;
    cout << "You race toward your car and jump inside." << endl;
    cout << "In the rearview mirror, the clerk stands motionless." << endl;
    cout << "Someone is sitting in your passenger seat." << endl;
    cout << "They are holding a photograph of YOU outside the motel." << endl;
    cout << endl;

    cout << "1. Drive toward the distant highway lights" << endl;
    cout << "2. Turn around and confront the figure" << endl;
    cout << "Choose: ";

    cin >> choice;

    if (cin.fail())
    {
        cin.clear();
        choice = 0;
    }

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    if (choice == 1)
    {
        ending_escape();
    }
    else if (choice == 2)
    {
        ending_motel();
    }
    else
    {
        cout << "Invalid choice. Try again." << endl;
        choice_road();
    }
}

// ENDING 1: ESCAPE
void ending_escape()
{
    cout << "\n====================================" << endl;
    cout << "     ENDING 1: DAWN AT BLACKWOOD" << endl;
    cout << "====================================" << endl;

    cout << "You race toward the highway lights." << endl;
    cout << "The motel disappears behind you." << endl;
    cout << "Your phone regains a signal. The clock reads 6:01 AM." << endl;
    cout << endl;

    cout << "The passenger seat is suddenly empty." << endl;
    cout << "On the back of the photograph, new words appear:" << endl;
    cout << "\"YOU SURVIVED TONIGHT.\"" << endl;
    cout << endl;

    cout << "You escaped the motel, but something may find you again." << endl;
}

// ENDING 2: TRAPPED
void ending_motel()
{
    cout << "\n====================================" << endl;
    cout << "    ENDING 2: THE MOTEL KEEPS YOU" << endl;
    cout << "====================================" << endl;

    cout << "A door slams shut behind you." << endl;
    cout << "Dust covers the office, and the calendar reads 2006." << endl;
    cout << "An old guestbook lists people who checked in and never left." << endl;
    cout << endl;

    cout << "You turn to the final page." << endl;
    cout << "Your name is already written there." << endl;
    cout << endl;

    cout << "The clerk smiles." << endl;
    cout << "\"Welcome back. We've been expecting you.\"" << endl;
    cout << endl;

    cout << "You didn't escape the motel." << endl;
    cout << "Now you're part of its story." << endl;
}

// LEAVE THE MOTEL
void choice_go_home()
{
    cout << "\nYou decide the motel isn't worth the risk." << endl;
    cout << "You return to your car and drive away into the night." << endl;
    cout << "Sometimes the bravest choice is knowing when to leave." << endl;
    cout << "\nENDING: YOU NEVER CHECKED IN." << endl;
}

