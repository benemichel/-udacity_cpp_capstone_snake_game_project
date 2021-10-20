#ifndef HIGHSCORE_H
#define HIGHSCORE_H

#include <string>
#include <iostream>

class HighScore {
    public:
        HighScore(): _filepath("../highscoretable.txt") {
            std::cout << "construct HighScore";
        }
        int ReadHighScore();
        int GetHighScore() const;
        void WriteHighScore(int score) const;
    
    private:
        std::string _filepath;
        int _highScore;
};

#endif