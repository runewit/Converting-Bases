#include "functions.h"

int power(int a, int b){
	int i, sum=1;
	for(i=b;i>0;i--){
		sum*=a;
	}
	return sum;
}

int character_to_decimal(char character){ //,int base_from,int i){
	int d_number;
	if(character<='9' && character>='0') {
		d_number=character-'0';
	} else if(character>='a' && character<='z') {
		d_number=character-'a'+10;
	}
	return d_number;
}

char decimal_to_character(int decimal){
	char c_number, output;
	if(decimal<9 && decimal>=0) {
		c_number=48+decimal;
		output=(char)c_number;
	} else if(decimal>9) {
		c_number=87+decimal;
		output=(char)c_number;
	}
	return output;
}

int convert_to_dec(char* number,int base_from){
	int i, k;
	char decimal_array[65];
	int decimal_number;
	int length;
	for(i=0; number[i]!='\0'; i++){
		decimal_array[i]=character_to_decimal(number[i]); //,base_from,i*base_from^i);
		//printf("%c -> %d\n",number[i],decimal_array[i]);
	}
	length=i;
	//printf("%d \n",length);
	for(k=0; decimal_array[k]!='\0'; k++){
		decimal_number+=decimal_array[k]*power(base_from,(length-(k+1)));
	}
	//printf("The number in base 10 is: %d \n",decimal_number);
	return decimal_number;
}

void convert_to_new(int number, int base_to){ // Pulls together the converters and gives the answer.
	int remainders[65], n, m, p, d, dividingstuff;
	char final_num[65];
	for(d=0;d<=64;d++){
		remainders[d]=-1;
	}
	dividingstuff=number;
	for(n=64; dividingstuff!=0;n--){
		//printf("dividingstuff before: %i ",dividingstuff);
		remainders[n]=dividingstuff%base_to;
		dividingstuff /= base_to;
		//printf("dividingstuff after: %i, remainder: %i \n",dividingstuff,remainders[n]);
	};
	for(p=0;p<=64;p++){
		if(remainders[p]==-1){
		}else{
			printf("%c",decimal_to_character(remainders[p]));
		};
	};
}