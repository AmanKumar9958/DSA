# 🏆 Master the Basics
An in-depth revision of JavaScript basics with some questions.

## ✅ Topics Covered

### 🔢 Sum of Two Integers
```js
let num1 = 10;
let num2 = 20;
console.log(num1 + num2);
```

### 🔄 Type Coercion
- Relation between integer and string
```js
// Example 1: String and number
let name = "Aman";
let age = 19;
console.log(name + age);
console.log(typeof (name + age));

// Example 2: String and string
let firstName = "Aman";
let lastName = "Kumar";
console.log(firstName + lastName);
console.log(typeof (firstName + lastName));

// Example 3: Number and number
let num1 = 19;
let num2 = 20;
console.log(num1 + num2);
console.log(typeof (num1 + num2));
```

### 📝 User Input
```js
let age = prompt("Enter your age: ");
```

### ⚙️ Operators
- **Arithmetic Operators**: `+`, `-`, `/`, `*`, `%`
- **Relational Operators**: `>`, `<`, `>=`, `<=`, `!=`, `==`
- **Logical Operators**: `&&`, `||`
- **Unary Operators**: `++`, `--`

#### ➕ Arithmetic Operators Example
```js
let a = 20;
let b = 10;
console.log(a + b); // addition
console.log(a - b); // subtraction
console.log(a * b); // multiplication
console.log(a / b); // division (rounded off)
console.log(a % b); // modulus (remainder)
```

#### 🔍 Relational Operators Example
```js
let a = 20;
let b = 10;
let c = 10;
console.log(a > b);  // true
console.log(a < b);  // false
console.log(a >= c); // true
console.log(b <= b); // true
console.log(a != b); // true
console.log(b != c); // false
console.log(a == b); // false
```

#### 🔗 Logical Operators Example
```js
// &&: Logical AND (both must be true)
console.log(10 > 5 && 10 < 9);  // false
console.log(10 > 5 && 10 > 9);  // true

// ||: Logical OR (at least one must be true)
console.log(10 > 5 || 10 < 9);  // true
console.log(10 > 5 || 10 > 9);  // true
```

#### 🔼 Unary Operators Example
```js
// ++: Increment
// --: Decrement

// Post-increment: Use first, then increase
let x = 10;
let y = x++;
console.log(x); // 11
console.log(y); // 10

// Pre-increment: Increase first, then use
let p = 10;
let q = ++p;
console.log(p); // 11
console.log(q); // 11
```

### ❓ Questions
```js
let i = 11;
i = i++ + ++i;
console.log("Value of i:", i);

let m = 11, n = 22;
let o = m + n + m++ + n++ + ++m + ++n;
console.log("Value of o:", o); // 103
console.log("Value of m:", m); // 13
console.log("Value of n:", n); // 24

let g = true; // true is treated as 1
g++;
console.log("Value of g:", g); // 2
