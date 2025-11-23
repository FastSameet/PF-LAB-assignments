int arr[46];   

int solve(int n) {
    if (n <= 2) return n;

    if (arr[n] != -1)   
        return arr[n];

    arr[n] = solve(n - 1) + solve(n - 2);
    return arr[n];
}

int climbStairs(int n){
    for (int i = 0; i < 46; i++)
        arr[i] = -1;

    return solve(n);
}
