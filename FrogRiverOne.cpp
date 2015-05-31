int solution(int X, vector<int> &A) {

    int N = A.size();

    if( N < X ) return -1;

    vector<int> counts(X,-1);

    for( int i = 0; i < N; i++ ){
        if( counts[ A[i] -1 ] == -1 )
            counts[ A[i] -1 ] = i;
    }

    int min_cross_time = 0;

    for( int i = 0; i < X; i++ ){
        if( counts[i] == -1 ) return -1;
        if( counts[i] > min_cross_time ) min_cross_time = counts[i];
    }

    return min_cross_time;

}
