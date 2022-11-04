#include "maps.hpp"

#include <iostream>
#include <iterator> 
#include <vector>
#include <cmath>
#include <numeric>

Students::Students( std::string name )
{
    name_ = name;
}

std::string Students::getName() const
{
    return name_;
}

double Students::getGpa() const
{
    return gpa_;
}

void Students::setName( std::string name )
{
    name_ = name;
}

void Students::setGpa( double gpa )
{
    gpa_ = gpa;
}

void Students::addCourse( std::string course, double grade )
{
    courses_.insert( { course, grade } );
}

void Students::completedCourses( )
{
    std::cout << "Course: " << "    " << "Grade: \n";
    for( auto itr = courses_.begin(); itr != courses_.end(); ++itr )
    {
        std::cout << itr->first << '\t' << itr->second << '\n';
    }
}

void Students::calcGpa( )
{
    std::vector<double> grades;
    std::vector<double> gradePoints;
    for( auto itr = courses_.begin(); itr != courses_.end(); ++itr )
    {
        grades.push_back(itr->second);
        if( itr->second >= 93.0 )
        {
            gradePoints.push_back( 4.0 );
        }
        else if( itr->second >= 90.0 && itr->second < 93.0 )
        {
            gradePoints.push_back( 3.7 );
        }
        else if( itr->second >= 87.0 && itr->second < 90.0 )
        {
            gradePoints.push_back( 3.3 );
        }
        else if( itr->second >= 83.0 && itr->second < 87.0 )
        {
            gradePoints.push_back( 3.0 );
        }
        else if( itr->second >= 80.0 && itr->second < 83.0 )
        {
            gradePoints.push_back( 2.7 );
        }
        else if( itr->second >= 77.0 && itr->second < 80.0 )
        {
            gradePoints.push_back( 2.3 );
        }
        else if( itr->second >= 73.0 && itr->second < 77.0 )
        {
            gradePoints.push_back( 2.0 );
        }
        else if( itr->second >= 70.0 && itr->second < 73.0 )
        {
            gradePoints.push_back( 1.7 );
        }
        else if( itr->second >= 67.0 && itr->second < 70.0 )
        {
            gradePoints.push_back( 1.3 );
        }
        else if( itr->second >= 65.0 && itr->second < 67.0 )
        {
            gradePoints.push_back( 1.0 );
        }
        else if( itr->second < 65.0 )
        {
            gradePoints.push_back( 0.0 );
        }
    }


    double gpa = double(accumulate( gradePoints.begin(), gradePoints.end(), 0 ))/double((gradePoints.size()));
    gpa_ = gpa;

    // std::cout << "\nThe numerator is: " << accumulate( gradePoints.begin(), gradePoints.end(), 0 ) << "\n";
    // std::cout << "\nThe denominator is: " << gradePoints.size() << "\n";

    // std::cout << "\nThe GPA is: " << gpa << "\n";

    std::cout << name_ << "'s GPA is: " << gpa_ << ".\n";

}

// { {"Algebra", 92.4}, {"Trigonometry", 87.4}, {"Geometry", 97.2}, {"Calculus", 0}, {"Biology", 94.8}, {"Physics", 89.5}, {"Chemistry", 91.1}, {"Geology", 0} };

int main()
{

    Students s1("Tim");

    s1.courses_ = { {"Algebra", 92.4}, {"Trigonometry", 87.4}, {"Geometry", 97.2}, {"Biology", 94.8}, {"Physics", 89.5}, {"Chemistry", 91.1} };

    s1.calcGpa();

    return 0;

}
