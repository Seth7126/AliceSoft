// 函数: sub_4a6fe0
// 地址: 0x4a6fe0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg1[1] u>= 0xccccccb)
    sub_69a551("map/set<T> too long")
    noreturn

int32_t* eax = sub_4a7180(arg5)
arg1[1] += 1
eax[1] = arg4
void* eax_1 = *arg1

if (arg4 == eax_1)
    *(eax_1 + 4) = eax
    **arg1 = eax
    *(*arg1 + 8) = eax
else if (arg3 == 0)
    arg4[2] = eax
    void* eax_3 = *arg1
    
    if (arg4 == *(eax_3 + 8))
        *(eax_3 + 8) = eax
else
    *arg4 = eax
    int32_t** eax_4 = *arg1
    
    if (arg4 == *eax_4)
        *eax_4 = eax

int32_t* esi = eax

if (*(eax[1] + 0xc) == 0)
    do
        int32_t* eax_6 = esi[1]
        int32_t* edx_1 = eax_6[1]
        void* ecx_1 = *edx_1
        int32_t* ecx_3
        int32_t** edx_2
        
        if (eax_6 == ecx_1)
            ecx_1 = edx_1[2]
            
            if (*(ecx_1 + 0xc) == 0)
                goto label_4a70cd
            
            if (esi == eax_6[2])
                esi = eax_6
                sub_418280(arg1, esi)
            
            *(esi[1] + 0xc) = 1
            *(*(esi[1] + 4) + 0xc) = 0
            ecx_3 = *(esi[1] + 4)
            edx_2 = *ecx_3
            *ecx_3 = edx_2[2]
            void* eax_12 = edx_2[2]
            
            if (*(eax_12 + 0xd) == 0)
                *(eax_12 + 4) = ecx_3
            
            edx_2[1] = ecx_3[1]
            void* eax_14 = *arg1
            
            if (ecx_3 != *(eax_14 + 4))
                void** eax_15 = ecx_3[1]
                
                if (ecx_3 != eax_15[2])
                    *eax_15 = edx_2
                    edx_2[2] = ecx_3
                else
                    eax_15[2] = edx_2
                    edx_2[2] = ecx_3
            else
                *(eax_14 + 4) = edx_2
                edx_2[2] = ecx_3
            
            ecx_3[1] = edx_2
        else if (*(ecx_1 + 0xc) != 0)
            if (esi == *eax_6)
                esi = eax_6
                sub_4182d0(arg1, esi)
            
            *(esi[1] + 0xc) = 1
            *(*(esi[1] + 4) + 0xc) = 0
            ecx_3 = *(esi[1] + 4)
            edx_2 = ecx_3[2]
            ecx_3[2] = *edx_2
            int32_t* eax_24 = *edx_2
            
            if (*(eax_24 + 0xd) == 0)
                eax_24[1] = ecx_3
            
            edx_2[1] = ecx_3[1]
            void* eax_26 = *arg1
            
            if (ecx_3 != *(eax_26 + 4))
                int32_t*** eax_27 = ecx_3[1]
                
                if (ecx_3 != *eax_27)
                    eax_27[2] = edx_2
                else
                    *eax_27 = edx_2
            else
                *(eax_26 + 4) = edx_2
            
            *edx_2 = ecx_3
            ecx_3[1] = edx_2
        else
        label_4a70cd:
            eax_6[3].b = 1
            *(ecx_1 + 0xc) = 1
            *(*(esi[1] + 4) + 0xc) = 0
            esi = *(esi[1] + 4)
    while (*(esi[1] + 0xc) == 0)

*(*(*arg1 + 4) + 0xc) = 1
*arg2 = eax
return arg2
