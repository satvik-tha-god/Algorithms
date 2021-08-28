class ProductOfNumbers {
private:
    vector<int> pdtStream;
    int lastZeroIdx;
public:
    vector<int> stream;
    ProductOfNumbers() {
        lastZeroIdx = -1;
    }

    void add(int num) {
       int size = pdtStream.size();
        if(num == 0){
            lastZeroIdx = size;
            pdtStream.push_back(1);
        }
        else if(num == 1){
            if(size==0){
                pdtStream.push_back(1);
            }
            else{
                pdtStream.push_back(pdtStream[size-1]);
            }
        }
        else{
            if(size == 0){
                pdtStream.push_back(num);
            }
            else{
                pdtStream.push_back(num * pdtStream[size-1]);
            }
        }
    }

    int getProduct(int k) {
        int size = pdtStream.size();
        if(lastZeroIdx >= size-k){
            return 0;
        }
        else{
            if(size == k)
                return pdtStream[size-1];

            return pdtStream[size-1]/pdtStream[size-k-1];
        }
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */
