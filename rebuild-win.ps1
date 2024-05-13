$buildDir = "build"
rm -Recurse -Force $buildDir
meson setup $buildDir
pushd $buildDir
meson compile
ls
popd 