/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Commands/TankDrive.h"
#include "OI.h"

#include <WPILib.h>

OI::OI() : left(new Joystick(1)), right(new Joystick(0)) {


	// Process operator interface input here.
}

frc::Joystick* OI::getLeftStick(){

	return left;
}
frc::Joystick* OI::getRightStick(){

	return left;
}
