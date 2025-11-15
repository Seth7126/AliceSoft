// 函数: ___vcrt_uninitialize_locks
// 地址: 0x70318d
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t i_1 = data_7fc424

if (i_1 != 0)
    CRITICAL_SECTION* lpCriticalSection = i_1 * 0x18 + 0x7fc3f4
    int32_t i
    
    do
        DeleteCriticalSection(lpCriticalSection)
        data_7fc424 -= 1
        lpCriticalSection -= 0x18
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t result
result.b = 1
return result
