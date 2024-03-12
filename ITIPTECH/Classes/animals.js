/* TUTUNGAN, JAMEEL U. 
   BSIT - 2A
*/
class Animal {
    constructor(name, specie, size, habitat, number) {
        this.name = name;
        this.specie = specie;
        this.size = size;
        this.habitat = habitat;
        this.number = number;
    }
    
    intro() {
        console.log("\t " + this.name + " is a " + this.specie + " with a size of " + this.size + " and a habitat of " + this.habitat + " and a number of " + this.number);
    }
    
    totalMass() {
        if(this.size === "small") {
            console.log("\t\t" + 10 * this.number + "kg");
        }
        else if(this.size === "medium") {
            console.log("\t\t" + 20 * this.number + "kg");
        }
        else if(this.size === "large") {
            console.log("\t\t" + 30 * this.number + "kg");
        }
        else {
            console.log("Unidentifiable mass! Error!");
        }
    }
}

const cat = new Animal("cat", "mammal", "small", "QC", 2);
const dog = new Animal("dog", "mammal", "medium", "Quiapo", 3);
const cow = new Animal("cow", "mammal", "large", "farm", 5);

console.log("\n\t<=========================| Animals |=========================>\n")
cat.intro();
dog.intro();
cow.intro();
console.log("\n\t<=========================| Weights |=========================>\n")
cat.totalMass();
dog.totalMass();
cow.totalMass();
