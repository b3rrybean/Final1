#include <iostream>
#include <fstream>
#include <map>
#include <string>
using namespace std;

int main() {
    map<string,int> traffic;
    ifstream file("210-final-1FA25.txt");
    string a, b;

    while (file >> a >> b) {
        traffic[a] = traffic[a] + 1;
        traffic[b] = traffic[b] + 1;
    }
    for (auto p : traffic) cout << p.first << " " << traffic[p.first] << endl;
}