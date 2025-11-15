// 函数: ___acrt_uninitialize_locks
// 地址: 0x70d790
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t i_1 = data_7fc5b8

if (i_1 != 0)
    int32_t edi
    int32_t var_8_1 = edi
    void* lpCriticalSection = &(&data_7fc468)[i_1 * 6]
    int32_t i
    
    do
        DeleteCriticalSection(lpCriticalSection)
        data_7fc5b8 -= 1
        lpCriticalSection -= 0x18
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t result
result.b = 1
return result
