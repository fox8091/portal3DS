#ifndef PHYSICS_H
#define PHYSICS_H

#include "physics/OBB.h"
#include "physics/AAR.h"

void initPhysics();
void exitPhysics();

void physicsCreateObb(OBB_s** out, vect3Df_s position, vect3Df_s size, float mass, float angle);

#endif
