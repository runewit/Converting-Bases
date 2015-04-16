#include <stdio.h>
#include <string.h>
#include <assert.h>

#include "functions.h"


void main(){
	assert(power(3,3)==27);
	assert(power(7,0)==1);
	assert(power(1,8)==1);
	
	assert(character_to_decimal('f')==15);
	assert(character_to_decimal('3')==3);
	
	assert(decimal_to_character(14)=='e');
	assert(decimal_to_character(4)=='4');
	
	assert(convert_to_dec('1a',11)==21);
}