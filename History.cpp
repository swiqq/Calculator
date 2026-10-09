#include "History.h"
#include <fstream>
    void History::add(string operation) {
        operations.push_back(operation);
    }

    void History::show() {
        if (operations.empty()) {
            cout << "История пуста.";
            return;
        }
        else {
            for (int i = 0; i < operations.size(); i++) {
                cout << i + 1 << '.' << operations[i] << endl;
            }
        }
    }

    void History::load() {
        ifstream file("history.txt");
        if (!file) {
            return;
        }
        string line;
        while (getline(file, line)) {
            operations.push_back(line);
        }
        file.close();
    }

    void History::save() {
        ofstream files("history.txt");
        for (string i : operations) {

            files << i << endl;

        }
        files.close();
    }

    void History::clear() {
        operations.clear();

        ofstream file("history.txt");
        file.close();
        cout << "История очищена";
    }
