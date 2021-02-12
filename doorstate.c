#include "doorstate.h"

#include <stdio.h>

static void DefaultPushPull(DoorStatePtr state) {
	// What to do if the Push Pull event is not supported.
	printf("Nothing happen\n");
}

static void DefaultTurnKey(DoorStatePtr state) {
	// What to do if the Turn Key event is not supported.
	printf("Nothing happen\n");
}

void DefaultImplementation(DoorStatePtr state) {
	state->push_pull = DefaultPushPull;
	state->turn_key = DefaultTurnKey;
}