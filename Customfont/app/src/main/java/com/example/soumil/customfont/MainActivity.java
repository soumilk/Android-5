package com.example.soumil.customfont;

import android.graphics.Typeface;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.EditText;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {
    EditText e1,e2;
    TextView t;
    Typeface f1 , f2;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        e1=(EditText)findViewById(R.id.editText2);
        e2 =( EditText)findViewById(R.id.editText3);
        t=(TextView)findViewById(R.id.textView);
        f1 =Typeface.createFromAsset(getAssets(),"fonts/ARHERMANN.ttf");
        t.setTypeface(f1);
        f2 = Typeface.createFromAsset(getAssets(),"fonts/SCRIPTBL.TTF");
        e1.setTypeface(f2);
        e2.setTypeface(f2);
    }
}
