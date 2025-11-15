// 函数: sub_6f754f
// 地址: 0x6f754f
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t esi = *(arg1 + 0xc)

if (esi == EncodePointer(nullptr))
    SetLastError(ERROR_PROC_NOT_FOUND)
    return 0xffffffff

int32_t eax_1 = Concurrency::details::Security::EncodePointer(esi)
j_sub_4033e0()
return eax_1(arg2)
