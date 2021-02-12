#include "openstate.h"
// The possible transition states.
#include "closedstate.h"

#include <stdio.h>

static void CloseDoor(DoorStatePtr state) {
	TransitionToClosed(state);
}

void TransitionToOpen(DoorStatePtr state) {
	printf("The door is now open\n");
	// Define uma implementação generica para o novo estado.
	DefaultImplementation(state);
	// Define que no caso de ser um push/pull em vez da implementação generica vai efetuar a implementação acima.
	state->push_pull = CloseDoor;
}