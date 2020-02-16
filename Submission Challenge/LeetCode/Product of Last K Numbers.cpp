class ProductOfNumbers {
    vector<int> a;
    int sum =1;
public:
    ProductOfNumbers() {

    }
    
    void add(int num) {
        a.push_back(num);
    }
    
    int getProduct(int k) {
        int sum = 1;
        int count = 0;
        while (k>0) {
            sum *= a.at(a.size()  - 1 - count); 
            k--;
            count++;
        }
        return sum;
    }
};
