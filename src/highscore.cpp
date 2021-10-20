#include "highscore.h"
#include <fstream>
#include <iostream>


int HighScore::ReadHighScore(){
    // Read from File
    std::ifstream highscoreFile;
    highscoreFile.open(_filepath, std::ios::in);

    if (highscoreFile) {
        std::string line;

        if(getline(highscoreFile, line)) {
            std::cout << "read new line";
            std::cout << line;
            _highScore = std::stoi(line);
        }
    }
    else {
        std::cout << "could not open highScore file!";
    }
    std::cout << "highscore: " << _highScore << "\n";
    highscoreFile.close();

    return _highScore;
}

void HighScore::WriteHighScore(int score) const {
    // Write to file
    
    if (score > _highScore) {
        std::ofstream file;
        file.open(_filepath, std::ios::out);
        file << score << "\n";
        file.close();
    }
    
}

int HighScore::GetHighScore() const {
    return _highScore;
}