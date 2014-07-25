
# Coding style

## Naming conventions

C++ code in `PhoGro` should use upper-case `CamelCase` names for classes and
structs and lower-case `camelCase` for variables and functions.
Code should use upper-case `SNAKE_CASE` for constants and macros.

## Filenames

C++ code files should have an upper-case `CamelCase` filename with `*.hpp` or
`*.cpp` extension.

## Indent style

Code in `PhoGro` should use [One True Brace Style (1TBS)][1TBS_link].

[1TBS_link]:
http://en.wikipedia.org/wiki/Indent_style#Variant:_1TBS

## Miscellaneous

Code in `PhoGro` should furthermore conform to the following rules:

* Lines should not be longer than 80 characters.
* Pointer variables have the asterisk `*` symbol attached to their name.
* Keywords like `if`, `for`, `while`, `switch` are followed by a space.
* Binary operators excluding `>>` and `<<` should be framed by spaces.
* Unary operators and increment or decrement operators are not framed by spaces.
* Inner elements in round brackets are not framed by spaces.
* Nested preprocessor commands (starting with hash `#` sign) use current code
  indentation and are indented by 2 spaces per level.
* Code inside preprocessor commands is indented by 4 spaces.
* `#endif` lines should include matching `#if` condition as a comment.
* Curly brackets closing a namespace should include namespace as a comment.
* Namespace do not affect indentation at all.
* `switch` statements: `case` is not indented, the code and `break` are indented by
  4 spaces.
* Keywords like `public`, `protected`, `private` are not indented.
* All code should use `/* C-style */` comments.
* Multi-line comments begin and end with an empty line and are prefixed by `*`.
* Header files should be guarded by `HEADER_HPP_INCLUDED` preprocessor commands,
  which do not affect indentation at all.

## Example

`NumberOperator.hpp`:

```C++

    #if !defined NUMBEROPERATOR_HPP_INCLUDED
    #define NUMBEROPERATOR_HPP_INCLUDED

    #include <iostream>

    namespace NumberWorks {

    class NumberOperator {
    private:
        int anyNumber;

    public:
        NumberOperator(int anyNumber) : anyNumber(anyNumber)
        {
            /* do nothing */
        }

        /**
         * Print the number and return.
         */
        void printInformation()
        {
            int parity = anyNumber % 2;
            switch (parity) {
            case 0:
                std::cout<<"Even number: ";
                break;

            case 1:
                std::cout<<"Odd number: ";
                break;
            }
            std::cout<<anyNumber<<std::endl;
        }

    };

    } /* namespace NumberWorks */

    #endif /* !defined NUMBEROPERATOR_HPP_INCLUDED */

```
