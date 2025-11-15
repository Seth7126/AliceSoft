// 函数: sub_6cf660
// 地址: 0x6cf660
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax_21 = data_7fd4c8

if (eax_21 u>= 0xaaaaaa9)
    sub_403160(arg4, 1, 0x18)
    sub_6d0927("map/set<T> too long")
    noreturn

data_7fd4c8 = eax_21 + 1
arg4[1] = arg3
void* ecx = data_7fd4c4

if (arg3 == ecx)
    *(ecx + 4) = arg4
    *data_7fd4c4 = arg4
    *(data_7fd4c4 + 8) = arg4
else if (arg2 == 0)
    arg3[2] = arg4
    void* ecx_2 = data_7fd4c4
    
    if (arg3 == *(ecx_2 + 8))
        *(ecx_2 + 8) = arg4
else
    *arg3 = arg4
    int32_t* ecx_1 = data_7fd4c4
    
    if (arg3 == *ecx_1)
        *ecx_1 = arg4

int32_t* esi = arg4

if (*(arg4[1] + 0xc) == 0)
    do
        int32_t* eax_5 = esi[1]
        int32_t* edx_1 = eax_5[1]
        void* ecx_3 = *edx_1
        
        if (eax_5 == ecx_3)
            ecx_3 = edx_1[2]
            
            if (*(ecx_3 + 0xc) == 0)
                goto label_6cf71e
            
            if (esi == eax_5[2])
                esi = eax_5
                sub_6cf1c0(esi)
            
            *(esi[1] + 0xc) = 1
            *(*(esi[1] + 4) + 0xc) = 0
            sub_6cf160(*(esi[1] + 4))
        else if (*(ecx_3 + 0xc) != 0)
            if (esi == *eax_5)
                esi = eax_5
                sub_6cf160(esi)
            
            *(esi[1] + 0xc) = 1
            *(*(esi[1] + 4) + 0xc) = 0
            sub_6cf1c0(*(esi[1] + 4))
        else
        label_6cf71e:
            eax_5[3].b = 1
            *(ecx_3 + 0xc) = 1
            *(*(esi[1] + 4) + 0xc) = 0
            esi = *(esi[1] + 4)
    while (*(esi[1] + 0xc) == 0)

*(*(data_7fd4c4 + 4) + 0xc) = 1
*arg1 = arg4
return arg1
