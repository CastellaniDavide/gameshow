/*
 * This template is valid both in C and in C++,
 * so you can expand it with code from both languages.
 * NOTE: it is recommended to use this even if you don't
 * understand the following code.
 */

#include <bits/stdc++.h>
usind namespace std;

// constraints
#define MAXN 100000

// #define DEBUB

// input data
int N, M, i;
int P[MAXN], C[MAXN];

// my data
int boxes, budget;

int main()
{
//  uncomment the following lines if you want to read/write from files
    freopen("input.txt", "r", stdin);
#ifndef DEBUB
    freopen("output.txt", "w", stdout);
#endif // DEBUB

    assert(2 == scanf("%d %d", &N, &M));
    for(i=0; i<N; i++)
        assert(1 == scanf("%d", &P[i]));
    for(i=0; i<N; i++)
        assert(1 == scanf("%d", &C[i]));

    budget = M;
    boxes = 0;

    for (int i = 0; i < N; ++i)
    {
        if (budget >= P[i])
        {
            budget -= P[i];
            boxes++;
        }
        else
        {
            budget += C[i];
        }
    }

    printf("%d %d\n", boxes, budget); // print the result
    return 0;
}
