// 函数: sub_636e70
// 地址: 0x636e70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax_1 = *(arg1 + 0x10)
int32_t ecx_1

if (eax_1 == 0x20)
    int32_t* ecx = data_75d544
    
    if (ecx != 0)
        ecx_1 = (*(*ecx + 8))(*(arg1 + 8), *(arg1 + 0xc), 0x20)
        
        if (ecx_1 != 0)
        label_636ec7:
            *(arg2 + 0x14) = ecx_1
            void* eax_3
            eax_3.b = 1
            return eax_3
else if (eax_1 == 0x18)
    int32_t* ecx_2 = data_75d544
    
    if (ecx_2 != 0)
        ecx_1 = (*(*ecx_2 + 0xc))(*(arg1 + 8), *(arg1 + 0xc), 0x20)
        
        if (ecx_1 != 0)
            goto label_636ec7
eax_1.b = 0
return eax_1
