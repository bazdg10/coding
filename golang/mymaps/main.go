package main

import (
	"fmt"
)

func main() {
	fmt.Println("Maps in Golang")
	languages := make(map[string]string)

	languages["JS"] = "javascript"
	languages["RB"] = "ruby"
	languages["PY"] = "python"
	fmt.Println("JS stands for", languages["JS"])
	fmt.Println("Languages:", languages)

	delete(languages, "RB")
	fmt.Println("Languages:", languages)

	for key, value := range languages {
		fmt.Printf("For Key %v, Value is %v\n", key, value)
	}

}