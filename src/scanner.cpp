#include <string>
#include <vector>
#include <tokens.hpp>

class scaner {
    private:
        std::vector<Token_t> token;
        std::string src;
        int start = 0;
        int current = 0;
        int line = 1;
    public:
        bool isFinal();
    
}
