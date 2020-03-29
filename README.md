
# BoolArray
Arduino library for compact array of booleans of max size 2000 (UNO).

## Description
The BoolArray class allows the user to instantiate an array of booleans, allocating only one bit per element.
For example one could create an array of 1000 throws with a coin. Normally this would take 1000 bytes,
but BoolArray can store one throw in 1 bits, so 1000 throws in approx 125 bytes.

The class is optimized for storage by packing 8 elements of the array in one byte.
You need to check if your application needs more performance than this library can deliver. 

The BoolArray library is one from a set of three:
* BitArray  for elements of user defined size in bits (values 0 .. 2^n-1)
* BoolArray for elements of 1 bit (values 0 .. 1)
* nybbleArray for elements of 4 bits (values 0 .. 15)

BoolArray is faster than BitArray as it only supports single bits and does not need to merge parts
of different bytes to read/write a value. HOwever BoolArray only supports 2000 bits currently while
BitArray can support more.

## Operations
In the function **begin(#elements)** the number of elements needs to be defined. 
The maximum number of elements is 65535 if memory allows.

The basic functions of the class are
* **set(index, value)**
* **get(index)**
* **toggle(index)**
* **clear()**

The **BOOLARRAY_MAXSIZE** is set to 2000, this was chosen as **malloc()** can only allocate 255 bytes 
in one call. Note this is not checked with the recent versions of the IDE anymore.

Check out the examples.

## Notes
The BoolArray class dynamicly allocates memory, so called BA_SEGMENTS, 
each of 200 bytes.
As the memory size of different processors differ the maximum amount of SEGMENTS 
depends on architecture.

The library is tested on AVR architecture only.


