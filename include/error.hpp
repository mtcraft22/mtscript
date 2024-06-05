#pragma once
#include <string>
class Error {
    private:
        long unsigned int code;
        bool fatal;
        std::string what;
    public:
        Error(long unsigned int code,
            bool fatal,
            std::string what
        );
        void Throw(int line);
};