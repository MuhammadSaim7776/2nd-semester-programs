.386
.model flat,stdcall 
.stack 4096
ExitProcess PROTO, dwExitCode:DWORD
 .data
 .code
main PROC
                MOV AX, 0F0H; Load the value to 0F0H 
                MOV BX, 010H; Load the value to 10H
                ADD AX, BX ;Now adding the two registers AX and BX
                MOV CX, BX; Load the value 0x44C to AX
                ADD CX,AX; Now adding the total all three numbers using CX and AX

          INVOKE ExitProcess,0
          main ENDP
          END main   ;Ending the program