#include <stdbool.h>
#include "coeur.h"
#include "param.h"


int lastBPM;
long lastTime;
bool up;
float total_bpm;
int amount_bpm;
int bpm;

void init_vars();
void heartbeat_detection(float tension);
float calculate_bpm();
void light();
