int fibonacciseries(int n){
    if(n==1 || n==2){
        return n-1;
    }
    return fibonacciseries(n+1) + fibonacciseries(n+2);
}