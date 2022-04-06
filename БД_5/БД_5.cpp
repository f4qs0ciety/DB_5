#include <iostream>
using namespace std;

class Network {
private:
	class Node {
		int data;
		Node* In1; Node* In2; Node* In3; //Входы узла
		Node* Out1; Node* Out2; Node* Out3; Node* Out4; Node* Out5; //Выходы узла
		Node(int input, Node* In1 = nullptr, Node* In2 = nullptr, Node* In3 = nullptr, Node* Out1 = nullptr, Node* Out2 = nullptr, Node* Out3 = nullptr, Node* Out4 = nullptr, Node* Out5 = nullptr) {
			this->data = input;
			this->In1 = In1;
			this->In2 = In2;
			this->In3 = In3;
			this->Out1 = Out1;
			this->Out2 = Out2;
			this->Out3 = Out3;
			this->Out4 = Out4;
			this->Out5 = Out5;
		}
		Node* core = new Node(NULL);
	};
};

void main() {

}