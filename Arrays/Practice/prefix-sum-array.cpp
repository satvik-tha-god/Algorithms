void prefixSumFn(int arr[], int N, int prefixSum[]){
  prefixSum[0]=arr[0];
  for(int i=1;i<N;i++){
    prefixSum[i]=arr[i]+arr[i-1];
  }
}
