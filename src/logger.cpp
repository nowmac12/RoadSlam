#include <iostream>
#include <string>
#include <stdio.h>

#ifdef _WIN32
    #include <windows.h>
#else
    #include <sstream>
#endif
    class Logger
    {
    private:
        enum 
        {
            LOGGER_COLOR_DEFAULT = 0x0008,
            LOGGER_COLOR_BLACK = 0x0000,
            LOGGER_COLOR_BLUE = 0x0001,
            LOGGER_COLOR_GREEN = 0x0002,
            LOGGER_COLOR_CYAN = 0x0003,
            LOGGER_COLOR_RED = 0x0004
        }
        bool useBackGroundColor;
    public:
        Logger
        (useBackGroundColor(false),
        )
        {}
        void consoleOutPut(const std::string &msg, unsigned short &color)
        {
#ifdef _WIN32
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LOGGER_COLOR_DEFAULT);
            std::
#else                
#endif
        }
        void INFO(const std::string &msg)
        {
            consoleOutput(msg, LOGGER_COLOR_DEFAULT);
        }
        void setUsingBackgroundColor()
        {
            useBackGroundColor = true;
        }
        ~Logger()
        {
#ifdef _WIN32
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LOGGER_COLOR_DEFAULT);
        }
    };

