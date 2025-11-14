// 函数: sub_432470
// 地址: 0x432470
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_3c
int32_t result = __security_cookie ^ &var_3c
int32_t result_1 = result
void* esi = arg1

if (*(esi + 0x5c) != 0)
    arg1.b = *(esi + 0x61)
    int32_t eax_1
    
    if (arg1.b == 0)
        eax_1 = *(esi + 0x70)
    else
        eax_1 = *(esi + 0x78)
    
    int32_t eax_2
    
    if (arg1.b == 0)
        eax_2 = *(esi + 0x74)
    else
        eax_2 = *(esi + 0x7c)
    
    for (int32_t i = 0; i s< 3; i += 1)
        RECT rect_1
        GetWindowRect(*(esi + 0x5c), &rect_1)
        int32_t left = rect_1.left
        int32_t eax_4 = rect_1.right - left
        int32_t top = rect_1.top
        int32_t eax_6 = rect_1.bottom - top
        RECT rect
        GetClientRect(*(esi + 0x5c), &rect)
        int32_t eax_12
        eax_12.b = *(esi + 0x61)
        
        if (eax_12.b == 0)
            if (left s< 0)
                left = 0
            
            if (top s< 0)
                top = 0
        else
            left = 0
            top = 0
        
        int32_t eax_13
        eax_13.b = eax_12.b != 0
        SetWindowPos(*(esi + 0x5c), eax_13 - 2, left, top, eax_4 + rect.left - rect.right + eax_1, 
            eax_6 + rect.top - rect.bottom + eax_2, SWP_SHOWWINDOW)
        GetClientRect(*(esi + 0x5c), &rect)
        result = rect.right - rect.left
        
        if (result == eax_1)
            result = rect.bottom - rect.top
            
            if (result == eax_2)
                break

sub_69a5bc(result_1 ^ &var_3c)
return result
