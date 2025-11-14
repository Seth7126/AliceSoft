// 函数: sub_403590
// 地址: 0x403590
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t edx_5 = arg1[2]
int32_t esi = arg1[1]
int32_t result = edx_5 - esi

if (result u>= arg2)
    return result

int32_t ebx = *arg1

if (ebx - esi - 1 u< arg2)
    sub_69a551("vector<T> too long")
    noreturn

int32_t edx = edx_5 - ebx
uint32_t esi_2 = esi - ebx + arg2
uint32_t edi_2 = edx u>> 1

if (0xffffffff - edi_2 u>= edx)
    uint32_t edx_3 = edx + edi_2
    
    if (edx_3 u< esi_2)
        edx_3 = esi_2
    
    return sub_403640(arg1, edx_3) __tailcall

uint32_t edx_1 = 0

if (0 u< esi_2)
    edx_1 = esi_2

return sub_403640(arg1, edx_1) __tailcall
