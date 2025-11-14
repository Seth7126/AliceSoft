// 函数: sub_58c2b0
// 地址: 0x58c2b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax

if (*(arg1 + 0x3b0) != 0)
    int32_t* ecx = *(arg1 + 0x3b8)
    
    if (ecx == 0)
        eax.b = 0
        return eax
    
    if ((*(*ecx + 0x34))().b == 0)
        eax.b = 0
        return eax
    
    int32_t* ecx_1 = *(arg1 + 8)
    int32_t* var_8_1 = ecx_1
    (*(*ecx_1 + 0x64))(0, 0x3f800000)
    int32_t ecx_3
    int32_t edx_1
    eax, ecx_3, edx_1 = sub_5344a0(arg3, 3, arg1 + 0xc, *(arg1 + 8))
    
    if (eax.b == 0)
        sub_59f4e0(eax, edx_1, ecx_3, 0x6e5850, arg2)
        enum MESSAGEBOX_RESULT eax_5
        eax_5.b = 0
        return eax_5
    
    int32_t* ecx_4 = *(arg1 + 0x3b8)
    
    if (ecx_4 != 0 && (*(*ecx_4 + 0x38))(arg2).b == 0)
        eax.b = 0
        return eax

eax.b = 1
return eax
