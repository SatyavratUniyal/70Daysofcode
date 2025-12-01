#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    int visited[n];  // to track visited elements

    // initialize visited array to 0
    for (int i = 0; i < n; i++)
        visited[i] = 0;

    // read array and detect duplicate in one loop
    int repeated = -1;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (visited[arr[i]] == 1) {
            repeated = arr[i];
        } else {
            visited[arr[i]] = 1;
        }
    }

    printf("%d", repeated);

    return 0;
}
