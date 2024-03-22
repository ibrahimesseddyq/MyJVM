/*
    Author:       Ibrahim Esseddyq [ibes-sed]
    Contributors: [none]

    Description:
    This header is responsible for the definition of the structure and the format
    of the classfile.

    Specs:
    Check below
*/
#ifndef CLASSFILE_H
#define CLASSFILE_H
class cp_info 
{
    public:
        uint8 tag;
        uint8 info[];
}
class attribute_info // *1
{
    uint16  attribute_name_index;
    uint32  attribute_length;/
    uint8   info[attribute_length];
}
class method_info
{
    uint16          access_flags;
    uint16          name_index;
    uint16          descriptor_index;
    uint16          attribute_count;
    attribute_info  attributes[attribute_count]; // *1
}
class field_info
{
    uint16          access_flags;
    uint16          name_index;
    uint16          descriptor_index;
    uint16          attribute_count;
    attribute_info  attributes[attribute_count]; // *1
}
class classfile
{
    public:
        uint32          magic;
        uint16          major_version;
        uint16          minor_version;
        uint16          constant_pool_count;
        cp_info         constant_pool[constant_pool_count - 1];
        uint16          access_flags;
        uint16          this_class;
        uint16          super_class;
        uint16          interfaces_count;
        uint16          interfaces[interfaces_count];
        uint16          fields_count;
        field_info      fields[fields_count];
        uint16          methods_count;
        method_info     methods[methods_count];
        uint16          attribute_count;
        attribute_info  attributes[attribute_count]; //*1
}
/*
    //Specs references//

    Specs:
        JSR 337:JVM Specs 8 SE
            [classfile] :       chapter 4, page 69;
            [cp_info]   :       chapter 4.4, page 78;
            [attribute_info]:   chapter 4.7, page 94;

            P.S:to understand what each attribute 
            is for look at section 1 chapter 4, page 70 
    Comments:
        *1 : 
            So there's 23 attributes in total 17 of them are critical,
            for seek of simplicity i will not implemet all of them just the 
            necessary ones, for our case the JVM necessite 5 attributes:
                - ConstantsValue
                - Code
                - StackMapTable
                - Exceptions
                - BootstrapMethods
            there are some other critical ones, but they are used by class Librairies of 
            the JAVA SE platform:
                - InnerClasses
                - EnclosingMethod
                - Synthetic
                - Signature
                - RuntimeVisibleAnnotation
                - ...
            P.S:
                For non-recognized attributes the JVM MUST IGNORE THEM SILENTLY
            For more take a look at chapter 4.7, page 95.   
*/
#endif