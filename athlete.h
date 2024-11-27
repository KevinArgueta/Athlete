#ifndef ATHLETE_H
#define ATHLETE_H

// Problem 10 //

#include <iostream>
#include <string>
using namespace std;

class Athlete {
        public: // declarations
                Athlete();
                Athlete (int height, double weight, string name, char gender, string sport);
                ~Athlete ();

                void SetHeight (int height); // mutators
                void SetWeight (double weight);
                void SetName (string name);
                void SetGender (char gender);
                void SetSport (string sport);

                int GetHeight () const; // accessors
                double GetWeight () const;
                string GetName () const;
                char GetGender () const;
                string GetSport () const;

                void printInfo() const;

        private:

                int athleteHeight;
                double athleteWeight;
                string athleteName;
                char athleteGender;
                string athleteSport;
};

#endif
~
~
