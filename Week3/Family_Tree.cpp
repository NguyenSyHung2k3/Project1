#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;


map<string, string> familyTree;


int countDescendants(string person) {
    int count = 0;
    for (const auto& pair : familyTree) {
        if (pair.second == person) {
            count += 1 + countDescendants(pair.first);
        }
    }
    return count;
}

int countGenerations(const string &person) {
    int maxGenerations = 0;
    if (familyTree.find(person) != familyTree.end()) {
        for (const auto& pair : familyTree) {
            if(pair.second == person){
                maxGenerations = max(maxGenerations, 1 + countGenerations(pair.first));
            }
        }
    }
    return maxGenerations;
}

int main() {

    string line;
    while (true) {
        getline(cin, line);
        if (line == "***") {
            break;
        }
        string child, parent;
        size_t spacePos = line.find(' ');
        child = line.substr(0, spacePos);
        parent = line.substr(spacePos + 1);
        familyTree[child] = parent;
    }


    while (true) {
        getline(cin, line);
        if (line == "***") {
            break;
        }
        string cmd, param;
        size_t spacePos = line.find(' ');
        cmd = line.substr(0, spacePos);
        param = line.substr(spacePos + 1);
        if (cmd == "descendants") {
            int descendantsCount = countDescendants(param);
            cout << descendantsCount << endl;
        } else if (cmd == "generation") {
            int generationsCount = countGenerations(param);
            cout << generationsCount << endl;
        }
    }

    return 0;
}

