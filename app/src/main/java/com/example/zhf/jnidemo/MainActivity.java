package com.example.zhf.jnidemo;


import android.app.Activity;
import android.os.Bundle;
import android.widget.TextView;

public class MainActivity extends Activity {
    static {
        System.loadLibrary("test-lib");
    }
    // 创建native方法
    public native String getTextFromCpp();
    public native String getTextFromCpp1();
    //求和
    public native int getNumCpp();
    //for迭代
    public native int getIteratorCpp();
    //字符串
    public native String getTextShowCpp();

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        TextView show = (TextView) findViewById(R.id.show);
        TextView show1 = (TextView) findViewById(R.id.show1);
        TextView show2 = (TextView) findViewById(R.id.show2);

        show.setText(getTextFromCpp());
        show1.setText(getTextFromCpp1()+getNumCpp());
        show2.setText(getIteratorCpp()+"------->"+getTextShowCpp());
    }
}
