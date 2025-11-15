// 函数: sub_6f74d7
// 地址: 0x6f74d7
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t esi = *(arg1 + 0x14)

if (esi == EncodePointer(nullptr))
    SetLastError(ERROR_PROC_NOT_FOUND)
    return 0

int32_t eax_1 = Concurrency::details::Security::EncodePointer(esi)
j_sub_4033e0()
return eax_1(arg2, arg3)
