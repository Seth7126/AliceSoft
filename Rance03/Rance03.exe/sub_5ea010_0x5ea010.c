// 函数: sub_5ea010
// 地址: 0x5ea010
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1

if (*(arg1 + 0x5c) != 0)
    int32_t eax
    eax.b = 0
    return eax

int32_t eax_3

if (*(arg1 + 0x48) == 0)
label_5ea04c:
    
    if (*(arg1 + 0x68) == *(arg1 + 0x60) && *(arg1 + 0x6c) == *(arg1 + 0x64))
        void* eax_6 = *(arg1 + 0x4c)
        var_4 = nullptr
        
        if ((*(eax_6 + 4))(1, &var_4).b == 0)
            eax_3.b = 1
            return eax_3
        
        eax_3.b = var_4 != 0
        
        if (eax_3.b == 0)
            eax_3.b = 1
            return eax_3
else if ((*(**(arg1 + 0x48) + 0x10))().b == 0)
    if (*(arg1 + 0x48) == 0)
        goto label_5ea04c
    
    if ((*(**(arg1 + 0x48) + 0x3c))().b == 0)
        goto label_5ea04c

if (*(arg1 + 0x48) == 0)
    eax_3.b = 0
else if ((*(**(arg1 + 0x48) + 0x10))().b == 0 || *(arg1 + 0x48) == 0)
    eax_3.b = 0
else if ((*(**(arg1 + 0x48) + 0x3c))().b == 0
        || (*(arg1 + 0x68) == *(arg1 + 0x60) && *(arg1 + 0x6c) == *(arg1 + 0x64)))
    eax_3.b = 0
else
    eax_3.b = 1

var_4.b = eax_3.b
int32_t ecx_7

if (*(arg1 + 0xc) != 0)
    ecx_7.b = *(arg1 + 0x10) != 0

if (*(arg1 + 0xc) == 0 || zx.d(eax_3.b) != ecx_7 || *(arg1 + 0x60) != *(arg1 + 0x18)
        || *(arg1 + 0x64) != *(arg1 + 0x1c) || *(arg1 + 0x68) != *(arg1 + 0x28)
        || *(arg1 + 0x6c) != *(arg1 + 0x2c) || arg4 != *(arg1 + 0x40))
    int32_t* eax_18 = sub_5e1e30(arg1 + 0x44, arg2, arg3, *(arg1 + 0x60), *(arg1 + 0x64), 
        *(arg1 + 0x68), *(arg1 + 0x6c), arg5, arg1 + 0x4c)
    
    if (eax_18 == 0)
        eax_18.b = 0
        return eax_18
    
    if ((*(*eax_18 + 0xc))() == 0)
        (*(*eax_18 + 4))()
        int32_t eax_23
        eax_23.b = 0
        return eax_23
    
    int32_t var_14_2 = arg4
    bool cond:0_1 = sub_5e97f0(arg1 + 4, *(arg1 + 0x60), *(arg1 + 0x64), var_4, *(arg1 + 0x68), 
        *(arg1 + 0x6c), eax_18) != 0
    int32_t eax_25 = *eax_18
    
    if (not(cond:0_1))
        (*(eax_25 + 4))()
        *(arg1 + 0x5c) = 1
        eax_18.b = 0
        return eax_18
    
    (*(eax_25 + 4))()

int32_t eax_16
eax_16.b = 1
return eax_16
