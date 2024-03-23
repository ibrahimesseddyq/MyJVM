/*
    Author:       Ibrahim Esseddyq [ibes-sed]
    Contributors: [none]

    Description:
    Definitions of The 5 implemented attributes 

    Specs:
    Check below
*/
#ifndef ATTRIBUTES_H
#define ATTRIBUTES_H
    // this will be interpreted as an interface or abstract class
    class AttributeInfo // 
    {
        uint16  attributeNameIndex;
        uint32  attributeLength;
        // uint8   info[attribute_length]; // TODO: make it usable later, a prototype for now
    };

    class codeAttribute : public AttributeInfo
    {
        uint16  maxStack
        uint16  maxLocals;
        uint64  codeLength;
        // uint8   code[code_length]; // TODO: make it usable later, a prototype for now
        uint16  exceptionTableLength;
    };
    class constantValueAttribute : public AttributeInfo
    {
        uint16  constantvalueIndex;
    };
    class stackMapTableAttribute : public AttributeInfo
    {
        uint16              numberOfEntries;
        // stack_map_frame     entries[number_of_entries];
    };
    class exception_attribute : public AttributeInfo
    {
        uint16              numberOfExceptions;
        // uint16     exception_index_table[number_of_exceptions];
    };
#endif