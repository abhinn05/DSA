class Solution{
    public:
    
    void insertAtBottom(stack<int> &st, int item) 
    {
        if (st.empty()) 
        {
            st.push(item);
            return;
        }
    
        int topElement = st.top();
        st.pop();
        insertAtBottom(st, item);
        st.push(topElement);
    }
    
        void Reverse(stack<int> &St){
            stack<int> s;
            
            if (St.empty()) return;
    
            int topElement = St.top();
            St.pop();
            Reverse(St);
            insertAtBottom(St, topElement);
        }
    };