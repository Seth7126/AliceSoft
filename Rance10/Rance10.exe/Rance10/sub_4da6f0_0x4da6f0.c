// 函数: sub_4da6f0
// 地址: 0x4da6f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* i = *(arg1 + 0x20)
int32_t* j

for (int32_t edi = *(arg1 + 0x24); i != edi; i = &i[1])
    void* ebx_1 = *i
    void* ecx = *(ebx_1 + 0x1c)
    
    if (ecx == 0)
        if (*(ebx_1 + 0x20) != 0)
            j = sub_4da6f0()
        
        if (*(ebx_1 + 0x20) != 0 && j.b != 0)
            goto label_4da718
        
        void* ecx_2 = *(ebx_1 + 0x24)
        
        if (ecx_2 != 0)
            for (j = *(ecx_2 + 0x18); j != *(ecx_2 + 0x1c); j = &j[1])
                void* ebx_2 = *j
                
                if (*(ebx_2 + 0x10) != *(ebx_2 + 0x14))
                    goto label_4da718
    else
        j.b = *(ecx + 0x10) != *(ecx + 0x14)
        
        if (j.b != 0)
        label_4da718:
            j.b = 1
            return j

j.b = 0
return j
