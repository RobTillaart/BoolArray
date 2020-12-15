//
//    FILE: unit_test_001.cpp
//  AUTHOR: Rob Tillaart
//    DATE: 2020-12-03
// PURPOSE: unit tests for the BoolArray library
//          https://github.com/RobTillaart/BoolArray
//          https://github.com/Arduino-CI/arduino_ci/blob/master/REFERENCE.md
//

// supported assertions
// ----------------------------
// assertEqual(expected, actual)
// assertNotEqual(expected, actual)
// assertLess(expected, actual)
// assertMore(expected, actual)
// assertLessOrEqual(expected, actual)
// assertMoreOrEqual(expected, actual)
// assertTrue(actual)
// assertFalse(actual)
// assertNull(actual)

#include <ArduinoUnitTests.h>

#include "Arduino.h"
#include "BoolArray.h"


unittest_setup()
{
}

unittest_teardown()
{
}

unittest(test_constructor)
{
  BoolArray b;
  assertEqual(0, b.size());
  b.begin(1000);
  assertEqual(1000, b.size());
}

unittest_main()

// --------
