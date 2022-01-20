package main

import (
	"fmt"
	"net/http"
	"io/ioutil"
	"strings"
	"net/url"
)

func main() {
	fmt.Println("Welcome to Web verb Golang!")
	// PerformGetRequest("http://localhost:5000/get")
	// PerformPostJsonRequest("http://localhost:5000/post")
	PerformPostFormRequest("http://localhost:5000/postform")
}

func PerformGetRequest(url string) {

	res, err := http.Get(url)
	errorNotNil(err)

	defer res.Body.Close()

	fmt.Println("Status Code:", res.StatusCode)
	fmt.Println("Content Length:", res.ContentLength)

	content, err := ioutil.ReadAll(res.Body)
	errorNotNil(err)
	var responseString strings.Builder
	byteCount, err := responseString.Write(content)
	errorNotNil(err)
	fmt.Println("Byte Count: ", byteCount)
	fmt.Println("Content :", responseString.String())
	fmt.Println(string(content))
}

func PerformPostJsonRequest(url string) {
	requestBody := strings.NewReader(`
		{
			"coursename": "Golang Course",
			"price": "0",
			"platform": "YouTube"
		}
	`)
	res, err := http.Post(url, "application/json", requestBody)
	errorNotNil(err)
	defer res.Body.Close()
	content, err := ioutil.ReadAll(res.Body)
	errorNotNil(err)
	var responseString strings.Builder
	byteCount, err := responseString.Write(content)
	errorNotNil(err)
	fmt.Println("Content Length :", byteCount)
	fmt.Println(responseString.String())
}

func PerformPostFormRequest(myurl string) {
	data := url.Values{}
	data.Add("firstName", "Baz")
	data.Add("lastName", "Dg")
	data.Add("Age", "21")

	res, err := http.PostForm(myurl, data)
	errorNotNil(err)
	defer res.Body.Close()
	content, err := ioutil.ReadAll(res.Body)
	errorNotNil(err)
	var responseString strings.Builder
	byteCount, err := responseString.Write(content)
	errorNotNil(err)
	fmt.Println("Content Length :", byteCount)
	fmt.Println("Content :", responseString.String())
}

func errorNotNil(err error) {
	if err != nil {
		panic(err)
	}
}