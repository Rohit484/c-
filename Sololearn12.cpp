#include <iostream>
using namespace std;

int main() {
    int ages[5];

    for (int i = 0; i < 5; ++i) {
        cin >> ages[i];
    }

    double youngest = ages[0];
    for (int a = 0; a <5; ++a)
    {
        if(youngest>ages[a])
        {
            youngest = ages[a];
        }
    }

    double prezzo = 50 - (50*youngest/100);
    cout << prezzo;

    return 0;
}
