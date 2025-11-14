// 函数: sub_687600
// 地址: 0x687600
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4 = 0
sub_6972e0(arg1 + 4, *(arg1 + 0x7c), *(arg1 + 0x7d), *(arg1 + 0x7e))
HGDIOBJ h = SelectObject(*(arg1 + 0x28), *(arg1 + 0x38))
COLORREF color_2 = SetTextColor(*(arg1 + 0x28), 0)
int32_t edi = 0
*(arg2 + 0x14) = 0xf
*(arg2 + 0x10) = 0
*arg2 = 0
int32_t ecx_1 = *(arg1 + 0x60)
int32_t x = ecx_1 - arg4
int32_t ebx = *(arg1 + 0x3c)
uint32_t temp0_1 = divu.dp.d(0:(*(arg1 + 0x6c) - ecx_1), ebx)
int32_t eax_12
int32_t edx_2
edx_2:eax_12 = muls.dp.d(0x2aaaaaab, arg3[1] - *arg3)
int32_t edx_3 = edx_2 s>> 2
int32_t eax_15 = (edx_3 u>> 0x1f) + edx_3

if (eax_15 s> 0)
    arg4 = 0
    int32_t ebp_1 = 0
    
    do
        if (*(arg1 + 0x64) == edi)
            SetBkColor(*(arg1 + 0x28), *(arg1 + 0x80))
        
        if (arg6 != 0 && temp0_1 == edi)
            COLORREF color = *(arg1 + 0x80)
            *(arg1 + 0x64) = edi
            SetBkColor(*(arg1 + 0x28), color)
            *(arg1 + 0x68) = *(arg1 + 0x64)
        
        if (divu.dp.d(0:(arg5 - ecx_1), ebx) == edi)
            COLORREF color_1 = *(arg1 + 0x84)
            *(arg1 + 0x68) = edi
            SetBkColor(*(arg1 + 0x28), color_1)
        
        void** lpString = *arg3 + ebp_1
        int32_t c = lpString[4]
        
        if (lpString[5] u>= 0x10)
            lpString = *lpString
        
        TextOutA(*(arg1 + 0x28), x, *(arg1 + 0x60) + arg4, lpString, c)
        SetBkColor(*(arg1 + 0x28), *(arg1 + 0x7c))
        edi += 1
        arg4 += ebx
        ebp_1 += 0x18
    while (edi s< eax_15)

SetTextColor(*(arg1 + 0x28), color_2)
SelectObject(*(arg1 + 0x28), h)
return arg2
