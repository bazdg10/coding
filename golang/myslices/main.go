package main

import (
	"fmt"
	// "sort"
)

func main() {
	// fmt.Println("Welcome to Golang Slices!")
	// fruitList := []string{}
	// fruitList = append(fruitList, "Orange", "Pineapple")
	// fmt.Printf("Type of Fruit List is %T\n", fruitList)
	// fruitList = append(fruitList, "Watermelon", "Kiwi")
	// fmt.Println("FruitList:", fruitList)
	// x := append(fruitList[1:3])
	// fmt.Println("FruitList:", fruitList)
	// fmt.Println(x)


	// highScores := make([]int, 4)
	// highScores[0] = 234
	// highScores[1] = 345
	// highScores[2] = 981
	// highScores[3] = 878
	// fmt.Println(sort.IntsAreSorted(highScores))
	// sort.Ints(highScores)
	// fmt.Println(sort.IntsAreSorted(highScores))
	// fmt.Println("High scores:", highScores)

	courses := []string{"reactjs", "javascript", "Python", "Golang", "Java"}
	fmt.Println(courses)
	idx := 1
	courses = append(courses[:idx], courses[idx+1:]...)
	fmt.Println("courses:", courses)
}