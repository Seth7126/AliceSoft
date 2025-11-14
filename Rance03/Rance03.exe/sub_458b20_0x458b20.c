// 函数: sub_458b20
// 地址: 0x458b20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax = arg1[1]

if (eax u>= 0x7fffffe)
    int32_t eax_1 = arg5[5]
    
    if (eax_1 != 0)
        j__free(eax_1)
        arg5[5] = 0
        arg5[6] = 0
        arg5[7] = 0
    
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
    void** ecx_1 = *arg1
    
    if (arg4 == *ecx_1)
        *ecx_1 = arg5

int32_t* esi_1 = arg5

if (*(arg5[1] + 0xc) == 0)
    do
        int32_t* eax_7 = esi_1[1]
        int32_t* edx_1 = eax_7[1]
        void* ecx_3 = *edx_1
        int32_t* ecx_5
        int32_t** edx_2
        
        if (eax_7 == ecx_3)
            ecx_3 = edx_1[2]
            
            if (*(ecx_3 + 0xc) == 0)
                goto label_458c1e
            
            if (esi_1 == eax_7[2])
                esi_1 = eax_7
                sub_418280(arg1, esi_1)
            
            *(esi_1[1] + 0xc) = 1
            *(*(esi_1[1] + 4) + 0xc) = 0
            ecx_5 = *(esi_1[1] + 4)
            edx_2 = *ecx_5
            *ecx_5 = edx_2[2]
            void* eax_13 = edx_2[2]
            
            if (*(eax_13 + 0xd) == 0)
                *(eax_13 + 4) = ecx_5
            
            edx_2[1] = ecx_5[1]
            void* eax_15 = *arg1
            
            if (ecx_5 != *(eax_15 + 4))
                void** eax_16 = ecx_5[1]
                
                if (ecx_5 != eax_16[2])
                    *eax_16 = edx_2
                    edx_2[2] = ecx_5
                else
                    eax_16[2] = edx_2
                    edx_2[2] = ecx_5
            else
                *(eax_15 + 4) = edx_2
                edx_2[2] = ecx_5
            
            ecx_5[1] = edx_2
        else if (*(ecx_3 + 0xc) != 0)
            if (esi_1 == *eax_7)
                esi_1 = eax_7
                sub_4182d0(arg1, esi_1)
            
            *(esi_1[1] + 0xc) = 1
            *(*(esi_1[1] + 4) + 0xc) = 0
            ecx_5 = *(esi_1[1] + 4)
            edx_2 = ecx_5[2]
            ecx_5[2] = *edx_2
            int32_t* eax_25 = *edx_2
            
            if (*(eax_25 + 0xd) == 0)
                eax_25[1] = ecx_5
            
            edx_2[1] = ecx_5[1]
            void* eax_27 = *arg1
            
            if (ecx_5 != *(eax_27 + 4))
                int32_t*** eax_28 = ecx_5[1]
                
                if (ecx_5 != *eax_28)
                    eax_28[2] = edx_2
                else
                    *eax_28 = edx_2
            else
                *(eax_27 + 4) = edx_2
            
            *edx_2 = ecx_5
            ecx_5[1] = edx_2
        else
        label_458c1e:
            eax_7[3].b = 1
            *(ecx_3 + 0xc) = 1
            *(*(esi_1[1] + 4) + 0xc) = 0
            esi_1 = *(esi_1[1] + 4)
    while (*(esi_1[1] + 0xc) == 0)

*(*(*arg1 + 4) + 0xc) = 1
*arg2 = arg5
return arg2
