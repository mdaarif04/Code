
class User {
    constructor(username, email, password) {
        this.username = username,
        this.email = email,
        this.password = password
    }
    encryptPassword(){
        return `${this.password}abc`;
    }
    uperUsername(){
        return `${this.username.toUpperCase()}`;
    }
}

const newUser = new User('Aarif','arif@gmail.com','234')
console.log(newUser.encryptPassword());
console.log(newUser.uperUsername());

