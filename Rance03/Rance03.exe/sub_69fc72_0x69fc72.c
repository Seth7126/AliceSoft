// 函数: sub_69fc72
// 地址: 0x69fc72
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

enum WIN32_ERROR dwErrCode = GetLastError()
uint32_t* result = sub_69f745(data_74a564)

if (result == 0)
    result = sub_69e723(1, 0x3bc)
    
    if (result != 0)
        if (sub_69f764(data_74a564, result) == 0)
            _free(result)
            result = nullptr
        else
            __initptd(result, 0)
            uint32_t eax_3 = GetCurrentThreadId()
            result[1] = 0xffffffff
            *result = eax_3

SetLastError(dwErrCode)
return result
