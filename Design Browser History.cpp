//Design Browser History
class BrowserHistory {
public:
    BrowserHistory(string homepage) {
        m_back.push(homepage);
    }
    
    void visit(string url) {
        while(!m_forward.empty())
            m_forward.pop();
        m_back.push(url);
    }
    
    string back(int steps) {
        while (m_back.size() >= 2 && steps-- > 0) {
            m_forward.push(m_back.top());
            m_back.pop();
            
        }
        return m_back.top();
    }
    
    string forward(int steps) {
        while (!m_forward.empty() && steps-- > 0) {
            m_back.push(m_forward.top());
            m_forward.pop();
        }
        return m_back.top();
    }
private:
    stack<string> m_back;
    stack<string> m_forward;
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */
