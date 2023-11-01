// 1. Write a JavaScript program to display the current day and time in the following format.  
// Today is : Saturday.
// Current time is : 10 AM : 30 : 38

let today = new Date();
let dayOfWeek = ["Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"];
let day = dayOfWeek[today.getDay()];
let hours = today.getHours();
let minutes = today.getMinutes();
let seconds = today.getSeconds();
if (hours < 10) {
  hours = "0" + hours;
}
if (minutes < 10) {
  minutes = "0" + minutes;
}
if (seconds < 10) {
  seconds = "0" + seconds;
}
console.log("Today is : " + day);
console.log("Current time is : " + hours + " AM : " + minutes + " : " + seconds);


// 2.Write a JavaScript program where the program takes a random integer between 1 and 10, and the user is then prompted to input a guess number. The program displays a message "Good Work" if the input matches the guess number otherwise "Not matched". 

let randomNumber = Math.floor(Math.random() * 10) + 1;
let guess = parseInt(prompt("Guess a number between 1 and 10"));
if (guess === randomNumber) {
  console.log("Good Work");
} else {
  console.log("Not matched");
}

// 3.Write a JavaScript program to calculate multiplication and division of two numbers using forms(input from the user). 

let num1 = parseInt(prompt("Enter first Number"));
let num2 = parseInt(prompt("Enter second Number"));

let mul=num1*num2;
let div=num1/num2;

console.log("Multiplication: " + num1 + "*" + num2 +"=" + mul +"\n Division: " + num1 + "/" + num2 + "=" + div);

// 4.