#include <iostream>
#include <fstream>
#include <map>
#include <string>
using namespace std;

int main() {
    map<string,int> traffic;
    ifstream file("210-final-1-FA25.txt");
    string a, b;
    while (file >> a >> b) {
        traffic[a]++;
        traffic[b]++;
    }
    for (auto &p : traffic) cout << p.first << " " << p.second << endl;

    int maxCount = 0;
    for (auto &p : traffic) {
        if (p.second > maxCount)
        maxCount = p.second;
    }
    cout << "\nBusiest airport(s): " << maxCount << endl;

}