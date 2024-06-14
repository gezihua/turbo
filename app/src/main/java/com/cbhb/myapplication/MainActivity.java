package com.cbhb.myapplication;

import android.app.Activity;
import android.os.Bundle;

import com.example.nativelib.NativeLib;
import com.mulei.R;

import androidx.annotation.Nullable;

/**
 * PKG com.cbhb.myapplication
 * Created by mulei on 2023/7/24.
 */
public  class MainActivity extends Activity {
    protected ScreenShotListenManager mScreenShotListenManager;
    @Override
    protected void onCreate(@Nullable Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.layout_main);
        mScreenShotListenManager =  ScreenShotListenManager.newInstance(this);
        mScreenShotListenManager.startListen();
        NativeLib.callNativeMethod();
    }
}
