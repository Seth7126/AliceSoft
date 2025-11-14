// 函数: sub_5e80a0
// 地址: 0x5e80a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_34
int32_t eax_1 = __security_cookie ^ &var_34

if ((**(arg1 + 0x34))().b != 0)
    POINT point
    __builtin_memset(&point, 0, 8)
    
    if (GetCursorPos(&point) != 0 && ScreenToClient(**(arg1 + 0xc), &point) != 0)
        RECT var_1c
        int32_t y
        int32_t x
        
        if (*(arg1 + 0x1bc) == 0)
            y = point.y
            x = point.x
        label_5e81a2:
            
            if (*(arg1 + 0x3c) == 0)
                goto label_5e81e2
            
            GetClientRect(**(arg1 + 0xc), &var_1c)
            int32_t y_1 = y
            
            if (PtInRect(&var_1c, x) == 1)
                y = point.y
                x = point.x
            label_5e81e2:
                int32_t eax_16 = sub_5ea2a0(arg1 + 0x9c, x, y, arg2, arg3)
                sub_69a5bc(eax_1 ^ &var_34)
                return eax_16
        else if (GetClientRect(**(arg1 + 0xc), &var_1c) != 0)
            POINT* edx_1 = &point
            bool cond:1_1 = point.x s>= var_1c.right - 1
            int32_t var_28 = var_1c.right - 1
            
            if (cond:1_1)
                edx_1 = &var_28
            
            POINT* ecx_3 = &var_1c
            
            if (var_1c.left s< edx_1->x)
                ecx_3 = edx_1
            
            var_2c
            void* edx_2 = &var_2c
            x = ecx_3->x
            
            if (point.y s>= var_1c.bottom - 1)
                edx_2 = &var_28
            
            var_28 = var_1c.bottom - 1
            var_18
            void* ecx_4 = &var_18
            point.x = x
            
            if (var_1c.top s< *edx_2)
                ecx_4 = edx_2
            
            y = *ecx_4
            point.y = y
            goto label_5e81a2

BOOL eax_6
eax_6.b = 0
sub_69a5bc(eax_1 ^ &var_34)
return eax_6
