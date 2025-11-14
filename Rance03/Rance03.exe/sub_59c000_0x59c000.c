// 函数: sub_59c000
// 地址: 0x59c000
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ecx = *(arg1 + 0x10)

if (ecx != 0)
    char eax_3
    int32_t ecx_1
    eax_3, ecx_1 = (*(*ecx + 0x38))()
    
    if (eax_3 == 0)
        if (*(arg1 + 0x10) != 0)
            int32_t var_1c_1 = ecx_1
            eax_3 = sub_59b9d0(arg1 + 0xc, *(arg1 + 0x14), *(arg1 + 0x18), *(arg1 + 0x1c), 
                *(arg1 + 0x20), *(arg1 + 0x28), *(arg1 + 0x2c), *(arg1 + 0x30), arg2)
        
        if (*(arg1 + 0x10) == 0 || eax_3 == 0)
            return 0

return sub_52b190(arg1 + 0x54, arg2) != 0
