package main

import "fmt"

func main() {
	defer fmt.Println("World")
	defer fmt.Println("Three")
	defer fmt.Println("Two")
	defer fmt.Println("One")
	myDefer()
	fmt.Println("Hello")

// Defer will place the func body in the end of parent body
// fmt.Println("World") is executed here!
// Defer works in LIFO order
}

func myDefer() {
	for i:=0; i<5; i++ {
		defer fmt.Println(i)
	}
}