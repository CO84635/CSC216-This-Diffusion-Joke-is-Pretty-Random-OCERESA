#include <iostream>
#include <random>
#include <ctime>
#include <vector>

using namespace std;

int main() {
    int N = 50;
    int M = 50;

    vector<int> data;

    srand(time(NULL));

    for (int i = 0; i < M; i++) {

        int currentPosition = 0;

        for (int j = 0; j < N; j++) {
            int randomNumber = rand() % 2;
            (randomNumber == 0) ? currentPosition++ : currentPosition--;
        }
        
        data.push_back(currentPosition);
    }

    for (int i = 0; i < data.size(); i++) {
        cout << "T" << i + 1 << ": " << data[i] << "\t";
    }

    return 0;
}