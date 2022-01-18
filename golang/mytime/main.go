package main

import (
	"fmt"	
	"time"
)

func main() {
	fmt.Println("Welcome to time study of Golang")
	presentTime := time.Now()
	fmt.Println(presentTime)
	presentDate := presentTime.Format("01-02-2006")
	fmt.Println(presentDate)
	presentHours := presentTime.Format("15:04:05")
	fmt.Println(presentHours)
	presentDay := presentTime.Format("Monday")
	fmt.Println(presentDay)
}