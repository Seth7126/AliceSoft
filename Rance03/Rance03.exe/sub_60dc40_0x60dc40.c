// 函数: sub_60dc40
// 地址: 0x60dc40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

for (int32_t* i = *(arg1 + 4); i != *(arg1 + 8); i = &i[1])
    void* edi_1 = *i
    int32_t* ecx_1 = *(edi_1 + 0xc)
    
    if (ecx_1 != 0)
        (*(*ecx_1 + 8))(ecx_1)
        *(edi_1 + 0xc) = 0

int32_t result
result.b = 1
return result
