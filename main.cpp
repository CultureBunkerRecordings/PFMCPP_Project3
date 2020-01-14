/*
 Project 3 - Part 1
Video:  Chapter 2 Part 5
 User-Defined Types

 Do this on a branch named Part 1
 
 1) write 10 user-defined types, each with a random number of member variables
    try to make the member variables have names that are related to the user-defined type.
 
 2) give the member variables relevant data types
 
 3) add a couple member functions.  
    make the function parameter list for those member functions use some of your User-Defined Types
 
 4) make 2 of the 10 user-defined types be nested class
 
 5) One of your UDTs should only use UDTs for its member variable types.   
     No primitives allowed!
 
 6) After you finish defining each type, click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 Wait for my code review.
 */

/*
 example:
 */
struct CarWash            //1) a U.D.T. with a random number of member variables
{
    int numSponges = 3;
    double amountOfSoapUsedPerCar = 2.6; //2) relevant data types
    unsigned int numCarsProcessed = 0;
    
    struct Car                             //4) nested class
    {
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        //2) relevant data types
    };
    
    void washAndWaxCar( Car car );         //3) member function with a user-defined type as the parameter.  The user-defined type parameter happens to be the nested class.
    
    Car myCar;  //5) a member variable whose type is a UDT.
};


/*
 1)
 */
struct Animal
{
    bool hasTail = true;
    int numLegs = 4;
    float length = 2.5f;
    float width = 1.2f;
    struct Mammal
    {
        bool hasChild = true;
        int numberOfStomachs = 7;
    };
    void putAnimalIn(CarWash wash);
};
/*
 2)
 */

struct House
{
    bool hasChimney = false;
    int numBathrooms = 4;
    int numWindows = 2;
    float price = 100000;
    bool doesItComeWithPet(Animal pet);
};
/*
 3)
 */

struct Alphabet
{
    int numCharacters = 26;
    char letter = 'a';
    int scrabbleScore = 4;
    struct Word
    {
        int numLetters = 6;
        char firstLetter = 't';
    };
};

/*
 4)
 */

struct Counter
{
    int num = 2;
    double timeTaken = 2.45;
    bool isRunning = true;
};
/*
 5)
 */

struct CheeseType
{
    int numberOfHoles = 34;
    float weight = 2.6f;
    float smellScore = 10;
    bool isCheddar = false;
};
/*
 6)
 */

struct Face
{
    int numEyes = 4;
    float lengthTeeth = 45;
    bool isHappy = true;
    double timeSinceShave = 23457.6;
};
/*
 7)
 */

struct Money
{
    bool isStirling = true;
    float howMuch = 254.00;
    int howManyCoins = 20;
};
/*
 8)
 */

struct FancyDress
{
    float costOfHire = 45;
    bool isGood = false;
    int styleScore = 2;

};
/*
 9)
 */

struct Cat
{
    int furGrade = 8;
    float lengthOfTail = 2.67f;
    int VolumeOfMeow = 10;
    bool isScratchy = true;
};
/*
 10)
 */

struct Types
{
    Cat meow;
    FancyDress fancy;
    Money cash;
    
};
#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
