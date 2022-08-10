#include <iostream>
#include <algorithm>
#define MAX_VALUE 9
#define isVisited 1
#define notVisited 0

using namespace std;

int n, m;
int input[MAX_VALUE];
int output[MAX_VALUE];
int visited[MAX_VALUE];

void init() {
    scanf("%d %d", &n, &m);
    for(int i = 0; i < n; i++) {
        scanf("%d", &input[i]);
    }
}

void solve(int count, int start) {
    sort(input, input+n);
    if(count == m) {
        for(int i = 0; i < m; i++) {
            printf("%d ", output[i]);
        }
        printf("\n");
    }
    else {
        for(int i = 0; i < n; i++) {
            output[count] = input[i];
            solve(count+1, i);
        }
            
    }
}

int main() {
    init();
    solve(0, 0);
}