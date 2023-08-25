#include <iostream>
#include "Progressbar.hpp"

using namespace std;
using namespace Bar;

int main() {
    // Import class of progressbar
    ProgressBar_v1 progressbar;
    // 1 variant
    // default progressbar
    for (int i = 0;i < 100;i++) {
        progressbar.Update();
    }
    // Reset all parametrs and variables
    progressbar.ResetAll();
    // 2 variant
    // Change done symbol
    doneSymbol = "=";
    for (int i = 0;i < 100;i++) {
        progressbar.Update();
    }

    return 0;
}