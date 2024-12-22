class User {
  constructor(username) {
    (this.username = username)
  }
  callMe() {
    console.log(`Username is ${this.username}`);
    
  }
}

class Teacher extends User {
  constructor(username, email, password) {
    super(username),
    (this.email = email), (this.password = password);
  }
  addCourse(){
    console.log(`A new course added by ${this.username}`);
  }
}
const newTeacher = new Teacher('Aarif','aarif@gmail.com','133')
const newUser = new User('Aarif')
newUser.callMe()
// console.log(newUser)
console.log(newTeacher instanceof User)  //check equlity using this keyword 

