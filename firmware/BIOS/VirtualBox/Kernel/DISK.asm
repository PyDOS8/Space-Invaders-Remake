bits 16
section .text
 global _ResetDisk
 global _CheckDriveStatus
 global _WriteSectors

_ResetDisk: ; This function will make the disk go to its original form
 MOV AH, 00h
 INT 13h
 RET

_CheckDriveStatus: ; This function will check the drivers status (eg. full or empty)
 MOV AH, 01h
 INT 13h
 RET

_WriteSector: ; Write to the sector
 MOV AH, 03h
 MOV CX, [0xFFFFFFFF]
 INT 13h
 RET
