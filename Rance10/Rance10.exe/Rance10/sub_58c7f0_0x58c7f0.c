// 函数: sub_58c7f0
// 地址: 0x58c7f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* i_1 = arg1
int32_t* edi = *arg1
int32_t* i = *edi
i_1 = i

for (; i != edi; i = i_1)
    void* esi_1 = i[5]
    
    if (*(esi_1 + 0x2c) != 0)
    label_58c841:
        i.b = 1
        return i
    
    int32_t* j = *(esi_1 + 0x34)
    
    for (int32_t esi_2 = *(esi_1 + 0x38); j != esi_2; j = &j[1])
        void* ecx = *j
        
        if (ecx != 0)
            i, j = sub_58c200(ecx)
            
            if (i.b != 0)
                goto label_58c841
    
    sub_429080(&i_1)

i.b = 0
return i
