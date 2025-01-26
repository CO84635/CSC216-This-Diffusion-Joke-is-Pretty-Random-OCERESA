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

    srand(time(NULL));

    for (int i = 0; i < M; i++) {
        
        N = (i < (int)ceil(M / 2)) ? 10 : 100;
        int currentPosition = 0;

        for (int j = 0; j < N; j++) {
            int randomNumber = rand() % 2;
            (randomNumber == 0) ? currentPosition++ : currentPosition--;
        }
        
        data.push_back(currentPosition);
    }

    for (int i = 0; i < data.size(); i++) {
        cout << "T" << i + 1 << ": N" << ((i < (int)ceil(M / 2)) ? 10 : 100) << ": " << data[i] << endl;
    }

    return 0;
}