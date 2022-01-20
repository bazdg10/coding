package main

import (
	"fmt"
	"net/http"
	"io/ioutil"
)

const url = "https://lco.dev"

func main() {

	fmt.Println("Welcome to LCO Web Request")
	res, err := http.Get(url)
	checkNilError(err)
	fmt.Printf("Response is of type %T", res)

	defer res.Body.Close() // caller's responsibility to close the response

	dataBytes, err := ioutil.ReadAll(res.Body)	
	checkNilError(err)

	content := string(dataBytes)
	fmt.Print(content)
}

func checkNilError(err error) {
	if err != nil {
		panic(err)
	}
}