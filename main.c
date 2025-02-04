
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

char conversion (char, char);
int get_number(int);
int get_char(char[8]);
int bin_dec(int[8]);
int bin_hex(int[8]);
int bin_oct(int[8]);
int dec_bin(int);
int dec_hex(int);
int dec_oct(int);
int hex_bin(int[8]);
int hex_dec(int[8]);
int hex_oct(int[8]);
int oct_bin(int[8]);
int oct_dec(int[8]);
int oct_hex(int[8]);

char initial, final, choice, char_in[8], char_out_array[8];
int i, j=0, temp_number_in=0,number_in_array[8], number_in=0, number_out=0, number_out_array[8];

main()
{
	while(choice!='n'&&choice!='N')
	{
		system("cls");
		printf("\t8 BITS NUMBER SYSTEM CONVERTER\n\tDEVELOPED BY; TALHA AHMED HAMEDI\n\n");
		printf("\n\tINDEX\n\n\t\tb/B is for binary\n\t\td/D is for decimal\n\t\to/O is for octal\n\t\th/H is for hexadecimal\n\n");
		printf("\nEnter the number system you want to convert from...\n");
		initial=getche();
		printf("\nEnter the number system you want to convert in...\n");
		final=getche();
		conversion(initial, final);
		printf("\n\npress any key to continue...\ninput n/N to abort...\n\n");
		choice=getche();
	}
	getch();
	return 0;
}
char conversion(char initial, char final)
{
	switch(initial)
	{
		case'b':
		case'B':
		{
			switch(final)
			{
				case'b':
				case'B':
					{
						printf("\n\nYOU ARE IN THE SAME NUMBER SYSTEM...\n\n");
						return 0;
					}
				case'd':
				case'D':
					{
						get_number(temp_number_in);
						bin_dec(number_in_array);
						printf("\n\nThe decimal equivalent of your given binary number is...\n\n");
						printf("\n%d\n", number_out);
						return 0;
					}
				case'h':
				case'H':
					{
						get_number(temp_number_in);
						bin_hex(number_in_array);
						printf("\n\nThe hexa decimal equivalet of your given binary number is...\n\n");
						for(i=0; i<8; i++)
						{
							printf("%c", char_out_array[i]);
						}
						printf("\n\n");
						return 0;
					}
				case'o':
				case'O':
					{
						get_number(temp_number_in);
						bin_oct(number_in_array);
						printf("\n\nThe octal equivalent of your given binary number in 8 bits is...\n\n");
						printf("\n\n");
						for(i=0; i<8; i++)
						{
							printf("%d", number_out_array[i]);
						}
						printf("\n\n");
						return 0;
					}
				default:
					{
						printf("\n\nOut of the world...\n\n");
						return 0;
					}	
			}
		}
		case'd':
		case'D':
			{
				switch(final)
				{
					case'b':
					case'B':
						{
							get_number(temp_number_in);
							dec_bin(number_in);
							printf("\n\nThe binary equivalent of your given decimal number is...\n\n");
							for(i=0; i<8; i++)
							{
								printf("%d", number_out_array[i]);
							}
							printf("\n\n");
							return 0;
						}
					case'd':
					case'D':
						{
							printf("\n\nYOU ARE IN THE SAME NUMBER SYSTEM...\n\n");
							return 0;
						}
					case'h':
					case'H':
						{
							get_number(temp_number_in);
							dec_hex(number_in);
							printf("\n\nThe hexa decimal equivalent of your given decimal number is...\n\n");
							for(i=0; i<8; i++)
							{
								printf("%c", char_out_array[i]);
							}
							printf("\n\n");
							return 0;
						}
					case'o':
					case'O':
						{
							get_number(temp_number_in);
							dec_oct(number_in);
							printf("\n\nThe octal equivalent of your given decimal number is...\n\n");
							for(i=0; i<8; i++)
							{
								printf("%d", number_out_array[i]);
							}
							printf("\n\n");
							return 0;
						}
					default:
						{
							printf("\n\nOut of the world...\n\n");
							return 0;
						}
				}
			}
		case'h':
		case'H':
			{
				switch(final)
				{
					case'b':
					case'B':
						{
							get_char(char_in);
							hex_bin(number_in_array);
							printf("\n\nThe binary equivalent of your hexadecimal number is...\n\n");
							for(i=0; i<8; i++)
							{
								printf("%d", number_out_array[i]);
							}
							printf("\n\n");
							return 0;
						}
					case'd':
					case'D':
						{
							get_char(char_in);
							hex_dec(number_in_array);
							printf("\n\nThe decimal equivalent fo your hexadecimal number is...\n%d\n\n", number_out);
							return 0;
						}
					case'h':
					case'H':
						{
							printf("\n\nYOU ARE IN THE SAME NUMBER SYSTEM...\n\n");
							return 0;
						}
					case'o':
					case'O':
						{
							get_char(char_in);
							hex_oct(number_in_array);
							printf("\n\nThe octal equivalent of your hexadecimal number is...\n\n");
							for(i=0; i<8; i++)
							{
								printf("%d", number_out_array[i]);
							}
							printf("\n\n");
							return 0;
						}
					default:
					{
							printf("\n\nOut of the world...\n\n");
							return 0;
					}	
				}
			}
		case'o':
		case'O':
			{
				switch(final)
				{
					case'b':
					case'B':
						{
							get_number(temp_number_in);
							oct_bin(number_in_array);
							printf("\n\nThe binary equivaleny of your given octal number is...\n\n");
							for(i=0; i<8; i++)
							{
								printf("%d", number_out_array[i]);
							}
							printf("\n\n");
							return 0;
						}
					case'd':
					case'D':
						{
							get_number(temp_number_in);
							oct_dec(number_in_array);
							printf("\n\nThe decimal equivalent of your given octal number is \n...%d\n\n", number_out);
							return 0;
						}
					case'h':
					case'H':
						{
							get_number(temp_number_in);
							oct_hex(number_in_array);
							printf("\n\nThe hexa decimal equivalent of your given octal number is...\n\n");
							for(i=0; i<8; i++)
							{
								printf("%c", char_out_array[i]);
							}
							printf("\n\n");
							return 0;
						}
					case'o':
					case'O':
						{
							printf("\n\nYOU ARE IN THE SAME NUMBER SYSTEM...\n\n");
							return 0;
						}
					default:
						{
							printf("\n\nOut of the world...\n\n");
							return 0;
						}	
				}
			}
		default:
		{
			printf("\n\nOut of the world...\n\n");
			return 0;
		}	
	}
}
int get_number(int temp_number_in)
{
	number_in=0;
	number_in_array[8]=0,0,0,0,0,0,0,0;
	printf("\n\nEnter the number you want to convert...\n\n");
	scanf("%d", &temp_number_in);
	if(initial=='d'||initial=='D')
	{
		number_in=temp_number_in;
		return number_in;
	}
	else if(initial=='o'||initial=='O')
	{
		for(i=7; i>=0; i--)
		{
			if(temp_number_in%10<8)
			{
				number_in_array[i]=temp_number_in%10;
				temp_number_in/=10;
			}
		}
		return number_in_array[8];
	}
	else if(initial=='b'||initial=='B')
	{
		for(i=7; i>=0; i--)
		{
			if(temp_number_in%10==1||temp_number_in%10==0)
			{
				number_in_array[i]=temp_number_in%10;
				temp_number_in/=10;
			}
		}
		return number_in_array[8];		
	}
} 
int get_char(char cahr_in[8])
{
	number_in_array[8]=0,0,0,0,0,0,0,0;
	printf("\n\nEnter the number you want to convert...\n\n");
	gets(char_in);
	int x=0;
	x=strlen(char_in);
	if(x>8)
	{
		printf("\n\nToo long to convert...\n\n");
		return 0;
	}
	for(i=0; i<x; i++)
	{
		switch(char_in[i])
		{
			case'0':
			{
				number_in_array[i]=0;
				break;
			}
			case'1':
			{
				number_in_array[i]=1;
				break;
			}
			case'2':
			{
				number_in_array[i]=2;
				break;
			}
			case'3':
			{
				number_in_array[i]=3;
				break;
			}
			case'4':
			{
				number_in_array[i]=4;
				break;
			}
			case'5':
			{
				number_in_array[i]=5;
				break;
			}
			case'6':
			{
				number_in_array[i]=6;
				break;
			}
			case'7':
			{
				number_in_array[i]=7;
				break;
			}
			case'8':
			{
				number_in_array[i]=8;
				break;
			}
			case'9':
			{
				number_in_array[i]=9;
				break;
			}
			case'a':
			case'A':
			{
				number_in_array[i]=10;
				break;
			}
			case'b':
			case'B':
			{
				number_in_array[i]=11;
				break;
			}
			case'c':
			case'C':
			{
				number_in_array[i]=12;
				break;
			}
			case'd':
			case'D':
			{
				number_in_array[i]=13;
				break;
			}
			case'e':
			case'E':
			{
				number_in_array[i]=14;
				break;
			}
			case'f':
			case'F':
			{
				number_in_array[i]=15;
				break;
			}
			default:
			{
				printf("ERROR 404");
				return 0;
			}	
		}
	}
	return number_in_array[8];
}  
int bin_dec(int number_in_array[8])
{
	number_out=0;
	j=0;
	for(i=7; i>=0 ;i--)
	{
		number_out=number_in_array[i]*pow(2, j)+number_out;
		j++;
	}
	return number_out;
}
int bin_hex(int number_in_array[8])
{
	bin_dec(number_in_array);
	dec_hex(number_out);
	return number_out_array[8];
}
int bin_oct(int number_in_array[8])
{
	bin_dec(number_in_array);
	dec_oct(number_out);
	return number_out_array[8];
}
int dec_bin(int number_in)
{
	for(i=7; i>=0; i--)
	{
		number_out_array[i]=number_in%2;
		number_in/=2;
	}
	return number_out_array[8];
}
int dec_hex(int number_in)
{
	for(i=7; i>=0; i--)
	{
		char_out_array[i]=number_in%16;
		switch(char_out_array[i])
		{
			case 0:
			{
				char_out_array[i]='0';
				break;
			}
			case 1:
			{
				char_out_array[i]='1';
				break;
			}
			case 2:
			{
				char_out_array[i]='2';
				break;
			}
			case 3:
			{
				char_out_array[i]='3';
				break;
			}
			case 4:
			{
				char_out_array[i]='4';
				break; 
			}	
			case 5:
			{
				char_out_array[i]='5';
				break;
			}
			case 6:
			{
				char_out_array[i]='6';
				break;
			}	
			case 7:
			{
				char_out_array[i]='7';
				break;
			}
			case 8:
			{
				char_out_array[i]='8';
				break;
			}
			case 9:
			{
				char_out_array[i]='9';
				break;
			}	
			case 10:
			{
				char_out_array[i]='A';
				break;
			}
			case 11:
			{
				char_out_array[i]='B';
				break;
			}
			case 12:
			{
				char_out_array[i]='C';
				break;
			}
			case 13:
			{
				char_out_array[i]='D';
				break;
			}
			case 14:
			{
				char_out_array[i]='E';
				break;
			}
			case 15:
			{
				char_out_array[i]='F';
				break;
			}
			default:
			{
				printf("ERROR 404");
				return 0;
			}			
		}
		number_in/=16;
	}
	return char_out_array[8];
}
int dec_oct(int number_in)
{
	for(i=7; i>=0; i--)
	{
		number_out_array[i]=number_in%8;
		number_in/=8;
	}
	return number_out_array[8];
}
int hex_bin(int number_in_array[8])
{
	hex_dec(number_in_array);
	dec_bin(number_out);
	return number_out_array[8];
}
int hex_dec (int number_in_array[8])
{
	j=0;
	number_out=0;
	int x=0;
	x=strlen(char_in);
	for(i=x-1; i>=0; i--)
	{
		number_out+=number_in_array[i]*pow(16, j);
		j++;
	}
	return number_out;
}
int hex_oct(int number_in_array[8])
{
	hex_dec(number_in_array);
	dec_oct(number_out);
	return number_out_array[8];
}
int oct_bin(int number_in_array[8])
{
	oct_dec(number_in_array);
	dec_bin(number_out);
	return number_out_array[8];

}
int oct_dec(int number_in_array[8])
{
	j=0;
	number_out=0;
	for(i=7; i>=0 ;i--)
	{
		number_out=number_in_array[i]*pow(8, j)+number_out;
		j++;
	}
	return number_out;
}
int oct_hex(int number_in_array[8])
{
	oct_dec(number_in_array);
	dec_hex(number_out);
	return number_out_array[8];
}
