#include "DriveSubsystem.h"
#include "../RobotMap.h"
#include "Commands/DriveRobot.h"


DriveSubsystem::DriveSubsystem() :
		Subsystem("DriveSubsystem")
{
	myDrive = new RobotDrive(LEFT_FRONT_MOTOR, LEFT_REAR_MOTOR, RIGHT_FRONT_MOTOR, RIGHT_REAR_MOTOR);
}

void DriveSubsystem::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	SetDefaultCommand(new DriveRobot());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
void DriveSubsystem::Drive(double left, double right) {
	myDrive->ArcadeDrive(left, right);
}

void DriveSubsystem::Drive(Joystick* joy) {
	Drive(joy->GetY(), joy->GetX());
}
