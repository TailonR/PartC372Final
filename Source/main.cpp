#include <iostream>
#include "../Headers/Car.h"
#include "../Headers/makeCars.h"
#include "../Headers/helper.h"
int main() {
    std::cout << "Hello, This is the start of the template design pattern" << std::endl;
    auto myFirstJeep = makeJeep("Laredo", 1993);
    auto myFirstMazda = makeMazda("Mazda6", 2020);
    auto mySecondJeep = makeJeep("Wrangler", 2020);
    auto mySecondMazda = makeMazda("Miata", 2019);
    auto myFirstCarInventory = {myFirstJeep, mySecondJeep};
    auto mySecondCarInventory = {myFirstMazda, mySecondMazda};

    auto myJeepInventory = makeJeepInventory(myFirstCarInventory);
    auto myMazdaInventory = makeMazdaInventory(mySecondCarInventory);
    myJeepInventory->setMake("Jeep");
    printMessage(myJeepInventory);
    myMazdaInventory->setMake("Mazda");
    printMessage(myMazdaInventory);
    std::cout << "That concludes our example of the template design pattern\n" << std::endl;


    std::cout << "Welcome to the second design pattern: Iterator" << std::endl;
    auto iterator = myJeepInventory->createIterator();
    auto iterator2 = myMazdaInventory->createIterator();
    std::cout << "The first model in our Jeep inventory is: " << (*iterator)->getModel() << " and the year is: " << (*iterator)->getYear() << std::endl;
    std::cout << "The first model in our Mazda inventory is: " << (*iterator2)->getModel() << " and the year is: " << (*iterator2)->getYear() << std::endl;
    std::cout << "The second model in our Jeep inventory is: " << (*(++iterator))->getModel() << " and the year is: " << (*iterator)->getYear() << std::endl;
    std::cout << "The second model in our Mazda inventory is: " << (*(++iterator2))->getModel() << " and the year is: " << (*iterator2)->getYear() << std::endl;
    std::cout << "The previous Jeep model was: " << (*(--iterator))->getModel() << " and the year is: " << (*iterator)->getYear() << std::endl;
    std::cout << "The previous Mazda model was: " << (*(--iterator2))->getModel() << " and the year is: " << (*iterator2)->getYear() << std::endl;


    return 0;
}
