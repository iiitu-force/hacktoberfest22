package com.example.mitesh

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.view.View
import android.widget.Button
import android.widget.EditText
import com.example.mitesh.databinding.ActivityMainBinding


class MainActivity : AppCompatActivity() {
    private lateinit var binding: ActivityMainBinding
    private lateinit var et: EditText

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        binding = ActivityMainBinding.inflate(layoutInflater)
        setContentView(binding.root)
        et = findViewById(R.id.etshow)
    }

    fun buNumber(view: View) {

        if (newop) {
            et.setText("")
        }
        newop = false
        val buSelected = view as Button
        var buClick: String = et.text.toString()
        when (buSelected.id) {
            R.id.b0 -> buClick += 0
            R.id.b1 -> buClick += 1
            R.id.b2 -> buClick += 2
            R.id.b3 -> buClick += 3
            R.id.b4 -> buClick += 4
            R.id.b5 -> buClick += 5
            R.id.b6 -> buClick += 6
            R.id.b7 -> buClick += 7
            R.id.b8 -> buClick += 8
            R.id.b9 -> buClick += 9
            R.id.bdot -> buClick += "."
            R.id.bplusminus -> buClick = "-" + buClick


        }
        et.setText(buClick)

    }

    var op = "*"
    var oldnumber = ""
    var newop = true
    fun operation(view: View) {
        val buSelect = view as Button

        when (buSelect.id) {
            R.id.bmultiply -> {
                op = "*"
            }
            R.id.bplus -> {
                op = "+"
            }
            R.id.bminus -> {
                op = "-"
            }
            R.id.bdivide -> {
                op = "/"
            }
            R.id.bpercent -> {
                op = "%"
            }
        }
        oldnumber = et.text.toString()
        newop = true


    }

    fun equal(view: View) {
        val newNumber = et.text.toString()
        var finalValue: Double? = null
        when (op) {
            "*" -> {
                finalValue = oldnumber.toDouble() * newNumber.toDouble()
            }
            "/" -> {
                finalValue = oldnumber.toDouble() / newNumber.toDouble()
            }
            "+" -> {
                finalValue = oldnumber.toDouble() + newNumber.toDouble()
            }
            "-" -> {
                finalValue = oldnumber.toDouble() - newNumber.toDouble()
            }
            "%" -> {
                finalValue = oldnumber.toDouble() % newNumber.toDouble()
            }
        }
        et.setText(finalValue.toString())
        newop = true


    }
    fun ac(view:View){

        et.setText("")
    }
}