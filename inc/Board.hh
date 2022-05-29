#include <iostream>
#include <memory>
#include <fstream>
#include <string>
#include <iomanip>
#include <bits/stdc++.h>

class Board{
    unsigned int Size, streak;
    char ** board_state;
    public: 
        Board(unsigned int NewSize, unsigned int new_streak);
        void PutChar(unsigned int i,unsigned int j, char symbol);
        void PrintState();
        bool IsSpaceAvailable();
        int EvaluateMove();
        int MinMax(int depth, bool isMax);     
        int MinMaxAlfaBeta(int depth, bool isMax, int alpha, int beta);  
        std::pair<int,int> FindBestMove();
};