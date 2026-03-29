#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    int targetScore = 50;   
    int score = 0;
    int shots = 0;

    
    double centerX = (rand() % 11 - 5);  
    double centerY = (rand() % 11 - 5);

    cout << "Target center is hidden!\n";

    while (score < targetScore) {
        double x, y;

        cout << "Shot " << (shots + 1) << " (x y): ";
        cin >> x >> y;

        
        double noiseX = ((rand() % 2001) - 1000) / 1000.0; 
        double noiseY = ((rand() % 2001) - 1000) / 1000.0;

        x += noiseX;
        y += noiseY;

        
        double dx = x - centerX;
        double dy = y - centerY;

        double r = sqrt(dx * dx + dy * dy);

        int points = 0;

        // зоны мишени
        if (r <= 1)
            points = 10;
        else if (r <= 3)
            points = 5;
        else if (r <= 5)
            points = 2;
        else
            points = 0;

        score += points;
        shots++;

        cout << "Points: " << points << " | Total: " << score << "\n\n";
    }

    cout << "\n===== RESULT =====\n";
    cout << "Shots fired: " << shots << endl;
    cout << "Total score: " << score << endl;

    
    double accuracy = (double)score / (shots * 10);

    if (accuracy >= 0.8)
        cout << "Level: Sniper\n";
    else if (accuracy >= 0.5)
        cout << "Level: Shooter\n";
    else
        cout << "Level: Beginner\n";
}