package main

import "fmt"

func SortTheArray(A []int) {
	low := 0
	mid := 0
	high := len(A) - 1
	for mid <= high {
		if A[mid] == 0 {
			A[low], A[mid] = A[mid], A[low]
			low++
			mid++
		} else if A[mid] == 1 {
			mid++
		} else {
			A[mid], A[high] = A[high], A[mid]
			high--
		}
	}
}

func main() {
	for {
		fmt.Print("Number of elements: ")
		var count int
		fmt.Scan(&count)
		if count == 0 {
			break
		}

		fmt.Print("Please enter the array: ")
		vec := make([]int, count)
		for i := 0; i < count; i++ {
			fmt.Scan(&vec[i])
		}

		SortTheArray(vec)
		fmt.Print("The sorted array is ")
		fmt.Println(vec)
	}
}
