# 12:10 14-01-2024
# First Hello World Assembly Program

# hello world

.global _start
.intel_syntax
.section .text

# Registers
# eax, ebx, ecx, edx, ... are general purpose registers.
# esp Points to top of stack memory
# ebp     ;     base        ;
# eip Address of next instruction to be executed

# To run a syscall, we must load appropriate values onto the registers, and then command int 0x80 to actually run the specified syscall
_start:
  #write systemcall
  # below is running system call (ie telling the OS) to print the [message] onto stdout(ebx 1)
# for write syscall, eax must be 4, ebx must be an unsigned int that tells to where we have to write, ecx must store the string we want to write and finally edx mast store the size of the string.
  mov %eax, 4 #must be 4
  mov %ebx, 1 # unsigned int fd
  # keeping 1 in %ebx to print to STDOUT
  lea %ecx, [message] # message is a variable of type char* (string)
# value of message is given in the .data section (bottom of this file)
  # lea: load effective address

  # we use lea instead of mov for memory operations in Intel
  mov %edx, 12 # size of the string
  int 0x80 


# exit syscall 
  mov %eax, 1 # syscall to exit
  mov %ebx, 65 # error_code
# error codes are similar to that in c.
# in c it is 0 for succsess and 1 for failure

  int 0x80 # invoke systemcall

# write string to stdout

.section .data 
  message:
  .ascii "Hello World\n"
