// 函数: sub_58d270
// 地址: 0x58d270
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ecx = *(arg1 + 4)

if (ecx != 0)
    (*(*ecx + 4))()
    *(arg1 + 4) = 0

*(arg1 + 8) = 0
*(arg1 + 0xc) = 0
*(arg1 + 0x10) = 0
*(arg1 + 0x14) = 0
*(arg1 + 0x18) = 0
int32_t* eax_3 = (*(*arg8 + 0x4c))()
*(arg1 + 4) = eax_3

if (eax_3 != 0)
    int32_t eax_6
    int32_t ecx_3
    int32_t edx_1
    eax_6, edx_1, ecx_3 = (*(*eax_3 + 0x30))(arg3, arg4, 1, arg5, arg6, arg7)
    
    if (eax_6.b != 0)
        *(arg1 + 0x14) = arg6
        *(arg1 + 8) = arg3
        int32_t eax_7
        eax_7.b = 1
        *(arg1 + 0xc) = arg4
        *(arg1 + 0x10) = arg7.b
        *(arg1 + 0x18) = 1
        return eax_7
    
    sub_59f4e0(eax_6, edx_1, ecx_3, 0x6e5a90, arg2)

eax_3.b = 0
return eax_3
