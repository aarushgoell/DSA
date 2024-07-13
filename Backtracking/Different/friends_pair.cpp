 void returnCount(int index, int& count, vector<bool>& visited, int n) {
  
  
    if (index > n) {
        count++;
        return;
    }

    if (visited[index]) {
        returnCount(index + 1, count, visited, n);
    }
    else{
        
        visited[index] = true;
        returnCount(index + 1, count, visited, n);
        for (int j = index + 1; j <= n; j++) {
            if (!visited[j]) {
                visited[j] = true;
                returnCount(index + 1, count, visited, n);
                visited[j] = false;
            }
        }
        visited[index] = false;
        
    }

}

int countFriendsPairings(int n) {
    vector<bool> visited(n + 1, false); // Create a visited array
    int count = 0; // Initialize the count to 0
    returnCount(1, count, visited, n); // Start the recursive function
    return count; // Return the final count
}