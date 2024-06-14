rm -rf ./app/build/outputs/apk/debug/app-debug_a.apk
$ANDROID_HOME/build-tools/32.0.0/zipalign  -v 4 ./app/build/outputs/apk/debug/app-debug.apk  ./app/build/outputs/apk/debug/app-debug_a.apk
mv ./app/build/outputs/apk/debug/app-debug_a.apk ./app/build/outputs/apk/debug/app-debug.apk
$ANDROID_HOME/build-tools/32.0.0/apksigner  sign --ks /Users/gezihua/.android/debug.keystore --ks-pass pass:android --ks-key-alias androiddebugkey --key-pass pass:android  ./app/build/outputs/apk/debug/app-debug.apk
