#include "bits/stdc++.h"
using namespace std;

int main()
{
    int P, H, Obj;
    while(scanf("%d %d %d", &P, &H, &Obj) == 3)
        printf("%s\n", ( (P+H <= Obj) ? "Props win!" : "Hunters win!"));
    return 0;
}
