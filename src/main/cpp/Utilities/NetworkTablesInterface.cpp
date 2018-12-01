/*
 * NetWorkTablesInterface.cpp
 *
 *  Created on: Oct 6, 2018
 *      Author: james
 */

#include "NetworkTablesInterface.h"

/*int NetworkTablesInterface::getIntCV(){
	return nt::NetworkTablesInstance::getDefault().GetEntry("Entry Key").GetInt(-1);
	//return -1;
}
*/
bool NetworkTablesInterface::getBooleanCV(){
	return nt::NetworkTableInstance::GetDefault().GetEntry("cv").GetBoolean(false);
	//return false;
}
double NetworkTablesInterface::getDoubleCV(){
	return nt::NetworkTableInstance::GetDefault().GetEntry("Entry Key").GetDouble(-1);
	//return -1;
}


