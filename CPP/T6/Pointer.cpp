#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function
    int bb = *b;
    int sub = (*a - *b);
    if(sub < 0)
    {
        *b = sub*(-1);
    }
    else
    {
        *b = sub;
    }
    *a = (*a + bb);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
