const str = "My Name is Md Aarif Raza I'm software engineer";
const vowel = ["a", "e", "i", "o", "u"];

function vowelCounts(str) {
  let count = 0;
  str
    .toLowerCase()
    .split("")
    .forEach((ch) => {
      vowel.includes(ch) && count++;
    });
    return count;
}

const show = vowelCounts(str);
console.log(show);
