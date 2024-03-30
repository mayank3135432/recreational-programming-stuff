var Arr = new Array();
Arr[0]="Hi";
Arr[1]="Hello";
Arr[2]="Bye";

var Brr = new Array("Greet","Formal",21);


var Crr = Arr.concat(Brr);

var Drr = new Array(21, Arr,Brr,"hello" ,-31.21);
console.log(Drr);

var Err = Drr;
Err[1]='q'
// Arrary Join 


// Array Modify
Drr[1]=Drr.copyWithin();

console.log("New Array\n")
console.log(Drr);


console.log("\n\nNew Array piece by piece\n\n")
for(i=0;i<Drr.length;i++){
    console.log(i+"th ::  "+Drr[i]+"\n");
}