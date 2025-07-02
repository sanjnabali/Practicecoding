// --------------  bitmask_demo.cpp  -----------------
#include <bits/stdc++.h>
using namespace std;

/* Small helper: print a binary mask with exactly n bits */
void showMask(int mask, int n) { cout << bitset<8>(mask).to_string().substr(8 - n); }

int main() {
    /* PART 1 — ENUMERATE ALL SUBSETS OF {A, B, C} */
    int n = 3;
    char arr[] = {'A','B','C'};
    int totalSubsets = 1 << n;           // = 2^n

    cout << "SUBSET ENUMERATION:\n";
    for (int mask = 0; mask < totalSubsets; ++mask) {
        showMask(mask, n);
        cout << "  →  { ";
        for (int i = 0; i < n; ++i)
            if (mask & (1 << i))         // check if item i is in this subset
                cout << arr[i] << ' ';
        cout << "}\n";
    }
    cout << "Total subsets = " << totalSubsets << "\n\n";

    /* PART 2 — MINI  CHEAT‑SHEET DEMO ON ONE MASK */
    int mask = 0b0101;   // sample mask  (items 0 and 2 are ON)
    int k    = 1;        // we will work with bit‑index 1

    cout << "BIT‑TRICK DEMO ON mask = ";
    showMask(mask,4);
    cout << " (binary)\n\n";

    // 1️⃣  CHECK bit k
    cout << "1) CHECK bit " << k << "  -> ";
    cout << ((mask & (1<<k)) ? "ON\n" : "OFF\n");

    // 2️⃣  ADD bit k  (turn it ON)
    int addMask = mask | (1<<k);
    cout << "2) ADD bit  " << k << "  -> ";
    showMask(addMask,4);   cout << '\n';

    // 3️⃣  REMOVE bit k (turn it OFF)
    int remMask = mask & ~(1<<k);
    cout << "3) REMOVE bit " << k << " -> ";
    showMask(remMask,4);   cout << '\n';

    // 4️⃣  TOGGLE bit k
    int togMask = mask ^ (1<<k);
    cout << "4) TOGGLE bit " << k << " -> ";
    showMask(togMask,4);   cout << '\n';

    // 5️⃣  COUNT how many 1‑bits
    cout << "5) POPCOUNT(mask)  = "
         << __builtin_popcount(mask) << '\n';

    // 6️⃣  ISOLATE right‑most 1‑bit
    int lowbit = mask & -mask;
    cout << "6) LOWEST‑SET‑BIT   = ";
    showMask(lowbit,4);    cout << '\n';

    // 7️⃣  TEST power‑of‑2
    cout << "7) Is " << mask << " a power of 2?  -> ";
    cout << (mask && !(mask & (mask-1)) ? "YES\n" : "NO\n");
    return 0;
}
