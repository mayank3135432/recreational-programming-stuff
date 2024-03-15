Instructions:  

run the .sh file  

enter your bool expression in stdin  

Boolean symbols used:\n  

^ is AND  

v is OR  

\> is implication (conditional)  

~ is negation  

= is equivalence (biconditional)  

  
    
      
        



_____HISTORY_______

Program I made during my 3rd semester to generate Truth Tables for given boolean statement.
I made it as writing Truth Tables by hand was tedious and error-prone.
It was helpful in checking my answers in Discrete Mathmatics assignments and more generally it was useful while proving mathematical statements to check whether a rule of inference is valid.
It can only accept upto 4 variable is p,q,r,s only. I tried extending it to n-variables but I was unsuccesful.
I am re-writing this entire program in C++ but I have'nt got around to finish it. 

15-03-2024 UPDATE
I have finally got the n-variable boolean expression evaluator to work. I ironed out the small mistakes lying in the code and troubleshooted the main problem with the hashtable function not working. Turns out I have already done it's task in the infix-to-postfix convertor function and completely forgot that I had already done it. Oops
The program finally began working as intended by yesterday night and then I began splitting up the file into tools.c and tools.h 
The ways I handled stack operations and binary strings is ...not the best. I would rewrite all of this sometime in the future.
