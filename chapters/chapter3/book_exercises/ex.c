// Section 3.1 1. 
// What output do the following calls of printf produce? 
// (a) printf("%6d,%4d", 86, 1040); -> ****86 and 1040
//      %d is for normal decimal form display so the numbers preceding it are showcasing how many more spaces it can extend to, 
//      if the number has less elements then it'll fill them with spaces.
// (b) printf("%12.5e", 30.253); -> *3.02530e+01
//      its in exponential form, so according to the formula 12 shows how many characters are allowed overall, so because of the scientific notation taking up 11 slots
//      there is a space before the number
// (c) printf("%.4f", 83.162);  -> 83.1620
//      i believe in case the p or M is omitted then it extends characters to fill whatever amount it needs to occupy, and the .4f stands for the 4 characters
//      after the dot, maybe the 0 is going to be a space character in this case.
// (d) printf("%-6.2g", .0000009979); ->.00******
//      weird case, still dont get the g notation, the -6 shows that it allows 6 characters are allowed, and the 2 is to show the numbers after the . 

//      Correction If the exponent is less than −4 or greater or equal to the precision, it uses scientific notation (%e). Otherwise, it uses fixed-point (%f).
//      the number 9.979e-07 is cut to its 2 significant digits → 1.0e-06 (rounded).


// 2. Write calls of that display a float variable x in the following formats. 
// (a) Exponential notation; left-justified in a field of size 8; one digit after the decimal point. 
//      printf("%-8.1e", x);
// (b) Exponential notation; right-justified in a field of size 10; six digits after the decimal point. 
//      printf("%10.6e", x);
// (c) Fixed decimal notation; left-justified in a field of size 8; three digits after the decimal point. 
//      printf("%-8.3f", x);
// (d) Fixed decimal notation; right-justified in a field of size 6; no digits after the decimal point.
//      printf("%6.0f", x);

//Section 3.2 3. 
//For each of the following pairs of scanf format strings, indicate whether or not the two strings are equivalent. 
//If they’re not, show how they can be distinguished. 
// (a) "%d" versus " %d" 
//      I think they're equivalent, but not knowing where to look for i'm assuming from the other answers that if the space is on the left side it changes something,
//      and if the space is on the right side it doesnt, this is the answer for all of the other, so i'd say they're not equivalent

//      The main difference is that %f,d and others skip all following whitespace (tab,null,space), and wait for a non whitespace character
//      so for example "%f" and "%f " are not the same "%f" reads [29], and stops, "%f " reads [29 ] and can wait for the [ ] extra input.

//      In this case "%d" versus " %d" it doesn't matter because it skips the whitespace character before the input is registered, equivalent.
// (b) "%d-%d-%d" versus "%d -%d -%d" 
//      Here they're not equivalent
// (c) "%f" versus "%f " 
//      Not equivalent
// (d) "%f,%f" versus "%f, %f" *
//      Not equivalent

//4. Suppose that we call scanf as follows: scanf("%d%f%d", &i, &x, &j); 
//If the user enters 10.3 5 6 what will be the values of i, x, and j after the call? (
//Assume that i and j are int variables and x is a float variable.) 

//      I think that because there are no whitespace characters in the scan, it'll not read the input correctly, also because the first input is of the wrong type
//      it's 100% not going to store data correctly, maybe something like:
//      i=10 (it reaches the dot, then stores the value and the next conversion is going to search for the next character which is
//      .3 so it becomes ->); x = 0.3 ; j = 5; (and it stops reading values because it has read all it had to)

//5. Suppose that we call as follows: scanf("%f%d%f", &x, &i, &y); 
//If the user enters 12.3 45.6 789 what will be the values of x, i, and y after the call? 
//(Assume that x and y are float vari-ables and i is an int variable.) 

//      x = 12.3; i = 45; y = 0.6

//6. Show how to modify the addfrac.c program of Section 3.2 
//so that the user is allowed to enter fractions that contain spaces before and after each / character.