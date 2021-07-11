#include <iostream> //Blue is Preproccessor Directive, Orange is the Header File
#include <ctime>

void PrintIntroduction(int Difficulty)
{
    std::cout <<"\n\nHi, thank you for coming, we don't have long...You're on level " << Difficulty; //Std is a Namespace called Standard :: is a Scope Operator << Means Output to the right.
    std::cout << std:: endl; //Example Of a Line Break
    std::cout <<"We need to crack the enemies code, I'll forward the details to your terminal..\n\n"<< std::endl;

}


bool PlayGame(int Difficulty, int Mod ) // A group of statements that together performs a task and is given a name
{

     PrintIntroduction(Difficulty); 
    
    // Declare the Game Codes

    
    
    const int CodeA = rand() % Mod + Difficulty; //Rand function   % - Modulus Operator, perfoms a divison but retunrs the remainder
    const int CodeB = rand() % Mod + Difficulty;
    const int CodeC = rand() % Mod + Difficulty; //Declaration  Statements 

    // Sum Calculator 
    int CodeSum = CodeA + CodeB + CodeC;
    int CodeProduct = CodeA * CodeB * CodeC;

    //Print the Code Sum and Code Product
    // cout stands for Character Output << Output to the right - It's called the insertion Operator
    std::cout << "+ There are three numbers in the code";
    //Expression Statements - When you have a semi colon at the end, but they're not varibles
    std::cout << "\n+ The sum of the numbers is.." << CodeSum;
    std::cout << "\n+ The Product of the numbers is.." << CodeProduct << std:: endl;

     std::cout << "\n Testing Statement so I don't have to do Math\n " << Mod << CodeA << CodeB << CodeC << "\n ";

    //Store Player Guessed
    int GuessA,GuessB,GuessC;
    std::cin >> GuessA >> GuessB >> GuessC; // cin = Character Input, '>>' is the Extraction Operator
    std::cout << "You Entered the value: " << GuessA << GuessB << GuessC;
    

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    // First C++ If statement - Has the player guessed the correct Number 

    if (GuessProduct == CodeProduct && GuessSum == CodeSum)
    { //Anything in here is called a Compound statement or Code Block
        
        std::cout << "\n** Well done agent! You've extracted one of the files, keep going! ***";
        return true;
        
    }
    else 
    {

        std::cout << "\n*** You entered the wrong code! Try again!***";
        return false;

    }

}





int main()
{
    srand(time(NULL)); // Creates a new random sequence based on the time of day

    int LevelDifficulty = 1;
    int const MaxDifficulty = 7;
    int Mod = 3;
   
while (LevelDifficulty <= MaxDifficulty) //Loop until all levels are completed
{

    
    bool bLevelComplete = PlayGame(LevelDifficulty, Mod);
    std::cin.clear(); //Clears any errors
    std::cin.ignore(); //Discards the buffer


    if (bLevelComplete)
    {
        ++LevelDifficulty;
        ++Mod;
    }

   
   
    


}
    std::cout << "*** \n+ Congrats! You've got the files. Now, get out of there! ***\n";
    return 0; 
}