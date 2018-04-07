#include <stdio.h>

int cost [20][20], parent[20] = {0}, a, b, u, v, n, ne = 1, min, mincost = 0;

void kruskals();
int find (int);
int do_union(int, int);

void main () {

    int i, j;

    printf ("Enter the number of nodes: ");
    scanf ("%d", &n);

    printf ("\nEnter the matrix: \n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            scanf ("%d", &cost[i][j]);

            if (cost[i][j] == 0)
                cost[i][j] = 999;
        }
    }

    kruskals();
}

void kruskals () {

    int i, j;

    while (ne < n) {

        min = 999;
        for (i = 1; i <= n ; i++) {
            for (j = 1; j <= n; j++) {
                
                if (min > cost[i][j]){
                    min = cost[i][j];
                    a = u = i;
                    b = v = j;
                }
            }
        }

        u = find (u);
        v = find (v);

        if (do_union(u, v)) {

            printf("%d edge (%d,%d) =%d\n",ne++,a,b,min);
			mincost +=min;
        }
        cost[a][b]=cost[b][a]=999;
    }
}

int find(int i) {

    while (parent[i])
        i = parent[i];
    
    return i;
}

int do_union (int i, int j) {

    if (i != j) {
        // No cycle found, perform union
        parent[j] = i;
        return 1;
    }

    // Cycle found.
    return 0;
}