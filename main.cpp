#include <iostream>
#include <random>
#include <ctime>
#include <cmath>
#include <vector>

using namespace std;

int main() {
    int N;
    int M = 10;

    vector<int> data;
    vector<int> N_values;

    srand(time(NULL));

    for (int i = 0; i < M; i++) {

        if (i < M / 5) {
            N = 10;
        } else if (i < 2 * M / 5) {
            N = 100;
        } else if (i < 3 * M / 5) {
            N = 1000;
        } else if (i < 4 * M / 5) {
            N = 10000;
        } else {
            N = 100000;
        }

        N_values.push_back(N);

        int currentPosition = 0;

        for (int j = 0; j < N; j++) {
            int randomNumber = rand() % 2;
            (randomNumber == 0) ? currentPosition++ : currentPosition--;
        }
        
        data.push_back(currentPosition);
    }

    for (int i = 0; i < data.size(); i++) {
        cout << "T" << i + 1 << ": N" << N_values[i] << ": " << data[i] << endl;
    }

    return 0;
}