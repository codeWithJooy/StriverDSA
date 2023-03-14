const reverse = (num) => {
  let x = num;
  let number = 0;
  while (x) {
    number = number * 10 + (x % 10);
    x = Math.floor(x / 10);
  }
  return number;
};

let number = 12345;
console.log(`The reverse of number ${number} is ${reverse(number)}`);
