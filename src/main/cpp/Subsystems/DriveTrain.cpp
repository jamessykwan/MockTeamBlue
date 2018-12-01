/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "DriveTrain.h"
#include "../RobotMap.h"
#include "../Commands/TankDrive.h"
#include "ctre/Phoenix.h"

DriveTrain::DriveTrain() :
	Subsystem("DriveTrain"),
	left(new TalonSRX(LEFT_MOTOR_PORT)),
	right(new TalonSRX(RIGHT_MOTOR_PORT)){
	right->SetInverted(true);

}

void DriveTrain::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	// SetDefaultCommand(new MySpecialCommand());
	SetDefaultCommand(new TankDrive());
}

void DriveTrain::tankDrive(double leftSpeed, double rightSpeed){
	left->Set(ControlMode::PercentOutput, leftSpeed);
	right->Set(ControlMode::PercentOutput, rightSpeed);

}

