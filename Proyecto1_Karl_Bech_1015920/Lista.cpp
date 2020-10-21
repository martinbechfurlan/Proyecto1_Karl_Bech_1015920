#include "Lista.h"

Lista::Lista() {
	start = nullptr;
	end = nullptr;
	z == 0;
};


//Insert Operations
void Lista::Borrar() {
	z = 0;
	start = nullptr;
	end = nullptr;
}

void Lista::InsertAtStart(int value) {
	Node* new_node = new Node();
	new_node->value = value;

	if (isEmpty()) { //The list is empty
		start = new_node;
		end = new_node;
	}
	else { //The list is not empty
		new_node->next = start;
		start = new_node;
	}
	z++;
}

int Lista::Total() {
	return z;
}

void Lista::InsertAtEnd(int value) {
	Node* new_node = new Node();
	new_node->value = value;

	if (isEmpty()) { //The list is empty
		start = new_node;
		end = new_node;
	}
	else { //The list is not empty
		end->next = new_node;
		end = new_node;
	}
	z++;
}

void Lista::InsertAtPosition(int value, int position) {
	Node* new_node = new Node();
	new_node->value = value;

	if (isEmpty() || (position == 0)) { //The list is empty
		InsertAtStart(value);
	}
	else { //The list is not empty
		if (position >= z) {
			InsertAtEnd(value);
		}
		else { //Position in the middle
			Node* pretemp = start;
			Node* temp = start->next;
			int index = 1;
			while ((temp) && (index < position)) {
				pretemp = temp;
				temp = temp->next;
				index++;
			}
			new_node->next = temp;
			pretemp->next = new_node;
		}
	}
	z++;
}

//Extract operation
Node* Lista::ExtractAtStart() {
	Node* temp = start;
	if (!isEmpty()) {
		start = start->next;
		if (z == 1) {
			end = start;
		}
		z--;
	}
	return temp;
}

int Lista::GetValueAtEnd() {
	Node* temp = end;


	return temp->value;
}

int Lista::GetValueAtStart() {
	Node* temp = start;


	return temp->value;
}

Node* Lista::ExtractAtEnd() {
	Node* temp = end;
	if (!isEmpty()) {
		if (z == 1) {
			end = end->next;
			start = end;
		}
		else {
			Node* pretemp = start;
			temp = pretemp->next;
			while (temp != end) {
				pretemp = temp;
				temp = pretemp->next;
			}
			pretemp->next = temp->next;
			end = pretemp;
		}
		z--;
	}
	return temp;
}

Node* Lista::ExtractAtPosition(int position) {
	Node* temp = start;
	if (!isEmpty()) {
		if ((z == 1) || (position == 0)) {
			return ExtractAtStart();
		}
		else {
			if (position >= z) {
				return ExtractAtEnd();
			}
			else {
				Node* pretemp = start;
				temp = pretemp->next;
				int index = 1;
				while ((temp) && (index < position)) {
					pretemp = temp;
					temp = pretemp->next;
					index++;
				}
				pretemp->next = temp->next;
				z--;
			}
		}
	}
	return temp;
}

//Search operations
Node* Lista::GetNode(int value) {
	Node* temp = start;
	while ((temp) && (temp->value != value)) {
		temp = temp->next;
	}
	return temp;
}

int Lista::GetValue(int position) {
	if ((position >= 0) && (position < z)) {
		Node* temp = start;
		int index = 0;
		while ((temp) && (index < position)) {
			temp = temp->next;
			index++;
		}
		return temp->value;
	}
	return -1;
}

bool Lista::isEmpty() {
	return z == 0;
}