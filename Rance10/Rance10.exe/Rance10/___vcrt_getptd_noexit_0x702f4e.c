// 函数: ___vcrt_getptd_noexit
// 地址: 0x702f4e
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (data_7e1410 == 0xffffffff)
    return 0

enum WIN32_ERROR dwErrCode = GetLastError()
int32_t result = ___vcrt_FlsGetValue(data_7e1410)

if (result == 0xffffffff)
    result = 0
else if (result == 0)
    if (sub_702885(data_7e1410, 0xffffffff) != 0)
        int32_t result_1 = __calloc_base(1, 0x28)
        BOOL eax_4
        
        if (result_1 != 0)
            eax_4 = sub_702885(data_7e1410, result_1)
        
        if (result_1 != 0 && eax_4 != 0)
            result = result_1
            result_1 = 0
        else
            result = 0
            sub_702885(data_7e1410, 0)
        
        __free_base(result_1)
    else
        result = 0

SetLastError(dwErrCode)
return result
