// Find the First Non-Repeating Character in a string.
function firstrepeat(st)
{
    let charcount = {}
    for (const char of st) {
        charcount[char] = (charcount[char] || 0 )+1;
    }
    for (const char of st) {
        if (charcount[char]===1) {
            return char
        }
    }
    return null;
}
const st1 = "aabbccd"
console.log( firstrepeat(st1));
