#include "closedstate.h"
#include "openstate.h"
#include "lockedstate.h"

#include <stdio.h>

static void LockDoor(DoorStatePtr state) {
	TransitionToLocked(state);
}

static void OpenDoor(DoorStatePtr state) {
	TransitionToOpen(state);
}

void TransitionToClosed(DoorStatePtr state) {
	printf("The door is now closed\n");
	DefaultImplementation(state);
	state->push_pull = OpenDoor;
	state->turn_key = LockDoor;
}