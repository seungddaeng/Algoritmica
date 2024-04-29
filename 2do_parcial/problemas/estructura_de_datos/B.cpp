#include <iostream>
#include <cstdio>

using namespace std;

typedef struct node {
    int front;
    int next;
};

int main() 
{
    int S, B;
    while (cin >> S >> B && (S + B) != 0) {
        node a[S + 2];
        for (int i = 1; i <= S; i++) {
            a[i].front = i - 1;
            a[i].next = i + 1;
        }

        while (B--) {
            int x, y;
            scanf("%d%d", &x, &y);
            a[a[x].front].next = a[y].next;
            a[a[y].next].front = a[x].front;
            if (a[x].front == 0)
                printf("*");
            else
                printf("%d", a[x].front);
            printf(" ");
            if (a[y].next == S + 1)
                printf("*");
            else
                printf("%d", a[y].next);
            printf("\n");
        }
        cout << "-" << endl;
    }
    return 0;
}
