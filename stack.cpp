#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.pop();
    st.push(4);
    st.push(5);
    st.push(6);
    cout << "Size of stack : " << st.size() << endl;
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
}
