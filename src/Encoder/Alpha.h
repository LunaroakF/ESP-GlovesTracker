#include <Arduino.h>

#include "defines.h"

class AlphaEncoder {
public:
	AlphaEncoder() {}
	char* encode(
		int* flexion,
		int joyX,
		int joyY,
		bool joyClick,
		bool triggerButton,
		bool aButton,
		bool bButton,
		bool grab,
		bool pinch,
		bool calib,
		bool menu
	);
	void decodeData(char* stringToDecode, int* hapticLimits);
	int getArgument(char* stringToDecode, char command);

private:
};