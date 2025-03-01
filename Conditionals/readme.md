# 🏆 Master the Conditionals
An in-depth revision of Conditionals with some questions.

## ✅ Topics Covered

### 🔢 Basic Syntax of Conditionals
```js
if(12<13){
    console.log(true)
} else{
    console.log(false)
}
```

### ❓ Questions
#### Valid Voter
```js
let age = Number(prompt("Enter your age: "));
if(isNaN(age)){
    console.log("Wrong input!!");
}
else if(age >= 18){
    console.log("you are eligible to vote");
}
else{
    console.log('You are not eligible')
}
```
#### Shop Discount
```js
let amount = Number(prompt("Enter the amount: "));
if(isNaN(amount)){
    console.log("Wrong Input");
}else if(amount <= 5000){
    console.log("You will get 0% discount, amount to pay: ", amount);
} else if(amount <= 7000){
    console.log("You will get 10% discount, amount to pay: ", amount - Math.floor((10*amount)/100)," discount: ", Math.floor((10*amount)/100));
} else if(amount <= 9000){
    console.log("You will get 20% discount, amount to pay: ", amount - Math.floor((20*amount)/100)," discount: ", Math.floor((20*amount)/100));
} else{
    console.log("You will get 25% discount, amount to pay: ", amount - Math.floor((25*amount)/100)," discount: ", Math.floor((25*amount)/100));
}
```

#### Electricity Bill
```js

```