#include "DriveRobot.h"
#include "RobotMap.h"

DriveRobot::DriveRobot() : CommandBase("DriveRobot")
{
	Requires(drivesubsystem);
}

// Called just before this Command runs the first time
void DriveRobot::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void DriveRobot::Execute()
{
	drivesubsystem->Drive(oi->GetJoystick());
}

// Make this return true when this Command no longer needs to run execute()
bool DriveRobot::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void DriveRobot::End()
{
	drivesubsystem->Drive(0.0,0.0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DriveRobot::Interrupted()
{

}
