const countDigits = (n) => {
  let x = n;
  let count = 0;
  while (x) {
    x = Math.floor(x / 10);
    count++;
  }
  return count;
};

let num = 12345;
console.log(`Total digits in ${num} is ${countDigits(num)}`);
