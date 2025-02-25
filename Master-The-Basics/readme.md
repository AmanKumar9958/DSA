# 🏆 Master the Basics
An in depth revision of basics of JS with some questions

## ✅ Topics Covered

### Sum of Two Integers
```js
let num1 = 10;
let num2 = 20;
console.log(num1 + num2);
```

### Type Coercion
- Relation b/w integer and string
```js
// Example 1: String and number
let name = "Aman";
let age = 19;
console.log(name+age);
console.log(typeof(name+age))

// Example 2: String and string
let firstName = "Aman";
let lastName = "Kumar";
console.log(firstName + lastName);
console.log(typeof(firstName + lastName));

// Example 3: Number and Number
let num1 = 19;
let num2 = 20;
console.log(num1 + num2);
console.log(typeof(num1 + num2));
```

### User Input
```js
let age = prompt("Enter you age: ");
```

### Operators
- Arithmetic Operators: +, -, /, *, %
- Relational Operators: >, <, >=, <=, !=, ==
- Logical Operators: &&, ||
- Unary Operators: ++, --

#### Arithmetic Operators Example:
```js
let a = 20;
let b = 10;
console.log(a + b); // addition
console.log(a - b); // subtraction
console.log(a * b); // multiplication
console.log(a / b); // division -> Gives answer after round off
console.log(a % b); // modulus -> Gives remainder
```

#### Relational Operators Example:
```js
let a = 20;
let b = 10;
let c = 10;
console.log(a > b);   // a is greater than b and b is smaller than a
console.log(a < b);   // a is smaller than b and b is greater than b
console.log(a >= c);  // a is greater than or equal to c
console.log(b <= b);  // b is smaller than or equal to b
console.log(a != b);  // true
console.log(b != c);  // false
console.log(a == b);  // false
```

#### Logical Operators Example:
```js
// &&: Logical and -> Both must be true
console.log(10>5 && 10<9)   // 1st case: true & 2nd case: false --> Overall: False
console.log(10>5 && 10>9)   // 1st case: true & 2nd case: true --> Overall: True

// ||: Logical or -> Anyone can be true
console.log(10>5 || 10<9)   // 1st case: true & 2nd case: false --> Overall: True
console.log(10>5 || 10>9)   // 1st case: true & 2nd case: true --> Overall: True
```

#### Unary Operators Example:
```js
// ++: Increment
// --: Decrement

**Post Increment: **
// Post increment/decrement: use and change (eat and pay -> restaurants)
let x = 10;
let y = x++;
console.log(x); 
console.log(y);

**Note:**
1. x is incremented by 1 after used by y
2. y used the value of x before incrementing it and then after using it increases the value of x by 1

**Pre Increment: **
// Pre increment/decrement: change and use (pay and eat -> Dominos)
let p = 10;
let q = ++p;
console.log("Value of p: ", p); // p is incremented by 1 before used by q
console.log("Value of q: ", q); // q used the value of p after incrementing it

**Note:**
1. p is incremented by 1 before used by q
2. q used the value of p after incrementing it

**Question:**
let i = 11;
i = i++ + ++i;
console.log("Value of i: ", i);
```
