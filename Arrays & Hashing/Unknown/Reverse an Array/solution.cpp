class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        int front=0, back=arr.size()-1;
        while(front<back){
            int temp= arr[front];
            arr[front]=arr[back];
            arr[back]=temp;
            front++;
            back--;
        }
        
    }
};