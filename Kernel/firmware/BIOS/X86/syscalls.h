// This file handles all of the system call numbers.



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
#ifndef SYS_FILE_DELETE
	#define SYS_FILE_DELETE 10
#endif

/* File Permissions */


// File permission for writing a file
#ifndef SYS_FILE_WRITE
#define SYS_FILE_WRITE 5
#endif 


// File permission for reading a file
#ifndef SYS_FILE_READ
#define SYS_FILE_READ 50 
#endif

// File permissions for deleting a file
#ifndef SYS_FILE_DELETE
#define SYS_FILE_DELETE 54
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

// Detect mouse movement and move the cursor.
#ifndef SYS_MOUSE_CURSOR_MOVED
#define SYS_MOUSE_CURSOR_MOVED 20
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


/* Folder permissions */

// Writing a folder
#ifndef SYS_WRITE_FOLDER
#define SYS_WRITE_FOLDER 94
#endif

// Deleting a folder
#ifndef SYS_DELETE_FOLDER
#define SYS_DELETE_FOLDER 345
#endif

// Reading a folder
#ifndef SYS_READ_FOLDER
#define SYS_READ_FOLDER 495 
#endif 

/* BIOS Interrupts */

// Output key when a key is pressed on the keyboard
#ifndef SYS_KEY_PRESSED
#define SYS_KEY_PRESSED 45
#endif

void READ_SYSTEM_CALL_NUMBER(int sys_number) {
	if (sys_number == SYS_FILE_INPUT) {
		_asm {
			.include 'interrupts.asm'
			extern _READFILE
			call _READFILE
		};
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
		};
	}
	if (sys_number == SYS_INPUT) {
		_asm {
			.include 'interrupts.asm'
			extern _SYSINPUT
			call _SYSINPUT
		};
	}
	if (sys_number == SYS_FILE_DELETE) {
		_asm {
			.include "interrupts.asm"
			extern _SYSDELETEFILE
			call _SYSDELETEFILE
		};
	}
	if (sys_number == SYS_DISK_READ) {
		_asm {
			.include "interrupts.asm"
			extern _SYSDISKREAD
			call _SYSDISKREAD
		};
	}
	if (sys_number == SYS_DISK_WRITE) {
		_asm {
			.include "interrupts.asm"
			extern _SYSDISKWRITE
			call _SYSDISKWRITE
		};
	}
	if (sys_number == SYS_DISK_DELETE) {
		_asm {
			.include "interrupts.asm"
			extern _SYSDISKDELETE
			call _SYSDISKDELETE
		};
	}
	if (sys_number == SYS_DISK_PERMISSION_DELETE) {
		_asm {
			.include "interrupts.asm"
			extern _SYSDISKPERMISSIONWRITE
			call _SYSDISKPERMISSIONSWRITE
		};
	}
	if (sys_number == SYS_DISK_PERMISSION_READ) {
		_asm {
			.include "interrupts.asm"
			extern _SYSDISKPERMISSIONREAD
			call _SYSDISKPERMISSIONREAD
		};
	}
	if (sys_number == SYS_DISK_PERMISSION_WRITE) {
		_asm {
			.include "interrupts.asm"
			extern _SYSDISKPERMISSIONSWRITE
			call _SYSDISKPERMISSIONSWRITE
		};
	}
	if (sys_number == SYS_DISK_LOAD_PERMISSION) {
		_asm {
			.include "interrupts.asm"
			extern _SYSDISKLOADPERMISSION
			call   _SYSDISKLOADPERMISSION
		};
	}
	if (sys_number == SYS_FILE_DELETE) {
		_asm {
			.include "interrupts.asm"
			extern _SYSFILEDELETE
			call _SYSFILEDELETE
		};
	}
	if (sys_number == SYS_FILE_READ) {
		_asm {
			.include "interrupts.asm"
			extern _SYSFILEREAD
			call _SYSFILEREAD
		};
	}
	if (sys_number == SYS_FILE_OUTPUT) {
		_asm {
			.include "interrupts.asm"
			extern _SYSFILEOUTPUT
			call _SYSFILEOUTPUT
		};
	}
	if (sys_number == SYS_FILE_DELETE) {
		_asm {
			.include "interrupts.asm"
			extern _SYSFILEDELETE
			call _SYSFILEDELETE
		};
	}
	if (sys_number == SYS_FILE_WRITE) {
		_asm {
			.include "interrupts.asm"
			extern _SYSWRITEFILE
			call _SYSWRITEFILE
		}
	}
	if (sys_number == SYS_MOUSE_CURSOR_MOVED) {
		_asm {
			.include "interrupts.asm"
			extern _SYSMOUSECURSORMOVED
			call _SYSMOUSECURSORMOVED
		}
	}
	if (sys_number == SYS_WRITE_FOLDER) {
		_asm {
			.include "interrupts.asm"
			extern _SYSWRITEFOLDER
			call _SYSWRITEFOLDER
		}
	}
	if (sys_number == SYS_DELETE_FOLDER) {
		_asm {
			.include "interrupts.asm"
			extern _SYSDELETEFOLDER
			call _SYSDELETEFOLDER
		}
	}
	if (sys_number == SYS_READ_FOLDER) {
		_asm {
			.include "interrupts.asm"
			extern _SYSREADFOLDER
			call _SYSDELETEFOLDER
		}
	}
}
