// 函数: sub_430f30
// 地址: 0x430f30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg5 s<= 0)
    return arg5

int32_t* ecx = arg3
HDC hdc = arg2
int32_t i_1 = arg5
int32_t i

do
    int32_t eax_1 = *ecx
    int32_t ebx_1 = 0
    void* const lpString = &data_6db16c
    void* const lpString_1 = &data_6db16c
    int32_t esi_1 = 0
    int32_t var_18_1 = 0
    COLORREF color = GetTextColor(hdc)
    COLORREF eax_2
    
    do
        eax_2.b = *lpString
        
        if ((eax_2.b u>= 0x81 && eax_2.b u<= 0x9f) || (eax_2.b u>= 0xe0 && eax_2.b u<= 0xef))
            if (_strncmp(lpString, 0x6dadcc, 2) != 0)
                TextOutA(hdc, eax_1 + esi_1, arg4, lpString, 2)
                eax_2 = arg1
                lpString += 2
                esi_1 += *(eax_2 + 0xc8)
                ebx_1 += 2
            else
                SetTextColor(hdc, 0xffc0c0)
                TextOutA(hdc, eax_1 + esi_1, arg4, &data_6dadd0, 2)
                SetTextColor(hdc, color)
                eax_2 = arg1
                lpString += 2
                esi_1 += *(eax_2 + 0xc8)
                ebx_1 += 2
            
            var_18_1 = ebx_1
        else if (eax_2.b != 9)
            TextOutA(hdc, eax_1 + esi_1, arg4, lpString, 1)
            lpString += 1
            int32_t eax_20
            int32_t edx_2
            edx_2:eax_20 = sx.q(*(arg1 + 0xc8))
            esi_1 += (eax_20 - edx_2) s>> 1
            eax_2 = arg1
            ebx_1 += 1
            var_18_1 = ebx_1
        else
            arg2.w = 0x20
            int32_t j_1 = 4 - (ebx_1 & 3)
            
            if (j_1 s> 0)
                var_18_1 += j_1
                int32_t j
                
                do
                    TextOutA(hdc, esi_1 + eax_1, arg4, &arg2, 1)
                    int32_t eax_13
                    int32_t edx_1
                    edx_1:eax_13 = sx.q(*(arg1 + 0xc8))
                    esi_1 += (eax_13 - edx_1) s>> 1
                    j = j_1
                    j_1 -= 1
                while (j != 1)
                lpString = lpString_1
            
            ebx_1 = var_18_1
            lpString += 1
            eax_2 = arg1
        
        lpString_1 = lpString
    while (*lpString != 0)
    
    ecx = arg3
    int32_t eax_24
    int32_t edx_3
    edx_3:eax_24 = sx.q(*(eax_2 + 0xc8))
    *ecx += (eax_24 - edx_3) s>> 1
    i = i_1
    i_1 -= 1
while (i != 1)
return arg5
