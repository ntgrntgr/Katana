#pragma once

class Dice{
    public:

        Dice(short dNumberOfFaces);
        void roll();
        short getNumberOfFaces();
        void setNumberOfFaces(short numberOfFaces);
        short getCurrentFace();
        void setCurrentFace(short dcurrentFace);


        ~Dice();
        
        

   
    private:
        short numberOfFaces;
        short currentFace;
    
    
        

};
