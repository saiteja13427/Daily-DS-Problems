#include<bits/stdc++.h>
using namespace std;

class DS{
    private:
        int *arr;
        unordered_map<int, int> H;
        int size, cap;
    public:
        DS(){
            arr = new int[20];
            size = 0;
            cap = 20;
        } 
        void insert(int val){
            if(size==cap){
                int *temp = new int[cap*2];
                for(int i=0; i<cap; i++){
                    temp[i] = arr[i];
                }
                arr=temp;
                cap*=2;
            }
            arr[size] = val;
            H[val] = size;
            size++; 
        }  

        bool del(int val){
            if(H.find(val) != H.end()){
                int loc = H[val];
                if(loc==size-1){
                    H.erase(val);
                    size--;
                    return true;
                }
                swap(arr[loc], arr[size-1]);
                H.erase(val);
                size--;
                return true;
            }
            return false;
        } 

        int rand(){
            if(size>0){
                int loc = rand()%size;
                return arr[loc];
            }
            return -1;
        }

        void print(){
            for(int i=0; i<size;i++){
                cout<<arr[i]<<endl;
            }
        }
};

int main(){
    DS ds;
    for (int i=0; i<20; i++){
        ds.insert(i);
    }
    ds.del(10);
    ds.insert(100);
    ds.print();
}