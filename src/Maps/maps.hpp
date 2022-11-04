#ifndef maps_hpp
#define maps_hpp

#include <map>
#include <string>
#include <iterator>

class Students
{
public:

    // Class members
    std::map<std::string, double>   courses_;
    std::string                     name_;
    double                          gpa_;

    Students( std::string name );

    std::map<std::string, double>::iterator itr;

    std::string getName() const;
    void setName( std::string );

    double getGpa() const;
    void setGpa( double );

    void addCourse( std::string, double );
    void completedCourses();
    void calcGpa();

};


#endif // End of maps.hpp interface