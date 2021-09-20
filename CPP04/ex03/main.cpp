/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 16:45:25 by bahaas            #+#    #+#             */
/*   Updated: 2021/09/20 19:54:36 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

	/*
int main()
{
	IMateriaSource *src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter *me = new Character("me");
	
	AMateria *tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter *bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;
	return 0;
}
	*/

/*
 * Test MateriaSource and inventory
 */

static void	testMateriaUse( void ) {

	std::cout << "---- TEST #00 ---- Using Materias" << std::endl << std::endl;

	ICharacter*		warlock = new Character("Sherlock the Warlock");
	ICharacter*		gladiator = new Character("Hector the Gladiator");

	IMateriaSource*	src = new MateriaSource();
	AMateria*		tmp;

	std::cout << std::endl << "  1. Source learn Ice and Cure Materias" << std::endl << std::endl;

	Ice *ice = new Ice();
	Cure *cure = new Cure();
	src->learnMateria(ice);
	std::cout << std::endl;
	src->learnMateria(cure);
//	src->learnMateria( new Ice() );
//	std::cout << std::endl;
//	src->learnMateria( new Cure() );

	std::cout << std::endl << "  2. Create Ice Materia and equip Sherlock the Warlock" << std::endl << std::endl;

	tmp = src->createMateria("ice");
	warlock->equip(tmp);

	std::cout << std::endl << "  3. Create Cure Materia and equip Sherlock the Warlock" << std::endl << std::endl;

	tmp = src->createMateria("cure");
	warlock->equip(tmp);

	std::cout << std::endl << "  4. Sherlock the Warlock attacks Hector the Gladiator then heals him" << std::endl << std::endl;

	warlock->use(0, *gladiator); // * shoots an ice bolt at Hector the Gladiator *
	warlock->use(1, *gladiator); // * heals Hector the Gladiator’s wounds *

	std::cout << std::endl;

	delete gladiator;
	std::cout << std::endl;
	delete warlock;
	std::cout << std::endl;
	delete src;
}

/*
 * Test MateriaSource and inventory
 */
/*
static void	testMateriaSource( void ) {

	std::cout << std::endl << "---- TEST #01 ---- MateriaSource" << std::endl << std::endl;

	Character*		geomancer = new Character("Carter the Geomancer");
	MateriaSource*	src = new MateriaSource();
	AMateria*		foundMateria;

	std::cout << std::endl << "  1. Source learn 4 Ice Materias" << std::endl << std::endl;

	for ( int i = 0; i < src->getMaxNbMemories(); i++ ) {

		std::cout << "- " << i << " ";
		src->learnMateria( new Ice() );
	}

	src->displayMemorizedMaterias();

	std::cout << std::endl << "  2. Try to learn a new source if MateriaSource is full" << std::endl << std::endl;

	foundMateria = new Ice();

	std::cout << std::endl;

	// MateriaSources is full (4 Materias)
	src->learnMateria( foundMateria );

	std::cout << std::endl;
	// Materia is left where it was found!
	delete foundMateria; // avoid leaks

	std::cout << std::endl << "  3. Source create Ice Materia to equip Carter the Geomancer" << std::endl << std::endl;

	geomancer->equip( src->createMateria("ice") );
	geomancer->displayInventory();

	std::cout << std::endl;

	delete geomancer;
	std::cout << std::endl;
	delete src;
}
*/
/*
 * Test deep copy of Character
 */
/*
static void	testCopyCharacter( void ) {

	std::cout << std::endl << "---- TEST #02 ---- Copy a character" << std::endl << std::endl;

	Character*		sage = new Character("Page the Sage");
	MateriaSource*	src = new MateriaSource();

	std::cout << std::endl << "  1. Source learn Ice and Cure Materias" << std::endl << std::endl;

	src->learnMateria( new Ice() );
	std::cout << std::endl;
	src->learnMateria( new Cure() );

	std::cout << std::endl << "  2. Equip Page the Sage only with Cure Materia" << std::endl << std::endl;

	for ( int i = 0; i < sage->getMaxNbItems(); i++ )
		sage->equip( src->createMateria("cure") );

	sage->displayInventory();

	std::cout << std::endl << "  3. Create a copy of Sage -> Healer" << std::endl << std::endl;

	// Healer is a copy of Sage
	Character*	healer = new Character(*sage);
	// Rename the copy to Heather the Healer
	healer->setName("Heather the Healer");

	std::cout << std::endl << "  4. Unequip Page the Sage of Materia at indices 0 and 2" << std::endl << std::endl;

	// Backup to avoid leaks since unequip() musn't delete Materia
	AMateria*	backup1 = sage->getMateria(0);
	AMateria*	backup2 = sage->getMateria(2);

	sage->unequip(0);
	sage->unequip(2);

	delete backup1;
	delete backup2;

	sage->displayInventory();

	std::cout << std::endl << "  4. Equip Page the Sage with an Ice Materia (because Page is not only a healer!) that should be at index 0" << std::endl << std::endl;

	sage->equip( src->createMateria("ice") );

	sage->displayInventory();

	std::cout << std::endl << "  5. Heather the Healer should have an unmodified inventory (only Cure Materias)" << std::endl << std::endl;

	healer->displayInventory();

	std::cout << std::endl;

	delete sage;
	std::cout << std::endl;
	delete healer;
	std::cout << std::endl;
	delete src;
}
*/
/*
 * Test assignment operator of Character
 */

/*
static void	testAssignCharacter( void ) {

	std::cout << std::endl << "---- TEST #03 ---- Assign a character" << std::endl << std::endl;

	Character*	redMage = new Character("Ted the Red");
	Character	darkMage;

	MateriaSource*	src = new MateriaSource();
	src->learnMateria( new Ice() );
	src->learnMateria( new Cure() );

	std::cout << std::endl << "  1. Equip Ted the Red only with Ice Materia" << std::endl << std::endl;

	for ( int i = 0; i < redMage->getMaxNbItems(); i++ )
		redMage->equip( src->createMateria("ice") );

	redMage->displayInventory();

	std::cout << std::endl << "  2. Character assignment -> Dark Mage = Red Mage" << std::endl << std::endl;

	// Dark Mage = Red Mage
	darkMage = *redMage;
	// Rename the copy to Clark the Dark
	darkMage.setName("Clark the Dark");

	std::cout << std::endl << "  3. Unequip Ted the Red of Materia at indices 0 and 2" << std::endl << std::endl;

	// Backup to avoid leaks since unequip musn't delete Materia
	AMateria*	backup1 = redMage->getMateria(0);
	AMateria*	backup2 = redMage->getMateria(2);

	redMage->unequip(0);
	redMage->unequip(2);

	delete backup1;
	delete backup2;

	redMage->displayInventory();

	std::cout << std::endl << "  4. Equip Ted the Red with a Cure Materia that should be at index 0" << std::endl << std::endl;

	redMage->equip( src->createMateria("cure") );

	redMage->displayInventory();

	std::cout << std::endl << "  5. Clark the Dark should have an unmodified inventory (only Ice Materias)" << std::endl << std::endl;

	darkMage.displayInventory();

	std::cout << std::endl;

	delete redMage;
	std::cout << std::endl;
	delete src;
}
*/
int	main( void ) {

	testMateriaUse();
	//testMateriaSource();
	//testCopyCharacter();
	//testAssignCharacter();

	return (0);
}
