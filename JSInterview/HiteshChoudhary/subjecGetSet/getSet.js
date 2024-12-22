// const User = {
//     _email: "arif@gmail.co",
//     _password: "abc",

//     get password(){
//         return this._password.toUpperCase()

//     },
//     set password(value)
//     {
//         this._email = value
//     }
// }

// console.log(User.password)

// Class base

// class User {
//     constructor(email, password) {
//     this._email = email
//     this._password=  password
//     }
//     get password(){
//         return this._password.toUpperCase()

//     }
//     set password(value)
//     {
//         this._email = value
//     }
// }
// const newUser =new User('aarif@123', "avc")
// console.log(newUser);

// Function base

class User {
  constructor(email, password) {
    (this._email = email), (this._password = password);

    Object.defineProperty(this, "email", {
      get: function () {
        return this._email.toUpperCase();
      },
      set: function (value) {
        this._email = value;
      },
    });
    Object.defineProperty(this, "password", {
      get: function () {
        return this._password.toUpperCase();
      },
      set: function (value) {
        this._password = value;
      },
    });
  }
}
const newUser = new User("aarif@234", "avx");
// console.log(newUser.email);
// console.log(newUser.password);
console.log(newUser);

