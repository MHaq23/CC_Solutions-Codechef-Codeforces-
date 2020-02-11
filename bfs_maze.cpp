#include <bits/stdc++.h>
using namespace std;

#define m 4
#define n 3

// Function to return the number of valid
// paths in the given maze
int Maze(int matrix[n][m])
{
    queue<pair<int, int> > q;

    // Insert the starting point i.e.
    // (0, 0) in the queue
    q.push(make_pair(0, 0));

    // To store the count of possible paths
    int count = 0;

    while (!q.empty()) {
        pair<int, int> p = q.front();
        q.pop();

        // Increment the count of paths since
        // it is the destination
        if (p.first == n - 1 && p.second == m - 1)
            count++;

        // If moving to the next row is a valid move
        if (p.first + 1 < n
            && matrix[p.first + 1][p.second] == 1) {
            q.push(make_pair(p.first + 1, p.second));
        }

        // If moving to the next column is a valid move
        if (p.second + 1 < m
            && matrix[p.first][p.second + 1] == 1) {
            q.push(make_pair(p.first, p.second + 1));
        }
    }

    return count;
}

// Driver code
int main()
{
    // Matrix to represent maze
    int matrix[n][m] = { { 1, 1, 1, 1 },
                         { 1, 1, 1, 1 },
                         { 1, 1, 1, 1 } };

    cout << Maze(matrix);

    return 0;
}
