#include <iostream>
#include "RoboticArm.h"

int main(){
	RoboticArm arm;

	std::cout << "Posición inicial: (" << arm.getX() << "," << arm.getY() <<"," << arm.getZ() << ")\n";
        
        arm.move(1, 2, 3);
	std::cout << "Posición tras moverse: (" << arm.getX() << "," << arm.getY() << "," << arm.getZ() << ")\n";

	arm.grab();
	if (arm.getsujetando()){
		std::cout << "Sujetando objeto: si\n";
	} else {
	        std::cout << "Sujetando objeto: no\n";
	}
 
        arm.release();
        if (arm.getsujetando()) {
	        std::cout << " Después de soltar, sigo sujetando el objeto: si\n";
	} else {
	        std::cout << " Después de soltar, sigo sujetando el objeto: no\n";
	}	

	return 0;
}	
