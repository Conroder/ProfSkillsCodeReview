/*Name: Conor Moran, I.D: 22510003, Date: 22/11/22 */
#include <stdio.h>
#include "string.h"
#include <ctype.h>
#include <math.h>

//declaring my functions
float watercalc(float lengthm, float widthm, float heightm);
void masscalc(float Volume);
float BarrelsToBeFilled(float Volume);


void main() {
	float Volume = watercalc(5, 1, 3);
	printf("The Volume of the pool is: %0.2f metres squared. \n", Volume);
	masscalc(Volume);
	printf("Barrels = %.2f\n", BarrelsToBeFilled(Volume));
}

// function used for calculating the volume of water in the pool
float watercalc(float lengthm, float widthm, float heightm) {
	// my student I.D is 22510003

	 float Volume = lengthm * widthm * heightm;
	 return Volume;
}

//function to find the mass of water in the pool
void masscalc(float Volume) {
	float MassPool = Volume * 1000;
	printf("The mass of water in the Pool is: %0.2f KG. \n", MassPool);
}

//function to find out how many barrels can be filled from the volume of water in the pool
 float BarrelsToBeFilled(float Volume) {
	float Barrels = Volume / 0.48;
	float WholeBarrels = ceil(Barrels);
}


