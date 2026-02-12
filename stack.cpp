#include <iostream>
#include <list>
using namespace std;
int main(){
    list<int> st;
    // st.push_front(1);
    // st.push_front(2);
    // st.push_front(3);

    st.push_back(1);
    st.push_back(2);
    st.push_back(3);

    cout<<"Top element: "<<st.front()<<endl;
    
    st.pop_front();
    cout<<"Top element after pop: "<<st.front()<<endl;


    int n = st.size();
    for(int i=0;i<n;i++){
        cout<<st.front()<<" ";
        st.pop_front();
    }



    return 0;
}