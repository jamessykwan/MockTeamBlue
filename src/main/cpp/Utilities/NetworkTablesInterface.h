/*
 * NetworkTablesInterface.h

 *  Created on: Oct 6, 2018
 *      Author: james
 */
#include "NetworkTables/NetworkTableInstance.h"

#ifndef SRC_UTILITIES_NETWORKTABLESINTERFACE_H_
#define SRC_UTILITIES_NETWORKTABLESINTERFACE_H_

class NetworkTablesInterface {
	public:
		static double getDoubleCV();
		static int getIntCV();
		static bool getBooleanCV();

};

#endif /* SRC_UTILITIES_NETWORKTABLESINTERFACE_H_ */
