var isValid = function (s) {
  const map = {
    ")": "(",
    "}": "{",
    "]": "[",
  };

  const stack = [];

  for (const char of s) {
    if (char === "(" || char === "{" || char === "[") {
      stack.push(char);
    } else {
      if (stack.length === 0 || stack[stack.length - 1] !== map[char]) {
        return false;
      }
      stack.pop();
    }
  }

  return stack.length === 0;
};
