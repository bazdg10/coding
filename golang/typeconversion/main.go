package main

import ( 
	"fmt"
	"os"
	"bufio"
	"strconv"
	"strings"
)
func main() {
	fmt.Println("Welcome to Pizza App!")
	fmt.Println("Please rate out app")

	reader := bufio.NewReader(os.Stdin)

	input, _ := reader.ReadString('\n')

	fmt.Println("Thanks for rating us, ", input)

	numRating, err := strconv.ParseFloat(strings.TrimSpace(input), 64)

	if (err!= nil) {
		fmt.Println(err)
	} else {
		fmt.Println("Added 1 to your rating, ", numRating+1)
	}
}