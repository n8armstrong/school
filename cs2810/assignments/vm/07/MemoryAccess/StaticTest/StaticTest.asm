@111
D=A
@SP
AM=M+1
A=A-1
M=D
@333
D=A
@SP
AM=M+1
A=A-1
M=D
@888
D=A
@SP
AM=M+1
A=A-1
M=D
@StaticTest.3
D=M
@SP
AM=M+1
A=A-1
M=D
@StaticTest.1
D=M
@SP
AM=M+1
A=A-1
M=D
	 //sub
@SP
AM=M-1
D=M
A=A-1
M=D-M
@StaticTest.8
D=M
@SP
AM=M+1
A=A-1
M=D
	 //add
@SP
AM=M-1
D=M
A=A-1
M=D+M
(HALT)
@HALT
0;JMP
