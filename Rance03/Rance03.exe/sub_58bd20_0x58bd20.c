// 函数: sub_58bd20
// 地址: 0x58bd20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* eax_3

if (*(*(arg1 + 4) + 0x190) s> 0)
    eax_3 = (*(**(arg1 + 8) + 0xa4))()

char ecx_1

if (*(*(arg1 + 4) + 0x190) s> 0 && eax_3.b != 0)
    ecx_1 = 1
else
    void* esi_1 = *(arg1 + 4)
    int32_t var_8 = 2
    int32_t* var_4
    sub_42f3d0(esi_1 + 0x16c, &var_4, &var_8)
    int32_t* eax_4 = var_4
    
    if (eax_4 != *(esi_1 + 0x16c) && eax_4[5] s> 0)
        eax_3 = (*(**(arg1 + 8) + 0xa8))()
    
    if (eax_4 != *(esi_1 + 0x16c) && eax_4[5] s> 0 && eax_3.b != 0)
        ecx_1 = 1
    else
        if (*(*(arg1 + 4) + 0x194) s> 0)
            eax_3 = (*(**(arg1 + 8) + 0xac))()
        
        if (*(*(arg1 + 4) + 0x194) s<= 0 || eax_3.b == 0)
            ecx_1 = 0
        else
            ecx_1 = 1

if (*(arg1 + 0x124) s< 2 || *(arg1 + 0x128) == 0)
    eax_3.b = 0
else
    eax_3.b = 1

if (ecx_1 != 0 && eax_3.b != 0)
    void* ecx_5 = *(arg1 + 4)
    
    if (*(arg1 + 0x3bc) == *(ecx_5 + 0x160) && *(arg1 + 0x3c0) == *(ecx_5 + 0x164))
        goto label_58be0c
    
    if (*(arg1 + 0x3b0) == 0)
    label_58be27:
        void* eax_11 = *(arg1 + 4) + 0x158
        char eax_12 =
            sub_58d270(arg1 + 0x3b4, arg1, *(eax_11 + 8), *(eax_11 + 0xc), 2, 0, 1, *(arg1 + 8))
        
        if (eax_12 == 0)
            return eax_12
        
        *(arg1 + 0x3b0) = 1
        return 1
    
    sub_58d310(arg1 + 0x3b4)
    *(arg1 + 0x3b0) = 0
label_58be0c:
    
    if (*(arg1 + 0x3b0) == 0)
        goto label_58be27
else if (*(arg1 + 0x3b0) != 0)
    int32_t* ecx_8 = *(arg1 + 0x3b8)
    
    if (ecx_8 != 0)
        (*(*ecx_8 + 4))()
        *(arg1 + 0x3b8) = 0
    
    *(arg1 + 0x3bc) = 0
    *(arg1 + 0x3c0) = 0
    *(arg1 + 0x3c4) = 0
    *(arg1 + 0x3c8) = 0
    *(arg1 + 0x3cc) = 0
    *(arg1 + 0x3b0) = 0

eax_3.b = 1
return eax_3
