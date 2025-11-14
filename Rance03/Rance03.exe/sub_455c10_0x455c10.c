// 函数: sub_455c10
// 地址: 0x455c10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

for (int32_t* i = *(arg1 + 0x10); i != *(arg1 + 0x14); i = &i[1])
    void* edi_1 = *i
    int32_t* ecx_1 = *(edi_1 + 0x20)
    
    if (ecx_1 != 0)
        (*(*ecx_1 + 4))()
        *(edi_1 + 0x20) = 0
    
    *(edi_1 + 4) = 0
    int32_t* ecx_2 = *i
    
    if (ecx_2 != 0)
        (**ecx_2)(1)

int32_t result = *(arg1 + 0x10)
*(arg1 + 0x14) = result
return result
