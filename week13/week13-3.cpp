//week13-3.cpp 使用 LeetCode 的 Playgound 遊樂場 寫程式
// 右下角,有stdin可輸入資料 輸入
int main() {
    int a,b;
    vector<int> A,B;
    while( cin >> a >> b){
        A.push_back(a);
        B.push_back(b);
    }
    sort( A.begin(), A.end() );
    sort( B.begin(), B.end() );
    int ans = 0;
    for(int i=0; i< A.size(); i++) {
        cout << A[i] << " "; 
        ans += abs(A[i] - B[i]);//印出來,真的是小到大排好
    }
    cout << "加起來的答案是" << ans;
}