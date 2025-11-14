// 函数: sub_10003236
// 地址: 0x10003236
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t edi
int32_t var_8 = edi
enum WIN32_ERROR dwErrCode = GetLastError()
void* result = sub_100030de()(data_10020118)

if (result == 0)
    result = __calloc_crt(1, 0x214)
    
    if (result != 0)
        if (sub_10003063(data_1002206c)(data_10020118, result) == 0)
            sub_10003602(result)
            result = nullptr
        else
            sub_1000314f(result, 0)
            uint32_t eax_5 = GetCurrentThreadId()
            *(result + 4) = 0xffffffff
            *result = eax_5

SetLastError(dwErrCode)
return result
