#include "UEFI.h"

/* File Operations */

// Writing a file
#ifndef SYS_WRITE_FILE 
  #define SYS_WRITE_FILE 0 
#endif 

// Deleting a file
#ifndef SYS_DELETE_FILE
  #define SYS_DELETE_FILE 1 
#endif 

// Reading a file
#ifndef SYS_READ_FILE
  #define SYS_READ_FILE 2
#endif

/* File Permissions */

// File Deletion 
#ifndef SYS_CAN_DELETE_FILE
  #define SYS_CAN_DELETE_FILE 3
#endif 

// File Reading
#ifndef SYS_CAN_READ_FILE
  #define SYS_CAN_READ_FILE 4
#endif

// File Writing
#ifndef SYS_CAN_WRITE_FILE
  #define SYS_CAN_WRITE_FILE 5
#endif 

void READ_SYSTEM_CALL_NUMBER(int syscall){
    if(syscall == SYS_WRITE_FILE){
        UEFI_SYS_WRITE_FILE();        
    }
    if(syscall == SYS_DELETE_FILE){
        UEFI_SYS_DELETE_FILE();
    }
    if(syscall = SYS_READ_FILE){
        UEFI_SYS_READ_FILE();
    }
    if(syscall == SYS_CAN_DELETE_FILE){
        UEFI_SYS_CAN_DELETE_FILE();
    }
    if(syscall == SYS_CAN_WRITE_FILE){
      UEFI_SYS_CAN_WRITE_FILE();
    }
}
