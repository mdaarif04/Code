// false value
// Ans: false, 0, -0, BigInt 0n, "", null, undefined, Nan

// truthy value
// "0","false", [], {}, funcation(){}

// if ("0") {
//     console.log("Aarif")
// }

// Check empty or not
// Array 
const user =[]
if (user.length === 0) {
    console.log("array is empty")
}
const user1 ={}

if (Object.keys(user1).length === 0) {
    console.log("Object is empty1")
}