package main

import (
	"fmt"
)

func main() {
	fmt.Println("Welcome to Golang structs!")
	// There is no inheritance in Golang / No parent / No child
	baz := User{"Biswanath", "bazdg10@gmail.com", true, 16}
	fmt.Println(baz)
	fmt.Printf("Details of baz: %+v\n", baz)
}

type User struct {
	Name string
	Email string
	Status bool
	Age int
} 