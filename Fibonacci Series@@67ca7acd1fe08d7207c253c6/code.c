int fibonacciSeries(int n){
    if(n==1 || n==2){
        return n-1;
    }
    return fibonacciSeries(n-1) + fibonacciSeries(n-2);
}