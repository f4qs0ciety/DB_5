#include <iostream>
using namespace std;

class Node {
public:
	char data;
	Node* In1; Node* In2; Node* In3; //Входы узла
	Node* Out1; Node* Out2; Node* Out3; Node* Out4; Node* Out5; //Выходы узла
	Node(char input, Node* In1 = nullptr, Node* In2 = nullptr, Node* In3 = nullptr, Node* Out1 = nullptr, Node* Out2 = nullptr, Node* Out3 = nullptr, Node* Out4 = nullptr, Node* Out5 = nullptr) {
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
};

void main() {
	Node* A = new Node('A'); //Объявление узлов
	Node* B = new Node('B');
	Node* C = new Node('C');
	Node* D = new Node('D');
	Node* E = new Node('E');
	Node* F = new Node('F');

	A->In1 = C; //Входы узла А
	A->In2 = D;
	A->In3 = E;
	A->Out1 = B; //Выходы узла A
	A->Out2 = C;
	A->Out3 = D;
	A->Out4 = E;
	A->Out5 = F;

	B->In1 = A;
	B->In2 = C;
	B->In3 = F;
	B->Out1 = C;


	C->In1 = A;
	C->In2 = D;
	C->In3 = F;
	C->Out1 = A;
	C->Out2 = B;
	C->Out3 = D;
	C->Out4 = E;
	C->Out5 = F;

	D->In1 = A;
	D->In2 = C;
	D->In3 = E;
	D->Out1 = A;
	D->Out2 = C;
	D->Out3 = E;

	E->In1 = A;
	E->In2 = D;
	E->In3 = F;
	E->Out1 = A;
	E->Out2 = D;
	E->Out3 = F;

	F->In1 = A;
	F->In2 = E;
	F->In3 = C;
	F->Out1 = E;
	F->Out2 = C;
	F->Out3 = B;
}