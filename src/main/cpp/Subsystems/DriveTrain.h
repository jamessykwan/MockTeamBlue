/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once
#include "ctre/Phoenix.h"
#include <Commands/Subsystem.h>

class DriveTrain : public frc::Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	TalonSRX* right;
	TalonSRX* left;
	bool isReversed;

public:
	DriveTrain();
	void InitDefaultCommand() override;
	void tankDrive(double leftSpeed, double rightSpeed);


};

