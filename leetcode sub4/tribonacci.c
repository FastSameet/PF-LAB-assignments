int arr[38];   

int solve(int n){
    if (n == 0) return 0;
    if (n == 1 || n == 2) return 1;

    if (arr[n] != -1) return arr[n];

    arr[n] = solve(n-1) + solve(n-2) + solve(n-3);
    return arr[n];
}

int tribonacci(int n){
    for (int i = 0; i < 38; i++)
        arr[i] = -1;

    return solve(n);
}
