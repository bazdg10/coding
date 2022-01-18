package main

import (
	"fmt"
)

func main() {

	fmt.Println("Welcome to pointers in Golang")
	// var ptr *int
	// fmt.Println("Value of the pointer is : ", ptr)

	num := 27
	ptr := &num
	fmt.Println("Value of the pointer is : ", *ptr)
	*ptr *=2
	fmt.Println("Value of the number is :", num)

}