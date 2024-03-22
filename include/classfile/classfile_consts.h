/*
    Author:       Ibrahim Esseddyq [ibes-sed]
    Contributors: [none]

    Description:
    This header holds the majority of constants related to classfile.

    Specs:
    Check below
*/
#ifndef CLASSFILE_CONSTS_H
#define CLASSFILE_CONSTS_H
//[ACC_MOD]
// constants below are used as bitmask to represent access and property modifiers
// the values of those macros aren't random ;) i will explain later 
# define ACC_PUBLIC      0x0001 // decimal = 1     | binary = 000000000000001 
# define ACC_FINAL       0x0010 // decimal = 16    | binary = 000000000010000
# define ACC_SUPER       0x0020 // decimal = 32    | binary = 000000000100000
# define ACC_INTERFACE   0x0200 // decimal = 512   | binary = 000001000000000
# define ACC_ABSTRACT    0x0400 // decimal = 1024  | binary = 000010000000000
# define ACC_SYNTHETIC   0x1000 // decimal = 4096  | binary = 001000000000000
# define ACC_ANNOTATION  0x2000 // decimal = 8192  | binary = 010000000000000
# define ACC_ENUM        0x4000 // decimal = 16384 | binary = 100000000000000
# define ACC_PRIVATE     0x0002 // decimal = 2     | binary = 000000000000010
# define ACC_PROTECTED   0x0004 // decimal = 4     | binary = 000000000000100
# define ACC_STATIC      0x0008 // decimal = 8     | binary = 000000000001000
# define ACC_VOLATILE    0x0040 // decimal = 64    | binary = 000000001000000
# define ACC_TRANSIENT   0x0080 // decimal = 128   | binary = 000000010000000
# define ACC_NATIVE      0x0100 // decimal = 256   | binary = 000000100000000


// [BT_DESC]
// constants below are Base type descriptors
# define BYTE_DESC  'B'
# define CHAR_DESC  'C'
# define DBLE_DESC  'D'
# define FLOAT_DESC 'F'
# define INTGR_DESC 'I'
# define LONG_DESC  'J'
# define REFC_DESC  'L' // L ClassName ;
# define SHORT_DESC 'S'
# define BOOL_DESC  'Z'
# define ARR_DESC   '['


// [CS_POOL]
// Those tags indicates the kind of cp_info entry.
#define CONSTANT_CLASS 7
#define CONSTANT_FIELDREF 9
#define CONSTANT_METHODREF 10
#define CONSTANT_INTERFACEMETHODREF 11
#define CONSTANT_STRING 8
#define CONSTANT_INTEGER 3
#define CONSTANT_FLOAT 4
#define CONSTANT_LONG 5
#define CONSTANT_DOUBLE 6
#define CONSTANT_NAMEANDTYPE 12
#define CONSTANT_UTF8 1
#define CONSTANT_METHODHANDLE 15
#define CONSTANT_METHODTYPE 16
#define CONSTANT_INVOKEDYNAMIC 18

/*
    //Specs references//

    Specs:
    JSR 337:JVM Specs 8 SE
        [BT_DESC]   : chapter 4.3, page 77;
        [ACC_MOD]   : chapter 4.1, page 71-72
                      chapter 4.5, page 91
                      chapter 4.6, page 96;
        [CS_POOL]   : chapter 4.4, page 79;

        P.S:to understand what each attribute 
        is for look at section 1 chapter 4, page 70 
*/
#endif