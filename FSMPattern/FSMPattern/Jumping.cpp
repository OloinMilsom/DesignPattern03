#include "Jumping.h"

Jumping::Jumping() {
}

Jumping::~Jumping() {
}

void Jumping::idle(Animation * a) {
	cout << "Going from Jumping to Idling" << endl;
	a->setCurrent(new Idle());
	delete this;
}
