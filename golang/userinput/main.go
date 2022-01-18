package main

import ( 
	"fmt"
	"os"
	"bufio"
)
func main() {
	fmt.Println("Welcome to user input")
	reader := bufio.NewReader(os.Stdin)
	fmt.Println("Please rate our delivery :")
	// comma ok syntax
	input, _ := reader.ReadString('\n')
	fmt.Printf("Thanks for Rating us as, %T\n", input)
	fmt.Println("Thanks for Rating us as, ", input)
}