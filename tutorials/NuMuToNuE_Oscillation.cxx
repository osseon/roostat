 /***************************************************************************** 
  * Project: RooFit                                                           * 
  *                                                                           * 
  * This code was autogenerated by RooClassFactory                            * 
  *****************************************************************************/ 

 // Your description goes here... 

#include "Riostream.h" 

#include "NuMuToNuE_Oscillation.h" 
#include "RooAbsReal.h" 
#include "RooAbsCategory.h" 
#include <math.h> 
#include "TMath.h" 

// ClassImp(NuMuToNuE_Oscillation) 

 NuMuToNuE_Oscillation::NuMuToNuE_Oscillation(const char *name, const char *title, 
                        RooAbsReal& _L,
                        RooAbsReal& _E,
                        RooAbsReal& _deltaMSq) :
   RooAbsPdf(name,title), 
   L("L","L",this,_L),
   E("E","E",this,_E),
   deltaMSq("deltaMSq","deltaMSq",this,_deltaMSq)
 { 
 } 


 NuMuToNuE_Oscillation::NuMuToNuE_Oscillation(const NuMuToNuE_Oscillation& other, const char* name) :  
   RooAbsPdf(other,name), 
   L("L",this,other.L),
   E("E",this,other.E),
   deltaMSq("deltaMSq",this,other.deltaMSq)
 { 
 } 



 Double_t NuMuToNuE_Oscillation::evaluate() const 
 { 
   // ENTER EXPRESSION IN TERMS OF VARIABLE ARGUMENTS HERE 
   return pow(sin(1.27*deltaMSq*L/E),2) ; 
 } 

