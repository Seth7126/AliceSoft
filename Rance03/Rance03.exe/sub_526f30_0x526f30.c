// 函数: sub_526f30
// 地址: 0x526f30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

for (int32_t* i = *(arg1 + 0x50); i != *(arg1 + 0x54); i = &i[1])
    void* edi_1 = *i
    
    if (edi_1 != 0)
        void* ecx_1 = *(edi_1 + 0x224)
        
        if (ecx_1 != 0)
            sub_58a690(ecx_1)
        
        int32_t* ecx_2 = *(edi_1 + 0x220)
        
        if (ecx_2 != 0)
            (*(*ecx_2 + 4))()
            *(edi_1 + 0x220) = 0

int32_t* ecx_3 = *(arg1 + 0x10)

if (ecx_3 != 0)
    (*(*ecx_3 + 4))()
    *(arg1 + 0x10) = 0

int32_t result
result.b = 1
return result
