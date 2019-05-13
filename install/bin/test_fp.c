void main(){
	int a,b,c,d;
	float e = 0x10100000;
	float f = 0x10100000;
	__asm__ __volatile__ (".set noreorder");
	__asm__ __volatile__ ("lui %0, %1   	\n" 	::"r"(a), "i"(1));
	__asm__ __volatile__ ("lui %0, %1   	\n" 	::"r"(b), "i"(1));
	__asm__ __volatile__ ("lui %0, %1   	\n" 	::"r"(c), "i"(1));
	__asm__ __volatile__ ("lui %0, %1   	\n" 	::"r"(d), "i"(0x1010));
	__asm__ __volatile__ ("sw  %0, 0(%1)	\n" 	::"r"(d), "r"(0x80001000));
	__asm__ __volatile__ ("lui %0, %1   	\n"	::"r"(d), "i"(0xa0a0));
	__asm__ __volatile__ ("lwc1  %0, 0(%1)	\n" 	::"r"(f), "r"(0x80001000));
	__asm__ __volatile__ ("lui %0, %1   	\n" 	::"r"(d), "i"(0x1010));
	__asm__ __volatile__ ("swc1  %0, 0(%1)	\n" 	::"r"(f), "r"(0x80001008));
A:
	__asm__ __volatile__ ("addu %0, %1, %2	\n" 	::"r"(a), "r"(b), "r"(c));
	__asm__ __volatile__ ("addu %0, %1, %2	\n" 	::"r"(b), "r"(c), "r"(d));
//	__asm__ __volatile__ ("j   %0\n" :: "i"(&&A));
	while(1){
		__asm__ __volatile__ ("lui %0, %1\n" ::"r"(d), "i"(1));
	}
}
