// 函数: sub_478290
// 地址: 0x478290
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax = arg1[1]

if (eax u>= 0x9249248)
    j__free(arg5)
    sub_69a551("map/set<T> too long")
    noreturn

arg1[1] = eax + 1
arg5[1] = arg4
void* ecx = *arg1

if (arg4 == ecx)
    *(ecx + 4) = arg5
    **arg1 = arg5
    *(*arg1 + 8) = arg5
else if (arg3 == 0)
    arg4[2] = arg5
    void* ecx_2 = *arg1
    
    if (arg4 == *(ecx_2 + 8))
        *(ecx_2 + 8) = arg5
else
    *arg4 = arg5
    int32_t* ecx_1 = *arg1
    
    if (arg4 == *ecx_1)
        *ecx_1 = arg5

int32_t* esi = arg5

if (*(arg5[1] + 0xc) == 0)
    do
        int32_t* eax_6 = esi[1]
        int32_t* edx_1 = eax_6[1]
        void* ecx_3 = *edx_1
        int32_t* ecx_5
        int32_t** edx_2
        
        if (eax_6 == ecx_3)
            ecx_3 = edx_1[2]
            
            if (*(ecx_3 + 0xc) == 0)
                goto label_47837b
            
            if (esi == eax_6[2])
                esi = eax_6
                sub_418280(arg1, esi)
            
            *(esi[1] + 0xc) = 1
            *(*(esi[1] + 4) + 0xc) = 0
            ecx_5 = *(esi[1] + 4)
            edx_2 = *ecx_5
            *ecx_5 = edx_2[2]
            void* eax_12 = edx_2[2]
            
            if (*(eax_12 + 0xd) == 0)
                *(eax_12 + 4) = ecx_5
            
            edx_2[1] = ecx_5[1]
            void* eax_14 = *arg1
            
            if (ecx_5 != *(eax_14 + 4))
                void** eax_15 = ecx_5[1]
                
                if (ecx_5 != eax_15[2])
                    *eax_15 = edx_2
                    edx_2[2] = ecx_5
                else
                    eax_15[2] = edx_2
                    edx_2[2] = ecx_5
            else
                *(eax_14 + 4) = edx_2
                edx_2[2] = ecx_5
            
            ecx_5[1] = edx_2
        else if (*(ecx_3 + 0xc) != 0)
            if (esi == *eax_6)
                esi = eax_6
                sub_4182d0(arg1, esi)
            
            *(esi[1] + 0xc) = 1
            *(*(esi[1] + 4) + 0xc) = 0
            ecx_5 = *(esi[1] + 4)
            edx_2 = ecx_5[2]
            ecx_5[2] = *edx_2
            int32_t* eax_24 = *edx_2
            
            if (*(eax_24 + 0xd) == 0)
                eax_24[1] = ecx_5
            
            edx_2[1] = ecx_5[1]
            void* eax_26 = *arg1
            
            if (ecx_5 != *(eax_26 + 4))
                int32_t*** eax_27 = ecx_5[1]
                
                if (ecx_5 != *eax_27)
                    eax_27[2] = edx_2
                else
                    *eax_27 = edx_2
            else
                *(eax_26 + 4) = edx_2
            
            *edx_2 = ecx_5
            ecx_5[1] = edx_2
        else
        label_47837b:
            eax_6[3].b = 1
            *(ecx_3 + 0xc) = 1
            *(*(esi[1] + 4) + 0xc) = 0
            esi = *(esi[1] + 4)
    while (*(esi[1] + 0xc) == 0)

*(*(*arg1 + 4) + 0xc) = 1
*arg2 = arg5
return arg2
