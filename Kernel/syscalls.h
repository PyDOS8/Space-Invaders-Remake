/* File Operations */

// File Input
#ifndef SYS_FILE_INPUT
	#define SYS_FILE_INPUT 48
#endif 

// File Reading
#ifndef SYS_FILE_READ
        #define SYS_FILE_READ 56
#endif

// File output
#ifndef SYS_FILE_OUTPUT  
	#define SYS_FILE_OUTPUT 40
#endif 

// File Deletion
#ifndef SYS_DELETE_FILE
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

// Disk deleting
#ifndef SYS_DISK_DELETE
	#define SYS_DISK_DELETE 67
#endif

// Disk writing
#ifndef SYS_DISK_WRITE
	#define SYS_DISK_WRITE 59
#endif


// Change disk permissions

// Disk writing permission
#ifndef SYS_DISK_PERMISSION_WRITE 
	#define SYS_DISK_PERMISSION_WRITE 49
#endif

// Disk deletion permission
#ifndef SYS_DISK_PERMISSION_DELETE
	#define SYS_DISK_PERMISSION_DELETE 23
#endif

// Disk read permission
#ifndef SYS_DISK_PERMISSION_READ
	#define SYS_DISK_PERMISSION_READ 34
#endif

// Disk load permission
#ifndef SYS_DISK_LOAD_PERMISSION
	#define SYS_DISK_LOAD_PERMISSION 69
#endif

void READ_SYSTEM_CALL_NUMBER(int sys_number) {
	if (sys_number == SYS_FILE_INPUT){
		_asm {
			.include 'interrupts.asm'
			extern _READFILE
			call _READFILE
		}
	}
	if (sys_number == SYS_FILE_OUTPUT) {
		_asm {
			.include 'interrupts.asm'
			extern _INPUTFILE
			call _INPUTFILE
		};
	}
	if (sys_number == SYS_EXIT) {
		_asm {
			.include 'interrupts.asm'
			extern _SYSEXIT
			call _SYSEXIT
		};
	}
	if (sys_number == SYS_OUTPUT) {
		_asm {
			.include 'interrupts.asm'
			extern _SYSOUTPUT
			call _SYSOUTPUT
		}
	}
	if (sys_number == SYS_INPUT){
		_asm {
			.include 'interrupts.asm'
			extern _SYSINPUT
			call _SYSINPUT
		};
	}
	if(sys_number == SYS_DELETE_FILE){
		_asm{
			.include "interrupts.asm"
			extern _SYSDELETEFILE
			call _SYSDELETEFILE
		};
	}
	if(sys_number == SYS_DISK_READ){
		_asm{
			.include "interrupts.asm"
			extern _SYSDISKREAD
			call _SYSDISKREAD
		}
	}
	if(sys_number == SYS_DISK_WRITE){
		_asm{
			.include "interrupts.asm"
			extern _SYSDISKWRITE
			call _SYSDISKWRITE
		}
	}
	if(sys_number == SYS_DISK_DELETE){
		_asm{
			.include "interrupts.asm"
			extern _SYSDISKDELETE
			call _SYSDISKDELETE
		}
	}
	if(sys_number == SYS_DISK_PERMISSION_DELETE){
			_asm{
				.include "interrupts.asm"
				extern _SYSDISKPERMISSIONWRITE
				call _SYSDISKPERMISSIONSWRITE
			}
	}
	if(sys_number == SYS_DISK_PERMISSION_READ){
			_asm{
				.include "interrupts.asm"
				extern _SYSDISKPERMISSIONREAD
				call _SYSDISKPERMISSIONREAD
			}
	}
	if(sys_number == SYS_DISK_PERMISSION_WRITE){
			_asm{
				.include "interrupts.asm"
				extern _SYSDISKPERMISSIONSWRITE
				call _SYSDISKPERMISSIONSWRITE
			}
	}
	if(sys_number == SYS_DISK_LOAD_PERMISSION){
			_asm{
				.include "interrupts.asm"
				extern _SYSDISKLOADPERMISSION
				call   _SYSDISKLOADPERMISSION
			}
	}
}
