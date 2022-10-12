package com.example.tictactoe

import android.graphics.Color
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.util.Log
import android.view.View
import android.widget.Button
import android.widget.Toast
import java.util.Random
import kotlin.collections.ArrayList
import com.example.tictactoe.databinding.ActivityMainBinding

class MainActivity : AppCompatActivity() {
    private lateinit var binding: ActivityMainBinding
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)
        binding = ActivityMainBinding.inflate(layoutInflater)
    }
    fun btnClick(view:View){
        val btnSelected:Button = view as Button
        var cellId:Int = 0
        when(btnSelected.id){ //Kinda like Switch Case Construct
            R.id.button1 -> cellId = 1
            R.id.button2 -> cellId = 2
            R.id.button3 -> cellId = 3
            R.id.button4 -> cellId = 4
            R.id.button5 -> cellId = 5
            R.id.button6 -> cellId = 6
            R.id.button7 -> cellId = 7
            R.id.button8 -> cellId = 8
            R.id.button9 -> cellId = 9
        }
        //Log.d("btnClick", btnSelected.id.toString())
        //Log.d("btnClick cellId",cellId.toString())
        playGame(cellId, btnSelected)
    }

    var activePlayer:Int = 1
    var player1 = mutableListOf<Int>()
    var player2 = mutableListOf<Int>()

    fun playGame(cellId:Int, btnSelected:Button){
        if(activePlayer == 1){
            btnSelected.text = "X"
            btnSelected.setBackgroundColor(Color.parseColor("#FFFFFF"))
            player1.add(cellId)
            activePlayer = 2
            autoplay()
        }
        else{
            btnSelected.text = "O"
            //btnSelected.setBackgroundColor(R.color.white)
            btnSelected.setBackgroundColor(Color.parseColor("#FFFFFF"))
            player2.add(cellId)
            activePlayer = 1
        }
        btnSelected.isEnabled = false
        checkWinner()
    }
    fun checkWinner(){
        var winner = -1

        //player 1
            //rows
        if((player1.contains(1) && player1.contains(2) && player1.contains(3))
                    || (player1.contains(4) && player1.contains(5) && player1.contains(6))
                    || (player1.contains(7) && player1.contains(8) && player1.contains(9))){
            winner = 1
            }
            //columns
        if((player1.contains(1) && player1.contains(4) && player1.contains(7))
            || (player1.contains(2) && player1.contains(5) && player1.contains(8))
            || (player1.contains(3) && player1.contains(6) && player1.contains(9))){
            winner = 1
        }
            //diagonals
        if((player1.contains(1) && player1.contains(5) && player1.contains(9))
            || (player1.contains(7) && player1.contains(5) && player1.contains(3))){
            winner = 1
        }
        //player 2
        //rows
        if((player2.contains(1) && player2.contains(2) && player2.contains(3))
            || (player2.contains(4) && player2.contains(5) && player2.contains(6))
            || (player2.contains(7) && player2.contains(8) && player2.contains(9))){
            winner = 2
        }
        //columns
        if((player2.contains(1) && player2.contains(4) && player2.contains(7))
            || (player2.contains(2) && player2.contains(5) && player2.contains(8))
            || (player2.contains(3) && player2.contains(6) && player2.contains(9))){
            winner = 2
        }
        //diagonals
        if((player2.contains(1) && player2.contains(5) && player2.contains(9))
            || (player2.contains(7) && player2.contains(5) && player2.contains(3))){
            winner = 2
        }
        if(winner == 1){
            Toast.makeText(this,"Player 1 wins the game", Toast.LENGTH_LONG).show()
        }
        else if(winner == 2){
            Toast.makeText(this, "Player 2 wins the game", Toast.LENGTH_LONG).show()
        }

    }
    fun autoplay(){
        var emptyCells = ArrayList<Int>()
        for(cellId in 1..9){
            if(!(player1.contains(cellId) || player2.contains(cellId))){
                emptyCells.add(cellId)
            }
        }
        val r = Random()
        var randIndex = r.nextInt(emptyCells.size)
        /*if u have to had atleast 100 then
        * we would have used:
        * r.nextInt(emptyCells.size)+100
        * */
        var cellId:Int = emptyCells[randIndex]
        var btnSelected:Button?
        btnSelected = when(cellId){
            1 -> findViewById(R.id.button1)
            2 -> findViewById(R.id.button2)
            3 -> findViewById(R.id.button3)
            4 -> findViewById(R.id.button4)
            5 -> findViewById(R.id.button5)
            6 -> findViewById(R.id.button6)
            7 -> findViewById(R.id.button7)
            8 -> findViewById(R.id.button8)
            9 -> findViewById(R.id.button9)
            else -> { findViewById(R.id.button1) }
        }
        playGame(cellId, btnSelected)
    }
    fun resetbtn(view: View){
        for (id in player1){
            var btn:Button = when(id){
                1 -> findViewById(R.id.button1)
                2 -> findViewById(R.id.button2)
                3 -> findViewById(R.id.button3)
                4 -> findViewById(R.id.button4)
                5 -> findViewById(R.id.button5)
                6 -> findViewById(R.id.button6)
                7 -> findViewById(R.id.button7)
                8 -> findViewById(R.id.button8)
                9 -> findViewById(R.id.button9)
                else -> {findViewById(R.id.button1)}
            }
            btn.text = ""
            btn.setBackgroundColor(Color.parseColor("#FF018786"))
            btn.isEnabled = true
        }
        for (id in player2){
            var btn:Button = when(id){
                1 -> findViewById(R.id.button1)
                2 -> findViewById(R.id.button2)
                3 -> findViewById(R.id.button3)
                4 -> findViewById(R.id.button4)
                5 -> findViewById(R.id.button5)
                6 -> findViewById(R.id.button6)
                7 -> findViewById(R.id.button7)
                8 -> findViewById(R.id.button8)
                9 -> findViewById(R.id.button9)
                else -> {findViewById(R.id.button1)}
            }
            btn.text = ""
            btn.setBackgroundColor((Color.parseColor("#FF018786")) )
            btn.isEnabled = true
        }
        player1.clear()
        player2.clear()
        Toast.makeText(this, "New Game has started", Toast.LENGTH_SHORT).show()
    }
}