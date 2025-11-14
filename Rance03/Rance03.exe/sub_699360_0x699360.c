// 函数: sub_699360
// 地址: 0x699360
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax_26 = data_75dd18

if (eax_26 u>= 0xaaaaaa9)
    j__free(arg4)
    sub_69a551("map/set<T> too long")
    noreturn

data_75dd18 = eax_26 + 1
arg4[1] = arg3
void* ecx = data_75dd14

if (arg3 == ecx)
    *(ecx + 4) = arg4
    *data_75dd14 = arg4
    *(data_75dd14 + 8) = arg4
else if (arg2 == 0)
    arg3[2] = arg4
    void* ecx_2 = data_75dd14
    
    if (arg3 == *(ecx_2 + 8))
        *(ecx_2 + 8) = arg4
else
    *arg3 = arg4
    int32_t* ecx_1 = data_75dd14
    
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
                goto label_69941e
            
            if (esi == eax_5[2])
                esi = eax_5
                sub_698f50(esi)
            
            *(esi[1] + 0xc) = 1
            *(*(esi[1] + 4) + 0xc) = 0
            sub_698fa0(*(esi[1] + 4))
        else if (*(ecx_3 + 0xc) != 0)
            if (esi == *eax_5)
                esi = eax_5
                sub_698fa0(esi)
            
            *(esi[1] + 0xc) = 1
            *(*(esi[1] + 4) + 0xc) = 0
            void* ecx_4 = *(esi[1] + 4)
            int32_t* edx_2 = *(ecx_4 + 8)
            *(ecx_4 + 8) = *edx_2
            void* eax_18 = *edx_2
            
            if (*(eax_18 + 0xd) == 0)
                *(eax_18 + 4) = ecx_4
            
            edx_2[1] = *(ecx_4 + 4)
            void* eax_20 = data_75dd14
            
            if (ecx_4 != *(eax_20 + 4))
                int32_t** eax_21 = *(ecx_4 + 4)
                
                if (ecx_4 != *eax_21)
                    eax_21[2] = edx_2
                else
                    *eax_21 = edx_2
            else
                *(eax_20 + 4) = edx_2
            
            *edx_2 = ecx_4
            *(ecx_4 + 4) = edx_2
        else
        label_69941e:
            eax_5[3].b = 1
            *(ecx_3 + 0xc) = 1
            *(*(esi[1] + 4) + 0xc) = 0
            esi = *(esi[1] + 4)
    while (*(esi[1] + 0xc) == 0)

*(*(data_75dd14 + 4) + 0xc) = 1
*arg1 = arg4
return arg1
