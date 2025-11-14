// 函数: sub_4d20d0
// 地址: 0x4d20d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ecx_1 = *(*(sub_510680(*(arg1 + 0x34), arg2) + 0x70) + 0xf0)
void* eax_1

if (ecx_1 != 0)
    eax_1 = *(ecx_1 + 0x10)
    
    if (eax_1 != 0)
        void* eax_2 = *(eax_1 + 0x3c)
        
        if (eax_2 != 0)
            int32_t var_4_1 = *(eax_2 + 0x14)
            sub_490e40(ecx_1)
            void* eax_5
            eax_5.b = 1
            return eax_5
        
        int32_t var_4 = 0xffffffff
        sub_490e40(ecx_1)
        void* eax_3
        eax_3.b = 1
        return eax_3

eax_1.b = 0
return eax_1
