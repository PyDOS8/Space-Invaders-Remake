bits 16
section .text
 global _ResetDisk
 global _CheckDriveStatus

_ResetDisk: ; This function will make the disk go to its original form
 MOV AH, 00h
 INT 13h

_CheckDriveStatus: ; This function will check the drivers status
 MOV AH, 01h
 INT 13h
