package com.example.mitesh

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.util.Log
import android.view.View
import android.widget.Button
import android.widget.Toast
import java.util.*
import kotlin.collections.ArrayList

class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)
    }
    fun buClick(view: View){
        var cellId=0
        var buSelected= view as Button

        when(buSelected.id) {
            R.id.b1 -> cellId = 1
            R.id.b2 -> cellId = 2
            R.id.b3 -> cellId = 3
            R.id.b4 -> cellId = 4
            R.id.b5 -> cellId = 5
            R.id.b6 -> cellId = 6
            R.id.b7 -> cellId = 7
            R.id.b8 -> cellId = 8
            R.id.b9 -> cellId = 9
        }

        Log.d("buClick:", buSelected.id.toString() )
        Log.d("buCLicked:", cellId.toString())

        playGame(cellId, buSelected)
    }

    var activeplayer=1
    var player1= arrayListOf<Int>()
    var player2= arrayListOf<Int>()
     fun playGame(cellId: Int, buSelected: Button) {
         if(activeplayer==1){
             buSelected.text ="X"
             buSelected.setBackgroundResource(R.color.teal_200)
             player1.add(cellId)
             activeplayer=2
             autoPlay()
         }
         else{
             buSelected.text="0"
             buSelected.setBackgroundResource(R.color.purple_700)
             player2.add(cellId)
             activeplayer=1
         }
         buSelected.isEnabled=false
         winner()
     }
    var winner = -1
   fun winner(){
       //row1
       if(player1.contains(1)&&player1.contains(2)&&player1.contains(3)){
           winner=1
       }
       if(player2.contains(1)&&player2.contains(2)&&player2.contains(3)){
           winner=2
       }

       //row2
       if(player1.contains(4)&&player1.contains(5)&&player1.contains(6)){
           winner=1
       }
       if(player2.contains(4)&&player2.contains(5)&&player2.contains(6)){
           winner=2
       }

       //row3
       if(player1.contains(7)&&player1.contains(8)&&player1.contains(9)){
           winner=1
       }
       if(player2.contains(7)&&player2.contains(8)&&player2.contains(9)){
           winner=2
       }

       //col1
       if(player1.contains(1)&&player1.contains(4)&&player1.contains(7)){
           winner=1
       }
       if(player2.contains(1)&&player2.contains(4)&&player2.contains(7)){
           winner=2
       }

       //col2
       if(player1.contains(2)&&player1.contains(5)&&player1.contains(8)){
           winner=1
       }
       if(player2.contains(2)&&player2.contains(5)&&player2.contains(8)){
           winner=2
       }

       //col3
       if(player1.contains(3)&&player1.contains(6)&&player1.contains(9)){
           winner=1
       }
       if(player2.contains(3)&&player2.contains(6)&&player2.contains(9)){
           winner=2
       }
       //dia1
       if(player1.contains(1)&&player1.contains(5)&&player1.contains(9)){
           winner=1
       }
       if(player2.contains(1)&&player2.contains(5)&&player2.contains(9)){
           winner=2
       }
       //dia2
       if(player1.contains(3)&&player1.contains(5)&&player1.contains(7)){
           winner=1
       }
       if(player2.contains(3)&&player2.contains(5)&&player2.contains(7)){
           winner=2
       }

       if (winner == 1){
           Toast.makeText(this, "Player1 wins the game", Toast.LENGTH_LONG).show()
       }

           if (winner == 2){
               Toast.makeText(this, "Player2 wins the game", Toast.LENGTH_LONG).show()
           }
   }

  fun  autoPlay(){
      var emptyCells = ArrayList<Int>()

      for(cellId in 1..9){
          if(!(player1.contains(cellId)||(player2.contains(cellId)))){
              emptyCells.add(cellId)
          }
      }

      val r=Random()
      val randCell=r.nextInt(emptyCells.size)
      var cellId= emptyCells[randCell]

      var buSelected:Button?
      buSelected= when(cellId){
          1 -> b1
          2 -> b2
          3 -> b3
          4 -> b4
          5 -> b5
          6 -> b6
          7 -> b7
          8 -> b8
          9 -> b9
          else -> b1
      }

  }

}


