#include "header.h"

SlotMachine::SlotMachine()
{
    winnings = 0;
    srand(static_cast<unsigned int>(time(0)));
}

void SlotMachine::spin() 
{
    for (int i = 0; i < 3; i++)
    {
        reels[i] = rand() % 4;
    }
}

void SlotMachine::displayResult() const
{
    cout << "Result: ";
    for (int i = 0; i < 3; i++) 
    {
        cout << symbols[reels[i]] << " ";
    }
    cout << endl;
}

int SlotMachine::calculateWinnings()  
{
    if (reels[0] == reels[1] && reels[1] == reels[2]) 
    {
        winnings = 10;
    }
    else if (reels[0] == reels[1] && reels[1] == reels[2] && reels[0] == reels[2]) 
    {
        winnings = 5;
    }
    else 
    {
        winnings = 0;
    }
    return winnings;
}