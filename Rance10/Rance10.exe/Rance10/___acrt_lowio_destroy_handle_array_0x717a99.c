// 函数: ___acrt_lowio_destroy_handle_array
// 地址: 0x717a99
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1 == 0)
    return 

int32_t edi
int32_t var_10_1 = edi
CRITICAL_SECTION* lpCriticalSection = arg1

if (arg1 != &arg1[0x80])
    do
        DeleteCriticalSection(lpCriticalSection)
        lpCriticalSection = &lpCriticalSection[2]
    while (lpCriticalSection != &arg1[0x80])

__free_base(arg1)
