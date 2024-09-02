﻿#if defined(_WIN32) || defined(_WIN64)
    #if defined(USE_BATTLE_EXPORTS) 
        #if defined(BATTLE_EXPORTS)
            #define BATTLE_API __declspec(dllexport)
        #else
            #define BATTLE_API __declspec(dllimport)
        #endif
    #else
        #define BATTLE_API
    #endif // USE_BATTLE_EXPORTS
#else
    #if defined(BATTLE_EXPORTS)
        #define BATTLE_API __attribute__((visibility("default")))
    #else
        #define BATTLE_API
    #endif
#endif
