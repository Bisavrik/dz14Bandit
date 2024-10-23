#ifndef SLOTMACHINE_H
#define SLOTMACHINE_H

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class SlotMachine
{
private:
    const char* symbols[4] = { "+", "-", "*", "/" };
    int reels[3];
    int winnings;

public:
    SlotMachine();
    void spin();
    void displayResult() const;
    int calculateWinnings();
};

#endif
