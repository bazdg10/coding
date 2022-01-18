package main

import "fmt"

func main() {
	fmt.Println("Welcome to Golang!")

	var fruits [3]string;
	fruits[0] = "Orange"
	fruits[1] = "Grapes"
	fruits[2] = "Kiwi"
	fmt.Println("Fruit List is :", fruits) 

	vegies := [3]string{"Potato", "Carrot", "Onion"}
	fmt.Println("Vegetables List is :", vegies) 

}