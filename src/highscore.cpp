#include "highscore.h"
#include <fstream>
#include <iostream>

int HighScore::ReadHighScore(){
    // Read from File
    std::ifstream highscoreFile;
    highscoreFile.open(_filepath);

    if (highscoreFile) {
        std::string line;
        if (getline(highscoreFile, line)) {
            _highScore = std::stoi(line);
        }
    }
    std::cout << "highscore: " << _highScore << "\n";

    return _highScore;
}

void HighScore::WriteHighScore(int score) {
    // Write to file
    std::ofstream file;
    file.open(_filepath);
    
    if (score > _highScore)
    file << score << "\n";
}

int HighScore::GetHighScore() {
    return _highScore;
}