#include "header.h"

int main() 
{
    SlotMachine slotMachine;
    char input;

    cout << "Press 'Enter' to spin the slot machine..." << endl;
    while (true)
    {
        input = getchar();
        if (input == '\n') 
        {
            slotMachine.spin();
            slotMachine.displayResult();
            int winnings = slotMachine.calculateWinnings();
            if (winnings > 0)
            {
                cout << "You won: " << winnings << " coins!" << endl;
            }
            else
            {
                cout << "No winnings, try again!" << endl;
            }
        }
    }

    return 0;
}