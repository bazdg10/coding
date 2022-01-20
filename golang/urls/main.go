package main

import (
	"fmt"
	"net/url"
)

const myurl string = "https://lco.dev:3000/learn?coursename=reactjs&paymentid=ghij1234abc"

func main() {
	fmt.Println("Welcome to URLs in Golang")
	// fmt.Print(myurl)

	// Parsing 
	res, err := url.Parse(myurl)
	checkNilError(err)
	fmt.Println(res.Scheme)
	fmt.Println(res.Host)
	fmt.Println(res.Path)
	fmt.Println(res.Port())
	fmt.Println(res.RawQuery)

	qparams := res.Query()
	fmt.Printf("The type of qparams is %T\n", qparams)
	fmt.Printf("%v\n", qparams)

	// Creating a URL

	partsOfUrl := &url.URL{
		Scheme: "https",
		Host: "lco.dev", 
		Path: "/tutcss", 
		RawPath: "user=hitesh",
	}

	anotherUrl := partsOfUrl.String()
	fmt.Print(anotherUrl)
}

func checkNilError(err error) {
	if err != nil {
		panic(err)
	}
}