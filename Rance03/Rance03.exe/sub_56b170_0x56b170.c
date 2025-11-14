// 函数: sub_56b170
// 地址: 0x56b170
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1

for (int32_t* i = *(arg1 + 0x30); i != *(arg1 + 0x34); i = &i[1])
    void* edx_1 = *i
    
    if (edx_1 != 0)
        int32_t eax_1 = *(edx_1 + 0xc)
        
        if (eax_1 != 0 && eax_1 == 1)
            void* ecx_1 = *(edx_1 + 0x37c)
            
            if (ecx_1 != 0)
                sub_584a40(ecx_1, 1)
