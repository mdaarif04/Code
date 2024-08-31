function greetings() {
  alert(`function called with arguments ${arguments.length} arguments`);
  for (let name of arguments) alert(`Good evening ${name}`);
}

greetings("Aarif", "Raza", "Ahmad");