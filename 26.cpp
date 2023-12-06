/*Thống kê đơn giản. Cho N số nguyên, hãy viết một chương trình BasicStatistics tính giá trị trung bình (double), 
giá trị lớn nhất và giá trị nhỏ nhất. Chương trình cần nhập N là số các số nguyên, sau đó lần lượt nhập từng số 
nguyên trong N số đó. Ví dụ 

Input: đầu tiên là số N (3), tiếp theo là N số (2,1,3):
3
2
1
2
Với input trên, output cần có là:
Mean: 2
Max: 3
Min: 1*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    double mean = 0.0;
    vector<int> nums;
    for(int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        mean += num;
        nums.push_back(num);
    }

    sort(nums.begin(), nums.end());

    cout << "Mean:" << mean/n << endl;
    cout << "Max:" << nums[n-1] << endl;
    cout << "Min:" << nums[0] << endl;
}