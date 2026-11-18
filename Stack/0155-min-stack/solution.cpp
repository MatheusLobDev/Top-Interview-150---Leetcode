class MinStack {
private:
    stack<pair<int, int>> pilha;

public:
    MinStack() {}

    void push(int value) {
        if (pilha.empty() || value < pilha.top().second) {
            pilha.push({value, value});
        } else {
            pilha.push({value, pilha.top().second});
        }
    }

    void pop() {
        pilha.pop();
    }

    int top() {
        return pilha.top().first;
    }

    int getMin() {
        return pilha.top().second;
    }
};
