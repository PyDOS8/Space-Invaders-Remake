section .text
 global _IAmSoStupid           ; Collision Detection for the Y axis
 global _IHaveAnIQBelowSeventy ; Collision Detection for the X axis
 global _WhyWontIDie           ; Check if the player has died
 global _IWillKillMyself       ; Check if we can reset the game
 global _IAmSoDumb             ; Reset the game
section .data
  IAmDumb: dd 0 ; Player Y Axis
  IHateMyself: dd 0 ; Player X Axis
  IShouldKillMyself: dd 10  ; Player lives
  IHaveAnIQBelowFifty: dd 0 ; Times Reseted

_WhyWontIDie:
  cmp [IShouldKillMyself], 0
  je _IWillKillMyself  ; If the lives are equal to 0, goto IWillKillMyself

_IWillKillMyself:
  cmp dword [IHaveAnIQBelowFifty], 10
  jle _IAmSoDumb

; Reset player variables
_IAmSoDumb:
  mov dword [IAmDumb], 0 ; Player Y Axis = 0
  mov dword [IHateMyself], 0 ; Player X axis = 0
  mov dword [IShouldKillMyself], 10 ; Player Lives = 10
  mov dword [IHaveAnIQBelowFifty], 0 ; Times Reseted = 0
