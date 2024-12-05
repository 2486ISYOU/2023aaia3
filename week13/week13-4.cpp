///week13-3
///leetcode
///New playground
//intput放右下角的標準輸入區
int main() {
    vector<int>A,B;
    int a,b;
    while(cin>>a>>b){
        A.push_back(a);
        B.push_back(b);
    }
    for(int i=0;i<A.size();i++){
        cout<<A[i]<<" ";
    }
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    int ans=0;
    for(int i=0;i<A.size();i++){
        cout<<A[i]<<" ";
        ans+=abs(A[i]-B[i]);
    }
    cout<<"答案是: "<<ans;
}
