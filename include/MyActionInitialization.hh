/*
 * Nicolas Guarin
 * Sevicio Geologico Colombiano
*/



#ifndef MyActionInitialization_h
#define MyActionInitialization_h 1

#include "G4VUserActionInitialization.hh"

/// Action initialization class.

class MyActionInitialization : public G4VUserActionInitialization
{
  public:
    MyActionInitialization();
    virtual ~MyActionInitialization();

    virtual void BuildForMaster() const;
    virtual void Build() const;
};

#endif 

    
