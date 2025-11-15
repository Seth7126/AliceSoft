// 函数: ___acrt_uninitialize_winapi_thunks
// 地址: 0x715afe
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1 == 0)
    for (void* i = &data_7fc920; i != &data_7fc970; i += 4)
        if (*i != 0)
            if (*i != 0xffffffff)
                FreeLibrary(*i)
            
            *i = 0

BOOL result
result.b = 1
return result
