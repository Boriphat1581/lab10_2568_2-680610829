#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int count = 0;
    double sum = 0;
    double sum_sq = 0;
    double score;
    
    ifstream source("score.txt");
    

    while (source >> score) {
        sum += score;       
        sum_sq += score * score; 
        count++;                
    }


    double mean = sum / count;
    double sd = sqrt((sum_sq / count) - (mean * mean));

หนด
    cout << "Number of data = " << count << endl;
    cout << setprecision(3); 
    cout << "Mean = " << mean << endl;
    cout << "Standard deviation = " << sd << endl;

    source.close();
    return 0;
}