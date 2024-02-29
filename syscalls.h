/* File Operations */

// File Input
#ifndef SYS_FILE_INPUT
	#define SYS_FILE_INPUT 48
#endif 

// File output
#ifndef SYS_FILE_OUTPUT  
	#define SYS_FILE_OUTPUT 40
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

#ifndef SYS_INPUT
	#define SYS_INPUT 4
#endif 

void READ_SYSTEM_CALL_NUMBER(int sys_number) {
	if (sys_number == 48) {
		_asm {
			".include 'interrupts.asm"
			"extern _READFILE";
		}
	}
	if (sys_number == 40) {
		_asm {
			".include 'interrupts.asm'"
			"extern _INPUTFILE"
		};
	}
	if (sys_number == 1) {
		_asm {
			".include 'interrupts.asm'"
			"extern _SYSEXIT"
		};
	}
	if (sys_number == 30) {
		_asm {
			".include 'interrupts.asm'"
			"extern _SYSOUTPUT"
		}
	}
	if (sys_number == 4) {
		_asm {
			".include 'interrupts.asm'"
			"extern _SYSINPUT"
		};
	}
}
