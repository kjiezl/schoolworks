import java.util.Scanner

// PRACTICE CALCULATOR IN KOTLIN :D

fun calc(num1: Float, num2: Float, op: Int){
    if(op == 4 && num2 == 0.0F){
        println("Cannot divide by zero")
    } else{
        when(op){
            1 -> println("Answer: " + (num1 + num2))
            2 -> println("Answer: " + (num1 - num2))
            3 -> println("Answer: " + (num1 * num2))
            4 -> println("Answer: " + (num1 / num2))
            else -> println("Invalid operator")
        }
    }
}

fun main(){
    while(true){
        val reader = Scanner(System.`in`)

        println("[SIMPLE CALCULATOR]")
        println("<1> Add        <2> Subtract        <3> Multiply        <4> Divide")
        println("Select operator: ")

        val op = reader.nextInt()

        println("Enter first number: ")
        val num1 = reader.nextFloat()

        println("Enter second number: ")
        val num2 = reader.nextFloat()

        calc(num1, num2, op)
    }
}