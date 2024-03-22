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
    class attribute_info // 
    {
        uint16  attribute_name_index;
        uint32  attribute_length;
        // uint8   info[attribute_length]; // TODO: make it usable later, a prototype for now
    };

    class code_attribute : public attribute_info
    {
        uint16  max_stack
        uint16  max_locals;
        uint64  code_length;
        // uint8   code[code_length]; // TODO: make it usable later, a prototype for now
        uint16  exception_table_length;
    };
    class constantvalue_attribute : public attribute_info
    {
        uint16  constantvalue_index;
    };
    class stackmaptable_attribute : public attribute_info
    {
        uint16              number_of_entries;
        // stack_map_frame     entries[number_of_entries];
    };
    class exception_attribute : public attribute_info
    {
        uint16              number_of_exceptions;
        // uint16     exception_index_table[number_of_exceptions];
    };
#endif