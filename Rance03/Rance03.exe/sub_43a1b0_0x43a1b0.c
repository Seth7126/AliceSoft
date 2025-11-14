// 函数: sub_43a1b0
// 地址: 0x43a1b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void** esi = arg3
char* arg_4

if (arg2 == 0)
label_43a26a:
    char* ecx_6
    
    if (esi[5] u< 0x10)
        ecx_6 = esi
    else
        ecx_6 = *esi
    
    bool* edi_2 = arg_4
    
    if (sub_5df0c0(ecx_6, edi_2).b == 0)
        bool cond:0_1 = esi[5] u< 0x10
        arg_4 = nullptr
        char* ecx_7
        
        if (cond:0_1)
            ecx_7 = esi
        else
            ecx_7 = *esi
        
        if (sub_5defa0(ecx_7, &arg_4) != 0)
            *edi_2 = arg_4 != 0
            return true
        
        bool cond:2_1 = esi[5] u< 0x10
        arg_4 = nullptr
        
        if (not(cond:2_1))
            esi = *esi
        
        if (sub_5df030(esi, &arg_4) == 0)
            return 0
        
        arg_4 f- 0
        bool p_3 = unimplemented  {test ah, 0x44}
        
        if (p_3)
            *edi_2 = true
            return 1
        
        *edi_2 = false
        int32_t eax_19
        eax_19.b = 1
        return 1
else
    void** edx_1
    
    if (esi[5] u< 0x10)
        edx_1 = esi
    else
        edx_1 = *esi
    
    int32_t* eax_2 = (*(*arg2 + 0x3c))(edx_1)
    
    if (eax_2 == 0)
        goto label_43a26a
    
    int32_t eax_3 = (*(*eax_2 + 4))()
    
    if (eax_3 != 0xa)
        if (eax_3 != 0xb)
            if (eax_3 == 0x2f)
                *arg_4 = (*(*eax_2 + 0x14))()
                return 1
            
            return 0
        
        (*(*eax_2 + 0x18))()
        arg2 = fconvert.s(arg1)
        arg2 f- 0f
        int32_t eax_12
        eax_12:1.b = (arg2 f== 0f ? 1 : 0) << 6 | (is_unordered.d(arg2, 0f) ? 1 : 0) << 2
            | (arg2 f< 0f ? 1 : 0)
        bool p_1 = unimplemented  {test ah, 0x44}
        
        if (not(p_1))
            *arg_4 = 0
            char* eax_14
            eax_14.b = 1
            return eax_14
        
        *arg_4 = 1
        char* eax_13
        eax_13.b = 1
        return eax_13
    
    *arg_4 = (*(*eax_2 + 0x10))() != 0
int32_t* eax_17
eax_17.b = 1
return eax_17
