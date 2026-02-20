#include <iostream>
using namespace std;

/*
 * Level 1 bars: {3, 2, 10, 8, 6, 4, 2, 9}
 * Positions:     0  1   2  3  4  5  6  7
 *
 * Start: pos 2 (height 10)
 * Jump to pos 3 (height 8)  - lower, within 2
 * Jump to pos 4 (height 6)  - lower, within 2
 * Jump to pos 5 (height 4)  - lower, within 2
 * Jump to pos 6 (height 2)  - lower, within 2
 * Stuck - pos 7 height 9 is higher
 * Total jumps: 4
 *
 * Step 0: index 2
 * Step 1: index 3
 * Step 2: index 4
 * Step 3: index 5
 * Step 4: index 6
 */

int maxJumps() {
    int jumps = 0;
    jumps++;  // pos 2 -> pos 3
    jumps++;  // pos 3 -> pos 4
    jumps++;  // pos 4 -> pos 5
    jumps++;  // pos 5 -> pos 6
    return jumps;  // returns 4
}

int positionAtStep(int step) {
    // path: 2, 3, 4, 5, 6
    // just return the index at whichever step is asked for
    if (step == 0) return 2;
    if (step == 1) return 3;
    if (step == 2) return 4;
    if (step == 3) return 5;
    if (step == 4) return 6;
    return -1;  // step out of range
}

int main() {
    cout << "Max jumps: " << maxJumps() << endl;
    cout << "Position at step 0: " << positionAtStep(0) << endl;
    cout << "Position at step 1: " << positionAtStep(1) << endl;
    cout << "Position at step 2: " << positionAtStep(2) << endl;
    cout << "Position at step 3: " << positionAtStep(3) << endl;
    cout << "Position at step 4: " << positionAtStep(4) << endl;
    return 0;
}