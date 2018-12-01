#include "AutoArmMove.h"
#include "../Robot.h"


AutoArmMove::AutoArmMove(double target) :
anglePID(new WVPIDController(0.01, 0, 0, target, false)) {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(Robot::arm);
}

// Called just before this Command runs the first time
void AutoArmMove::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void AutoArmMove::Execute()
{
	double measuredVal = Robot::arm->getPosition();
	double adjPower = anglePID->Tick(measuredVal);
	Robot::arm->move(-adjPower);
}

// Make this return true when this Command no longer needs to run execute()
bool AutoArmMove::IsFinished() {

	if(abs(anglePID->GetError()) < 2 ||
			Robot::arm->getArmMotor()->GetSensorCollection().IsRevLimitSwitchClosed())
		return true;
	else
		return false;
}

// Called once after isFinished returns true
void AutoArmMove::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutoArmMove::Interrupted() {

}
