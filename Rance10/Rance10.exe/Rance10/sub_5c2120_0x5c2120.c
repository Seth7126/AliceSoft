// 函数: sub_5c2120
// 地址: 0x5c2120
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* i_1 = arg1
int32_t* edi = *arg1
int32_t* i = *edi
i_1 = i

for (; i != edi; i = i_1)
    void* esi_1 = i[5]
    
    if (*(esi_1 + 0x3c) != 0)
    label_5c2171:
        i.b = 1
        return i
    
    int32_t* j = *(esi_1 + 0x48)
    
    for (int32_t esi_2 = *(esi_1 + 0x4c); j != esi_2; j = &j[1])
        void* ecx = *j
        
        if (ecx != 0)
            i, j = sub_5c1070(ecx)
            
            if (i.b != 0)
                goto label_5c2171
    
    sub_429080(&i_1)

i.b = 0
return i
