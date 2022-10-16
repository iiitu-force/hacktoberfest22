// This is a collection of some useful functions in JavaScript, which have been proved useful to many of my projects

// Max and Min

export const max = (a, b) => (a > b ? a : b);
export const min = (a, b) => (a < b ? a : b);

// The Sleep function for to delay the execution of a process

export const sleep = (seconds) =>
	new Promise((resolve) => setTimeout(resolve, seconds * 1000));

// The function to copy the text to the clipboard

export const copy = (text) => navigator.clipboard.writeText(text);

// The function to omit a particluar key from an object

export const omit = (key, { [key]: _, ...rest }) => rest;

// The function to produce random numbers between a range

export const random = (min, max) =>
	Math.floor(Math.random() * (max - min + 1)) + min;

// The function to get a field of any object from an array of objects

export const pluck = (field, value, arr, requested) =>
	arr.find((a) => a[field] === value)[requested];

// The function to remove selected elements from an array

export const remove = (arr, ...args) => {
	let _arr = arr.slice();
	args.forEach((val) => {
		_arr.splice(_arr.indexOf(val), 1);
	});
	return _arr;
};

// The function to get the sum of an array

export const sum = (arr) => arr.reduce((a, b) => a + b, 0);

// The function to get the average of an array

export const average = (arr) => sum(arr) / arr.length;

// The function to get the median of an array

export const median = (arr) => {
    const mid = Math.floor(arr.length / 2),
        nums = [...arr].sort((a, b) => a - b);
    return arr.length % 2 !== 0 ? nums[mid] : (nums[mid - 1] + nums[mid]) / 2;
};

// The function to get the mode of an array

export const mode = (arr) => {
    return arr.sort((a, b) =>
        arr.filter((v) => v === a).length - arr.filter((v) => v === b).length
    ).pop();
}

// The function to get the range of an array

export const range = (arr) => Math.max(...arr) - Math.min(...arr);

// The function to get the standard deviation of an array

export const standardDeviation = (arr) => {
    const avg = average(arr);
    return Math.sqrt(
        arr.map((a) => Math.pow(a - avg, 2)).reduce((a, b) => a + b) /
            arr.length
    );
}

// The function to get the variance of an array

export const variance = (arr) => {
    const avg = average(arr);
    return arr.map((a) => Math.pow(a - avg, 2)).reduce((a, b) => a + b) / arr.length;
}

// The function to get the factorial of a number

export const factorial = (num) => {
    if (num === 0) return 1;
    return num * factorial(num - 1);
}

// The function to get the fibonacci series of a number

export const fibonacci = (num) => {
    if (num <= 1) return 1;
    return fibonacci(num - 1) + fibonacci(num - 2);
}

// The function to get the greatest common divisor of two numbers

export const gcd = (a, b) => {
    if (!b) return a;
    return gcd(b, a % b);
}

// The function to get the least common multiple of two numbers

export const lcm = (a, b) => (a * b) / gcd(a, b);

// The function to get the sum of digits of a number

export const sumOfDigits = (num) => {
    if (num === 0) return 0;
    return (num % 10) + sumOfDigits(Math.floor(num / 10));
}

// The function to get the reverse of a number

export const reverse = (num) => {
    if (num === 0) return 0;
    return (num % 10) * 10 ** Math.floor(Math.log10(num)) + reverse(Math.floor(num / 10));
}

// The function to get check if a number is prime or not

export const isPrime = (num) => {
    if (num === 1) return false;
    if (num === 2) return true;
    for (let i = 2; i <= Math.sqrt(num); i++) {
        if (num % i === 0) return false;
    }
    return true;
}

// The function to get the prime factors of a number

export const primeFactors = (num) => {
    let factors = [],
        divisor = 2;
    while (num >= 2) {
        if (num % divisor === 0) {
            factors.push(divisor);
            num = num / divisor;
        } else {
            divisor++;
        }
    }
    return factors;
}

// The function to get the sum of prime factors of a number

export const sumOfPrimeFactors = (num) => {
    let factors = primeFactors(num);
    return factors.reduce((a, b) => a + b, 0);
}
