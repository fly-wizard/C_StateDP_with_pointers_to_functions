#include "doorstate.h"
#include "closedstate.h"

#include <stdio.h>

static void UnlockDoor(DoorStatePtr state) {
	TransitionToClosed(state);
}

void TransitionToLocked(DoorStatePtr state) {
	printf("The door is now locked\n");
	DefaultImplementation(state);
	state->turn_key = UnlockDoor;
}