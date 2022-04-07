#include <iostream>
using namespace std;

class Node {
public:
	int data;
	Node* Out1; Node* Out2; Node* Out3; Node* Out4; Node* Out5; //Выходы узла
	Node(int input, Node* Out1 = nullptr, Node* Out2 = nullptr, Node* Out3 = nullptr, Node* Out4 = nullptr, Node* Out5 = nullptr) {
		this->data = input;
		this->Out1 = Out1;
		this->Out2 = Out2;
		this->Out3 = Out3;
		this->Out4 = Out4;
		this->Out5 = Out5;
	}
};

void main() {
	Node* A = new Node(413); //Объявление узлов
	Node* B = new Node(612);
	Node* C = new Node(1025);
	Node* D = new Node(404);
	Node* E = new Node(777);
	Node* F = new Node(1181);

	A->Out1 = B; //Выходы узла A
	A->Out2 = C;
	A->Out3 = D;
	A->Out4 = E;
	A->Out5 = F;

	B->Out1 = C;

	C->Out1 = A;
	C->Out2 = B;
	C->Out3 = D;
	C->Out4 = E;
	C->Out5 = F;

	D->Out1 = A;
	D->Out2 = C;
	D->Out3 = E;

	E->Out1 = A;
	E->Out2 = D;
	E->Out3 = F;

	F->Out1 = E;
	F->Out2 = C;
	F->Out3 = B;
}