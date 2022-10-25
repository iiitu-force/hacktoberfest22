package com.example.navbar

import android.content.Intent
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import androidx.fragment.app.Fragment
import com.example.navbar.databinding.ActivityMainBinding
import com.google.firebase.auth.FirebaseAuth

class MainActivity : AppCompatActivity() {
    private lateinit var firebaseAuth: FirebaseAuth
    private lateinit var binding : ActivityMainBinding
    override fun onCreate(savedInstanceState: Bundle?) {
        binding = ActivityMainBinding.inflate(layoutInflater)
        super.onCreate(savedInstanceState)
        setContentView(binding.root)
        changeFragment(home())
        firebaseAuth = FirebaseAuth.getInstance()
        binding.navbar.setOnItemSelectedListener {
            when(it.itemId){
                androidx.constraintlayout.widget.R.id.home -> changeFragment(home())
                R.id.settings -> changeFragment(settings())
                R.id.profile -> changeFragment(person())
                else -> {}
            }
            true
        }
        val email = intent.getStringExtra("email")
        binding.textView2.text ="You have been successfully Logged In." +
                "Email Id: $email"

        binding.logOutButton.setOnClickListener{
            firebaseAuth.signOut()
            var intent = Intent(this,LoginActivity::class.java)
            startActivity(intent)
        }
    }

    private fun changeFragment(fragment : Fragment){
       supportFragmentManager.beginTransaction().apply {
           replace(R.id.fl,fragment)
           commit()
       }
    }


}