// 函数: sub_490180
// 地址: 0x490180
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* j

for (int32_t* i = *(arg1 + 0x1c); i != *(arg1 + 0x20); i = &i[1])
    void* edi_1 = *i
    void* ecx_1 = *(edi_1 + 0x1c)
    
    if (ecx_1 == 0)
        if (*(edi_1 + 0x20) != 0)
            j = sub_490180()
        
        if (*(edi_1 + 0x20) != 0 && j.b != 0)
            goto label_4901a3
        
        void* edi_2 = *(edi_1 + 0x24)
        
        if (edi_2 != 0)
            for (j = *(edi_2 + 0x1c); j != *(edi_2 + 0x20); j = &j[1])
                void* edx_1 = *j
                
                if (*(edx_1 + 0x14) != *(edx_1 + 0x18))
                    goto label_4901a3
    else if (*(ecx_1 + 0x14) != *(ecx_1 + 0x18))
    label_4901a3:
        j.b = 1
        return j

j.b = 0
return j
