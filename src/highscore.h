#ifndef HIGHSCORE_H
#define HIGHSCORE_H

#include <string>
#include <iostream>

class HighScore {
    public:
        HighScore(): _filepath("./highscore.txt") {
            std::cout << "construct HighScore";
        }
        int ReadHighScore();
        int GetHighScore();
        void WriteHighScore(int score);
    
    private:
        std::string _filepath;
        int _highScore;
};



#endif