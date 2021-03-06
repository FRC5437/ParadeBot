#ifndef ROBOTMAP_H
#define ROBOTMAP_H

#include "WPILib.h"
#include "Subsystems/DriveSubsystem.h"

/**
 * The RobotMap is a mapping from the ports sensors and actuators are wired into
 * to a variable name. This provides flexibility changing wiring, makes checking
 * the wiring easier and significantly reduces the number of magic numbers
 * floating around.
 */
 
// For example to map the left and right motors, you could define the
// following variables to use with your drivetrain subsystem.
const int LEFT_FRONT_MOTOR = 0;
const int RIGHT_FRONT_MOTOR = 1;
const int LEFT_REAR_MOTOR = 2;
const int RIGHT_REAR_MOTOR = 3;

// If you are using multiple modules, make sure to define both the port
// number and the module. For example you with a rangefinder:
const int RANGE_FINDER_PORT = 1;
const int RANGE_FINDER_MODULE = 1;

#endif
