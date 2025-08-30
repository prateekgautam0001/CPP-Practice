#include <iostream>
#include <vector>
using namespace std;

class Graph;

class Node {
private:
    int id;
    string label;

public:
    Node(int i, string l) : id(i), label(l) {}
    friend class Graph;
};

class Graph {
private:
    vector<Node> nodes;

public:
    void addNode(int id, string label) {
        nodes.push_back(Node(id, label));
    }

    void display() {
        for (auto &n : nodes)
            cout << "Node ID: " << n.id << ", Label: " << n.label << endl;
    }
};

int main() {
    Graph g;
    g.addNode(1, "Start");
    g.addNode(2, "End");
    g.display();
    return 0;
}
