package main

import (
	"fmt"
	"io"
	"os"
	"io/ioutil"
)

func main() {

	fmt.Println("Welcome to files in Golang")

	content := "My github profile is: bazdg10"
	file, err := os.Create("./myGoTextFile.txt")
	if err != nil {
		panic(err) // Shuts down program by displaying error
	}

	n, err := io.WriteString(file, content)
	checkNilError(err)


	fmt.Println("Length =", n)
	defer file.Close()

	readFile("./myGoTextFile.txt")
}


func readFile(filename string) {
	dataInBytes, err := ioutil.ReadFile(filename)
	checkNilError(err)
	fmt.Println("The Data in the File is:\n", dataInBytes)
	fmt.Printf("In String: %v", string(dataInBytes))
}

func checkNilError(err error) {
	if err != nil {
		panic(err)
	}
}