#include <iostream>
#include <windows.h>
#include <time.h>
using namespace std;

struct S{ //Street which has parameters
  int d; // distance (meters)
  bool t; // traffic (with traffic or without)
  bool p; // public transport (present in the street or not)
};

int main(){

    unsigned seed = time(0);
    srand (time(NULL));
    int v = rand() % 1000 + 500; // Generate a random number to be the map size

    cout << "Generating Map :D";

    S m[v][v]; // Create a Uberland random map to features be applied

    system("CLS");

    for(int i = 0; i < v; i++){            
        for(int c = 0; c < v; c++){            
            m[i][c].d = rand() % 300 + 100;
            m[i][c].t = rand() % 1 + 0;
            m[i][c].p = rand() % 1 + 0;
        }
    }

    cout << "Welcome to UberWay, the UberLand Mobility Improver!";

    Sleep(10000000);

}