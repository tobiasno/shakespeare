#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

// Function to return a random character name
std::string getRandomShakespeareCharacter() {
    // List of character names from Shakespeare's plays
std::vector<std::string> characterNames = {
    "Hamlet", "Macbeth", "Romeo", "Juliet", "Othello",
    "Desdemona", "King Lear", "Lady Macbeth", "Iago",
    "Cleopatra", "Prospero", "Miranda", "Polonius", "Portia",
    "Rosalind", "Puck", "Oberon", "Titania", "Julius Caesar",
    "Antony", "Cassius", "Ophelia", "Laertes", "Viola",
    "Benedick", "Beatrice", "Richard III", "Henry V", "Caliban",
    "Shylock", "Falstaff", "Mistress Quickly", "King Lear", "Edmund",
    "Mercutio", "Tybalt", "Benvolio", "Feste", "Olivia",
    "Malvolio", "Orsino", "Cesario", "Goneril", "Regan",
    "Cordelia", "Duncan", "Malcolm", "Donalbain", "Macduff",
    "Hermia", "Helena", "Demetrius", "Lysander", "Hecate",
    "Titus Andronicus", "Tamora", "Lavinia", "Aaron", "Pandarus"
};


    // Generate a random index within the range of character names
    int randomIndex = rand() % characterNames.size();

    // Return the randomly selected character name
    return characterNames[randomIndex];
}

int main() {
    // Seed the random number generator with the current time
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    // Get a random Shakespearean character name
    std::string randomCharacter = getRandomShakespeareCharacter();

    // Display the randomly selected character name
    std::cout << randomCharacter << std::endl;

    return 0;
}
