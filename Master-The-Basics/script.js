let name = "Aman";
let age = 19;
// console.log(name+age);
// console.log(typeof(name+age))

let firstName = "Aman";
let lastName = "Kumar";
// console.log(firstName + lastName);
// console.log(typeof(firstName + lastName));

let num1 = 19;
let num2 = 20;
// console.log(num1 + num2);
// console.log(typeof(num1 + num2));

let a = 20;
let b = 10;
let c = 10;
// console.log(a > b);   // a is greater than b and b is smaller than a
// console.log(a < b);   // a is smaller than b and b is greater than b
// console.log(a >= c);  // a is greater than or equal to c
// console.log(b <= b);  // b is smaller than or equal to b
// console.log(a != b);  // true
// console.log(b != c);  // false
// console.log(a == b);  // false

// console.log(10>5 && 10<9)   // 1st case: true & 2nd case: false --> Overall: False
// console.log(10>5 && 10>9)   // 1st case: true & 2nd case: true --> Overall: True

// console.log(10>5 || 10<9)   // 1st case: true & 2nd case: false --> Overall: True
// console.log(10>5 || 10>9)   // 1st case: true & 2nd case: true --> Overall: True

// Post Increment
let x = 10;
let y = x++;
console.log("Value of x: ",x); // x is incremented by 1 after used by y
console.log("Value of y: ",y); // y used the value of x before incrementing it and then after using it increases the value of x by 1

// Pre Increment
let p = 10;
let q = ++p;
console.log("Value of p: ", p); // p is incremented by 1 before used by q
console.log("Value of q: ", q); // q used the value of p after incrementing it

// Question
let i = 11;
i = i++ + ++i;
// console.log("Value of i: ", i); // 11 + 13 = 24

let m = 11, n = 22;
let o = m + n + m++ + n++ + ++m + ++n;

console.log("Value of c: ", o); // 11 + 22 + 11 + 22 + 13 + 24 = 103
console.log("Value of m: ", m); // 13
console.log("Value of n: ", n); // 24

let g = true;   // true is equal to 1
g++;
console.log("Value of g: ", g); // 2