package main

import "fmt"

func main() {
	fmt.Println("Welcome to functions in Golang!")
	greeter()
	greeterTwo()	
	fmt.Println("2+3 =", adder(2, 3))
	fmt.Println("2+4+4 =", proAdder(2, 4, 4))

}

// When unknown no. of values can be passed for addition

func proAdder(values ...int) int {
	total := 0
	for _, val := range values {
		total += val
	}
return total
}

func adder (val1 int, val2 int) int {
	return val1+val2
}

func greeterTwo() {
	fmt.Println("Another greeter method!")
}

func greeter() {
	fmt.Println("Yo! from Golang")
}