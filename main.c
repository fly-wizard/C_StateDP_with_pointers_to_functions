#include "closedstate.h"
#include "openstate.h"
#include "lockedstate.h"

#include <stdlib.h>

typedef struct Door* DoorPtr;

struct Door {
	struct DoorState state;
	// Any other attribute needed.
};

DoorPtr CreateDoor(void) {
	DoorPtr instance = malloc(sizeof(*instance));

	if(instance != NULL) {
		TransitionToClosed(&instance->state);
		// Initialize all other attributes.
	}

	return instance;
}

void DestroyDoor(DoorPtr instance) {
	free(instance);
}

void PushPullDoor(DoorPtr instance) {
	instance->state.push_pull(&instance->state);
}

void TurnKeyDoor(DoorPtr instance) {
	instance->state.turn_key(&instance->state);
}

int main() {
	DoorPtr door = CreateDoor();

	TurnKeyDoor(door);
	PushPullDoor(door);
	TurnKeyDoor(door);
	PushPullDoor(door);
	TurnKeyDoor(door);
	PushPullDoor(door);

	return 0;
}