package main

import "fmt"

func split(sum int) (x, y int) {
	x = sum * 4 / 9
	y = sum - x
	if x==y { return 0, 0 }
	return
}

// taken from go tour 2.4
func main() {
	fmt.Println(split(17))
	x := 1
}

