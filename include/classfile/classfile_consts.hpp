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
enum AccessModifierFlag : uint16
{
    ACC_PUBLIC = 0x0001,    // decimal = 1     | binary = 000000000000001
    ACC_PRIVATE = 0x0002,   // decimal = 2     | binary = 000000000000010
    ACC_PROTECTED = 0x0004, // decimal = 4     | binary = 000000000000100
    ACC_STATIC = 0x0008,    // decimal = 8     | binary = 000000000001000
    ACC_FINAL = 0x0010,     // decimal = 16    | binary = 000000000010000
    ACC_SUPER = 0x0020,     // decimal = 32    | binary = 000000000100000
    ACC_VOLATILE = 0x0040,  // decimal = 64    | binary = 000000001000000
    ACC_TRANSIENT = 0x0080, // decimal = 128   | binary = 000000010000000
    ACC_NATIVE = 0x0100,    // decimal = 256   | binary = 000000100000000
    ACC_INTERFACE = 0x0200, // decimal = 512   | binary = 000001000000000
    ACC_ABSTRACT = 0x0400,  // decimal = 1024  | binary = 000010000000000
    ACC_SYNTHETIC = 0x1000, // decimal = 4096  | binary = 001000000000000
    ACC_ANNOTATION = 0x2000,// decimal = 8192  | binary = 010000000000000
    ACC_ENUM = 0x4000       // decimal = 16384 | binary = 100000000000000
};


// [BT_DESC]
// constants below are Base type descriptors
enum class  BaseTypeDescriptor : uint8
{
    byte = 'B',
    char = 'C',
    double = 'D',
    float = 'F',
    integer = 'I',
    long = 'J',
    reference = 'L',
    short = 'S',
    bool = 'Z',
    array = '['
}

// [CS_POOL]
// Those tags indicates the kind of cp_info entry.
enum class ConstantPoolTag : uint8
{
    Class = 7,
    FieldRef = 9,
    MethodRef = 10,
    InterfaceMethodRef = 11,
    String = 8,
    Integer = 3,
    Float = 4,
    Long = 5,
    Double = 6,
    NameAndType = 12,
    Utf8 = 1,
    MethodHandle = 15,
    MethodType = 16,
    InvokeDynamic = 18,
};
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