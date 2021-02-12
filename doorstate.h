#ifndef DOORSTATE_H_
#define DOORSTATE_H_

// An incomplete type for the state representation itself.
typedef struct DoorState* DoorStatePtr;

typedef void (*EventPushPullFunction)(DoorStatePtr);
typedef void (*EventTurnKeyFunction)(DoorStatePtr);

struct DoorState {
	EventPushPullFunction push_pull;
	EventTurnKeyFunction turn_key;
};

void DefaultImplementation(DoorStatePtr state);

#endif