// 函数: sub_42c0d0
// 地址: 0x42c0d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

HDC hdc = arg2
int32_t ebx = 0
int32_t esi = 0
int32_t var_c = 0
COLORREF result
int32_t edx
result, edx = GetTextColor(hdc)
char* lpString = arg5
COLORREF color = result
edx.b = *lpString

if (edx.b != 0)
    int32_t y = arg4
    
    do
        if ((edx.b u>= 0x81 && edx.b u<= 0x9f) || (edx.b u>= 0xe0 && edx.b u<= 0xef))
            if (_strncmp(lpString, 0x6dadcc, 2) != 0)
                TextOutA(hdc, arg3 + esi, arg4, lpString, 2)
                result = arg1
                lpString = &lpString[2]
                esi += *(result + 0xc8)
                ebx += 2
            else
                SetTextColor(hdc, 0xffc0c0)
                TextOutA(hdc, arg3 + esi, arg4, &data_6dadd0, 2)
                SetTextColor(hdc, color)
                result = arg1
                lpString = &lpString[2]
                esi += *(result + 0xc8)
                ebx += 2
            
            var_c = ebx
        else if (edx.b != 9)
            TextOutA(hdc, arg3 + esi, y, lpString, 1)
            lpString = &lpString[1]
            int32_t eax_17
            edx:eax_17 = sx.q(*(arg1 + 0xc8))
            result = (eax_17 - edx) s>> 1
            esi += result
            ebx += 1
            var_c = ebx
        else
            arg2.w = 0x20
            result = ebx & 3
            int32_t i_1 = 4 - result
            
            if (i_1 s> 0)
                var_c += i_1
                int32_t i
                
                do
                    TextOutA(hdc, esi + arg3, y, &arg2, 1)
                    y = arg4
                    int32_t eax_11
                    edx:eax_11 = sx.q(*(arg1 + 0xc8))
                    result = (eax_11 - edx) s>> 1
                    esi += result
                    i = i_1
                    i_1 -= 1
                while (i != 1)
                lpString = arg5
            
            ebx = var_c
            lpString = &lpString[1]
        
        edx.b = *lpString
        y = arg4
        arg5 = lpString
    while (edx.b != 0)

return result
