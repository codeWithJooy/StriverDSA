const palindrome = (number) => {
  let x = number;
  let reverse = 0;
  while (x) {
    reverse = reverse * 10 + (x % 10);
    x = Math.floor(x / 10);
  }
  return number == reverse;
};

let number = 12321;
console.log(`Is ${number} is a palimdrome ? ${palindrome(number)}`);
