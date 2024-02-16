#include <iostream>
using namespace std;
void IncludeLinuxASMFunctions(){
   __asm{
    
    ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
    ;       Linux                           ;
    ;   The Linux version uses OpenGL       ;
    ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

    ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
    ;   Including Needed Assembly files ;
    ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

    .include "Linux/Graphics32.asm"
    .include "Linux/PlayerShip.asm"
    .include "Linux/EnemyShip.asm"
    
    ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
    ;    DOCUMENTATION FOR ASSEMBLY FILES                                                ;
    ;    The '{OS}/Graphics32.asm' file uses OpenGL to draw graphics in 32 bit mode.     ;
    ;    The '{OS}/PlayerShip.asm' file is all of the functions for the player.          ;
    ;    The '{OS}/EnemyShip.asm' file is all of the functions for the enemy.            ; 
    ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
    
    
    
    ;;;;;;;;;;;;;;;;;;;;;
    ; Player functions  ;
    ;;;;;;;;;;;;;;;;;;;;;

    extern _IAmSoStupid             ; Collision Detection for the Y Axis
    extern _IHaveAnIQBelowSeventy   ; Collision Detection for the X axis
    extern _IHaveANIQBelowTwenty    ; Check if player has died

    ;;;;;;;;;;;;;;;;;;;;;;;
    ; Enemy functions     ;
    ;;;;;;;;;;;;;;;;;;;;;;;

    extern _IHateMyself             ;  Collision Detection for the Y axis
    extern _IWillKillMyself         ;  Collsion Detection for the X axis
    extern _WhyWontIDie             ;  Check if the enemy has died
   };
}

void IncludeWindowsASMFunctions(){
    _asm{
        .8086 
        .text
            _IncludeFunctions PROC
            ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
            ;       Windows                             ;
            ;   The Windows version uses DirectX        ;
            ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

            ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
            ;   Including Needed Assembly Files ;
            ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
            
            .include "Windows/Graphics.asm"
            .include "Windows/PlayerShip.asm"
            .include "Windows/EnemyShip.asm"

            ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
            ;       Player Functions    ;
            ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

            extern _WindowsFunctionIAmSoStupid   ; Collision Detection for the Y axis
            extern _WindowsIHaveAnIQBelowSeventy ;  Collision Detection for the Y axis 
            extern _WindowsWhyWontIDie           ;  Check if the player has died

            ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
            ;        Enemy Functions    ;
            ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
        
            extern _WindowsIHateMyself          ;   Collision Detection for the Y axis
            extern _WindowsIWillKillMyself      ;   Collision Detection for the X axis
            extern _WindowsWhyWontIDie          ;   Check if the enemy has died
         _IncludeFunctions ENDP
    };
}
