package main

import "fmt"

func main() {
	fmt.Println("Loops in Golang")
	days := []string {"Sunday", "Wednesday", "Thursday", "Friday", "Saturday", "Tuesday"}
	fmt.Println(days)

	// for i:=0; i<len(days); i++ {
	// 	fmt.Println(days[i])
	// }

	// for i := range days {
	// 	fmt.Printf("%v ", days[i])
	// }

	for index, day := range days {
		fmt.Printf("index is %v and value is %v\n", index, day)
	}

	rogueValue := 1

	for rogueValue<=10 {
		fmt.Printf("%d\n", rogueValue)
		rogueValue++
	}

}