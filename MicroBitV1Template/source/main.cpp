#include "MicroBit.h" 
MicroBit uBit; int main() {
 uBit.init();
 uBit.display.scroll("Hello World");
 release_fiber();
}