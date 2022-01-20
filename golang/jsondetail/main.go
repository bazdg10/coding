package main

import (
	"fmt"
	"encoding/json"
)

// private struct

type course struct {
	Name string `json:"coursename"` // The back-ticked alias is the json response's key name for this variable
	Price int	
	Platform string `json:"website"`
	Password string `json:"-"` // This ensures the password is not returned via the API
	Tags []string `json:"tags,omitempty"` // This ensures null value is not returned via the API
}

func main() {
	fmt.Println("Welcome to JSON in Golang")
	bazCourses := []course{
		{"ReactJs Bootcamp", 300, "Coursera", "abc123", []string{"frontend-dev", "javascript"}},
		{"NodeJs Bootcamp", 600, "Coursera", "abc999", []string{"backend-dev", "javascript"}},
		{"DSA Bootcamp", 1000, "Coursera", "abc786", []string{"algorithms", "data-structure"}},
		{"Golang Bootcamp", 500, "Coursera", "abc545", nil},
	}
	EncodeToJSON(bazCourses)
	dataFromWeb := []byte(`
	{
		"coursename": "DSA Bootcamp",
		"Price": 1000,
		"website": "Coursera",
		"tags": ["algorithms","data-structure"]
	}
	`)
	decodeJson(dataFromWeb)
}

func EncodeToJSON(bazCourses []course) {
	// bazCourses := []course{
	// 	{"ReactJs Bootcamp", 300, "Coursera", "abc123", []string{"frontend-dev", "javascript"}},
	// 	{"NodeJs Bootcamp", 600, "Coursera", "abc999", []string{"backend-dev", "javascript"}},
	// 	{"DSA Bootcamp", 1000, "Coursera", "abc786", []string{"algorithms", "data-structure"}},
	// 	{"Golang Bootcamp", 500, "Coursera", "abc545", nil},
	// }
	
	// package this data as JSON

	finalJSON, err := json.MarshalIndent(bazCourses, "", "\t")
	HandleError(err)
	fmt.Printf("JSON Data: %s\n", finalJSON)
}

func decodeJson(dataFromWeb []byte)  {

	checkValid := json.Valid(dataFromWeb)

	if checkValid {
		var courseToTake course
		fmt.Printf("JSON was valid!\n")
		json.Unmarshal(dataFromWeb, &courseToTake)
		fmt.Printf("%#v\n", courseToTake)
	} else {
		fmt.Printf("JSON was not valid!\n")
	}

	// More often than not, we try to manipulate the key-val pair in the JSON data.

	var myOnlineData map[string]interface{}
	json.Unmarshal(dataFromWeb, &myOnlineData)
	// fmt.Printf("%#v\n", myOnlineData)
	for key, val := range myOnlineData {
		fmt.Printf("%v: %#v\n", key, val)
	}
}

func HandleError(err error) {
	if err != nil {
		panic(err)
	}
}