/*
 * This template is valid both in C and in C++,
 * so you can expand it with code from both languages.
 * NOTE: it is recommended to use this even if you don't
 * understand the following code.
 */

#include <bits/stdc++.h>
using namespace std;

// constraints
#define MAXN 100000

// input data
int N, M, i;
int P[MAXN], C[MAXN];

int main() {
//  uncomment the following lines if you want to read/write from files
//  freopen("input.txt", "r", stdin);
//  freopen("output.txt", "w", stdout);

    assert(2 == scanf("%d %d", &N, &M));
    for(i=0; i<N; i++)
        assert(1 == scanf("%d", &P[i]));
    for(i=0; i<N; i++)
        assert(1 == scanf("%d", &C[i]));

    // insert your code here

    int gifts = 0;
    for (i = 0; i < N; i++) {
        if (M < P[i]) {
            M += C[i];
        }
        else {
            gifts += 1;
            M -= P[i];
        }
    }
    cout << gifts << M;


    printf("%d %d\n", 4, 2); // print the result
    return 0;
}
