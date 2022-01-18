package main

import (
	"fmt"
)

func main() {
	fmt.Println("Welcome to Golang structs!")
	// There is no inheritance in Golang / No parent / No child
	baz := User{"Biswanath", "bazdg10@gmail.com", true, 16, 10}
	fmt.Println(baz)
	fmt.Printf("Details of baz: %+v\n", baz)
	baz.GetStatus()
	baz.NewMail()
	fmt.Printf("In main, mail is %v", baz.Email)
}

type User struct {
	Name string  // public variables as the first letter is Captial 
	Email string
	Status bool
	Age int
	oneAge int   // private variable as the first letter is small
} 

// A public method of struct User is defined as follows :-

func (u User) GetStatus() {
	fmt.Println("Is user active: ", u.Status)
}

func (u User) NewMail() {
	u.Email = "baz@go.dev"
	fmt.Println("Updated Email:", u.Email)
}