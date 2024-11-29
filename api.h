#if CODE

// note: furnace can also import mod/s3m/xm/it

AUTORUN {
    if( is_file("ext/ext-audio-fur2wav/furnace" ifdef(win32,".exe", ifdef(linux,".linux",".osx"))) )
    recipe(
        // paths and extensions. expected errorlevel
        "**.fur", 0,
        // conversion steps
        "ext/ext-audio-fur2wav/furnace.EXE INPUT -output OUTPUT -loglevel error\n"
    );
}

#endif
