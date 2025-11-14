// 函数: sub_4bf1d0
// 地址: 0x4bf1d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebx = arg1[2]
int32_t esi = arg1[1]
int32_t result = (ebx - esi) s/ 0xc

if (result u>= arg2)
    return result

int32_t eax_3
int32_t edx_4
edx_4:eax_3 = muls.dp.d(0x2aaaaaab, esi - *arg1)
int32_t edx_5 = edx_4 s>> 1
int32_t esi_4 = (edx_5 u>> 0x1f) + edx_5

if (0x15555555 - esi_4 u< arg2)
    sub_69a551("vector<T> too long")
    noreturn

int32_t eax_5
int32_t edx_6
edx_6:eax_5 = muls.dp.d(0x2aaaaaab, ebx - *arg1)
int32_t esi_5 = esi_4 + arg2
int32_t edx_7 = edx_6 s>> 1
int32_t eax_8 = (edx_7 u>> 0x1f) + edx_7
uint32_t edx_9 = eax_8 u>> 1

if (0x15555555 - edx_9 u>= eax_8)
    int32_t eax_11 = eax_8 + edx_9
    
    if (eax_11 u< esi_5)
        eax_11 = esi_5
    
    return sub_4bf270(arg1, eax_11) __tailcall

int32_t eax_9 = 0

if (0 u< esi_5)
    eax_9 = esi_5

return sub_4bf270(arg1, eax_9) __tailcall
