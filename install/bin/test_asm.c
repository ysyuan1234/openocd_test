void main(){
__asm__ __volatile__ (" .word 0x00003025"); //	move	a2,zero
__asm__ __volatile__ (" .word 0x3c060001"); //	lui	a2,0x1
__asm__ __volatile__ (" .word 0x00002025"); //	move	a0,zero
__asm__ __volatile__ (" .word 0x3c040001"); //	lui	a0,0x1
__asm__ __volatile__ (" .word 0x00002825"); //	move	a1,zero
__asm__ __volatile__ (" .word 0x3c050001"); //	lui	a1,0x1
__asm__ __volatile__ (" .word 0x00001025"); //	move	v0,zero
__asm__ __volatile__ (" .word 0x3c021010"); //	lui	v0,0x1010
__asm__ __volatile__ (" .word 0x3c038000"); //	lui	v1,0x8000
__asm__ __volatile__ (" .word 0x24671000"); //	addiu	a3,v1,4096
__asm__ __volatile__ (" .word 0xace20000"); //	sw	v0,0(a3)
__asm__ __volatile__ (" .word 0x3c02a0a0"); //	lui	v0,0xa0a0
__asm__ __volatile__ (" .word 0x8ce20000"); //	lw	v0,0(a3)
__asm__ __volatile__ (" .word 0x3c021010"); //	lui	v0,0x1010
__asm__ __volatile__ (" .word 0x24631008"); //	addiu	v1,v1,4104
__asm__ __volatile__ (" .word 0xac620000"); //	sw	v0,0(v1)
__asm__ __volatile__ (" .word 0x00853021"); //	addu	a2,a0,a1
__asm__ __volatile__ (" .word 0x00a22021"); //	addu	a0,a1,v0
__asm__ __volatile__ (" .word 0x00001025"); //	move	v0,zero
__asm__ __volatile__ (" .word 0x3c020001"); //	lui	v0,0x1
__asm__ __volatile__ (" .word 0x1000fffe"); //	b	8000004c <main+0x4c>
__asm__ __volatile__ (" .word 0x00001025"); //	move	v0,zer
}
