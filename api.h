#if CODE

// note: furnace can also import mod/s3m/xm/it

AUTORUN {
    recipe(
        // paths and extensions. final ziplevel
        "**.fur", 0,
        // conversion steps
        "ext/ext-audio-fur2wav/furnace.EXE INPUT -output OUTPUT.wav -loglevel error\n"
    );
}

#endif

