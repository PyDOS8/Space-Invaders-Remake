/* File Operations */

// File Input
#ifndef SYS_FILE_INPUT
	#define SYS_FILE_INPUT 48
#endif 

// File output
#ifndef SYS_FILE_OUTPUT  
	#define SYS_FILE_OUTPUT 40
#endif 

// File Deletion
#ifndef SYS_FILE_DEL
        #define SYS_FILE_DEL 10
#endif

/* Program feedback */

// Exiting
#ifndef SYS_EXIT 
	#define SYS_EXIT 1
#endif 


// Output
#ifndef SYS_OUTPUT 
	#define SYS_OUTPUT 30
#endif 

// Input
#ifndef SYS_INPUT
	#define SYS_INPUT 4
#endif 


/* DISK */

// Disk reading
#ifndef SYS_DISK_READ
   #define SYS_DISK_READ 2
#endif

void READ_SYSTEM_CALL_NUMBER(int sys_number) {
	if (sys_number == 48) {
		_asm {
			.include 'interrupts.asm'
			extern _READFILE
		}
	}
	if (sys_number == 40) {
		_asm {
			.include 'interrupts.asm'
			extern _INPUTFILE
		};
	}
	if (sys_number == 1) {
		_asm {
			.include 'interrupts.asm'
			extern _SYSEXIT
		};
	}
	if (sys_number == 30) {
		_asm {
			.include 'interrupts.asm'
			extern _SYSOUTPUT
		}
	}
	if (sys_number == 4) {
		_asm {
			.include 'interrupts.asm'
			extern _SYSINPUT
		};
	}
	if(sys_number == 10){
		_asm{
			.include "interrupts.asm"
			extern _SYSDELETEFILE
		};
	}
	if(sys_number == 2){
		_asm{
			.include "interrupts.asm"
			extern _SYSDISKREAD
		}
	}
}
