package main

import "fmt"

func main() {

	x := 5
	
	if x<10 {
		fmt.Printf("%d\n", x)
	} else {
		fmt.Printf("Out of Bounds\n")
	}

	if y := 6; y<x {
		fmt.Printf("%d", x)
	} else {
		fmt.Printf("%d", y)
	}

}