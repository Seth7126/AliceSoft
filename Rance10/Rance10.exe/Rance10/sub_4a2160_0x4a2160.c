// 函数: sub_4a2160
// 地址: 0x4a2160
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void var_2c
int32_t eax_1 = __security_cookie ^ &var_2c

if ((**(arg1 + 0x38))().b != 0)
    POINT point
    __builtin_memset(&point, 0, 8)
    
    if (GetCursorPos(&point) != 0 && ScreenToClient(**(arg1 + 0x10), &point) != 0)
        RECT rect
        int32_t eax_11
        int32_t edx
        
        if (*(arg1 + 0x1f0) == 0)
            eax_11 = point.y
            edx = point.x
        label_4a2244:
            rect.right = eax_11
            rect.left = &common::CPoint::`vftable'
            rect.top = edx
            void* eax_12 = sub_4a5410(arg1 + 0xc0, &rect, arg2)
            @__security_check_cookie@4(eax_1 ^ &var_2c)
            return eax_12
        
        if (GetClientRect(**(arg1 + 0x10), &rect) != 0)
            POINT* ecx_3 = &point
            bool cond:0_1 = point.x s>= rect.right - 1
            int32_t var_20 = rect.right - 1
            
            if (cond:0_1)
                ecx_3 = &var_20
            
            edx = rect.left
            
            if (edx s< ecx_3->x)
                edx = ecx_3->x
            
            bool cond:1_1 = point.y s>= rect.bottom - 1
            var_24
            void* ecx_4 = &var_24
            var_20 = rect.bottom - 1
            eax_11 = rect.top
            
            if (cond:1_1)
                ecx_4 = &var_20
            
            point.x = edx
            
            if (eax_11 s< *ecx_4)
                eax_11 = *ecx_4
            
            point.y = eax_11
            goto label_4a2244

BOOL eax_4
eax_4.b = 0
@__security_check_cookie@4(eax_1 ^ &var_2c)
return eax_4
