#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>

using namespace std;

int main(){
    
    double count = 0 ;
    double sum ;
    string score ;
    double sumpow = 0 ;
    ifstream source("score.txt") ;
    while(getline(source,score)){
        sum += stof(score) ;
        sumpow += stof(score)*stof(score) ;
        count++ ;
    }
    double mean = sum / count ;
    cout << "Number of data = " << count ;
    cout << setprecision(3);
    cout << "Mean = " << mean ;
    double sd = sqrt((1/count)*sumpow-pow(mean,2)) ;
    cout << "Standard deviation = " << sd ;
}