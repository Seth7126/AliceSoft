// 函数: sub_42d3d0
// 地址: 0x42d3d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edi = arg4
void** esi = arg2
int32_t* result

if (edi == 0)
label_42d4a5:
    char* ecx_9
    
    if (esi[5] u< 0x10)
        ecx_9 = esi
    else
        ecx_9 = *esi
    
    if (sub_63a3e0(ecx_9, arg3).b == 0)
        bool cond:0_1 = esi[5] u< 0x10
        arg4 = 0f
        char* ecx_10
        
        if (cond:0_1)
            ecx_10 = esi
        else
            ecx_10 = *esi
        
        if (sub_63a2c0(ecx_10, &arg4) != 0)
            *arg3 = arg4 != 0
            return true
        
        bool cond:1_1 = esi[5] u< 0x10
        arg4 = 0f
        
        if (not(cond:1_1))
            esi = *esi
        
        if (sub_63a350(esi, &arg4) == 0)
            return 0
        
        arg4 f- 0
        bool p_3 = unimplemented  {test ah, 0x44}
        
        if (p_3)
            *arg3 = 1
            return 1
        
    label_42d466:
        *arg3 = 0
        int32_t eax_10
        eax_10.b = 1
        return 1
else
    void** ecx
    
    if (esi[5] u< 0x10)
        ecx = esi
    else
        ecx = *esi
    
    if ((*(*edi + 0x30))(ecx) == 0)
        void** ecx_3
        
        if (esi[5] u< 0x10)
            ecx_3 = esi
        else
            ecx_3 = *esi
        
        if ((*(*edi + 0x38))(ecx_3) == 0)
            void** ecx_6
            
            if (esi[5] u< 0x10)
                ecx_6 = esi
            else
                ecx_6 = *esi
            
            if ((*(*edi + 0x48))(ecx_6) == 0)
                goto label_42d4a5
            
            if (esi[5] u>= 0x10)
                esi = *esi
            
            *arg3 = (*(*edi + 0x4c))(esi)
            return 1
        
        if (esi[5] u>= 0x10)
            esi = *esi
        
        (*(*edi + 0x3c))(esi)
        long double x87_r0
        arg4 = fconvert.s(x87_r0)
        float temp0_1 = arg4
        0 f- temp0_1
        int32_t eax_9
        eax_9:1.b = (0f == temp0_1 ? 1 : 0) << 6 | (is_unordered.d(0f, temp0_1) ? 1 : 0) << 2
            | (0f < temp0_1 ? 1 : 0)
        bool p_1 = unimplemented  {test ah, 0x44}
        
        if (not(p_1))
            goto label_42d466
        
        *arg3 = 1
        return 1
    
    if (esi[5] u>= 0x10)
        esi = *esi
    
    result.b = (*(*edi + 0x34))(esi) != 0
    *arg3 = result.b

result.b = 1
return result
