
//the class stand as a alternative to the bad practice 
//"bool methodname(const type& input_argument, type& output_argument)" (as said by the cppcoreguideline F.20)
//currently used in yarp very often for other reasons than the ones described in the  "Exception" paragraph.
//at the moment is a stub so any improvement is appreciated
// TODO: adding an emplace method to construct T directly in place

#include <string>
#include <memory>
namespace robotology
{
template <typename T>
class Result
{
public:
    bool        valid{ false };
    int         error;
    std::string readable_error;
    T           value;

    //adding a operator bool(){return valid;} is a very bad idea as it can cause confusion between the result of bool functions and their success
};
}
