// 函数: sub_462a60
// 地址: 0x462a60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = arg1[1]

if (eax u>= 0x7fffffe)
    void* ecx = arg5[5]
    
    if (ecx != 0)
        sub_403160(ecx, (arg5[7] - ecx) s>> 2, 4)
        arg5[5] = 0
        arg5[6] = 0
        arg5[7] = 0
    
    sub_403160(arg5, 1, 0x20)
    sub_6d0927("map/set<T> too long")
    noreturn

arg1[1] = eax + 1
arg5[1] = arg4
void* ecx_1 = *arg1

if (arg4 == ecx_1)
    *(ecx_1 + 4) = arg5
    **arg1 = arg5
    *(*arg1 + 8) = arg5
else if (arg3 == 0)
    arg4[2] = arg5
    void* ecx_3 = *arg1
    
    if (arg4 == *(ecx_3 + 8))
        *(ecx_3 + 8) = arg5
else
    *arg4 = arg5
    void** ecx_2 = *arg1
    
    if (arg4 == *ecx_2)
        *ecx_2 = arg5

int32_t* eax_5 = arg5

if (*(arg5[1] + 0xc) == 0)
    do
        int32_t* ecx_5 = eax_5[1]
        int32_t* esi_2 = ecx_5[1]
        void* edx_1 = *esi_2
        int32_t* edx_3
        int32_t** esi_3
        
        if (ecx_5 == edx_1)
            edx_1 = esi_2[2]
            
            if (*(edx_1 + 0xc) == 0)
                goto label_462b96
            
            if (eax_5 == ecx_5[2])
                eax_5 = ecx_5
                void** edx_2 = eax_5[2]
                eax_5[2] = *edx_2
                void* ecx_7 = *edx_2
                
                if (*(ecx_7 + 0xd) == 0)
                    *(ecx_7 + 4) = eax_5
                
                edx_2[1] = eax_5[1]
                void* ecx_9 = *arg1
                
                if (eax_5 != *(ecx_9 + 4))
                    int32_t* ecx_10 = eax_5[1]
                    
                    if (eax_5 != *ecx_10)
                        ecx_10[2] = edx_2
                    else
                        *ecx_10 = edx_2
                else
                    *(ecx_9 + 4) = edx_2
                
                *edx_2 = eax_5
                eax_5[1] = edx_2
            
            *(eax_5[1] + 0xc) = 1
            *(*(eax_5[1] + 4) + 0xc) = 0
            edx_3 = *(eax_5[1] + 4)
            esi_3 = *edx_3
            *edx_3 = esi_3[2]
            void* ecx_16 = esi_3[2]
            
            if (*(ecx_16 + 0xd) == 0)
                *(ecx_16 + 4) = edx_3
            
            esi_3[1] = edx_3[1]
            void* ecx_18 = *arg1
            
            if (edx_3 != *(ecx_18 + 4))
                void** ecx_19 = edx_3[1]
                
                if (edx_3 != ecx_19[2])
                    *ecx_19 = esi_3
                    esi_3[2] = edx_3
                else
                    ecx_19[2] = esi_3
                    esi_3[2] = edx_3
            else
                *(ecx_18 + 4) = esi_3
                esi_3[2] = edx_3
            
            edx_3[1] = esi_3
        else if (*(edx_1 + 0xc) != 0)
            if (eax_5 == *ecx_5)
                eax_5 = ecx_5
                int32_t edx_4 = *eax_5
                *eax_5 = *(edx_4 + 8)
                void* ecx_24 = *(edx_4 + 8)
                
                if (*(ecx_24 + 0xd) == 0)
                    *(ecx_24 + 4) = eax_5
                
                *(edx_4 + 4) = eax_5[1]
                void* ecx_26 = *arg1
                
                if (eax_5 != *(ecx_26 + 4))
                    int32_t* ecx_27 = eax_5[1]
                    
                    if (eax_5 != ecx_27[2])
                        *ecx_27 = edx_4
                    else
                        ecx_27[2] = edx_4
                else
                    *(ecx_26 + 4) = edx_4
                
                *(edx_4 + 8) = eax_5
                eax_5[1] = edx_4
            
            *(eax_5[1] + 0xc) = 1
            *(*(eax_5[1] + 4) + 0xc) = 0
            edx_3 = *(eax_5[1] + 4)
            esi_3 = edx_3[2]
            edx_3[2] = *esi_3
            int32_t* ecx_33 = *esi_3
            
            if (*(ecx_33 + 0xd) == 0)
                ecx_33[1] = edx_3
            
            esi_3[1] = edx_3[1]
            void* ecx_35 = *arg1
            
            if (edx_3 != *(ecx_35 + 4))
                int32_t*** ecx_36 = edx_3[1]
                
                if (edx_3 != *ecx_36)
                    ecx_36[2] = esi_3
                else
                    *ecx_36 = esi_3
            else
                *(ecx_35 + 4) = esi_3
            
            *esi_3 = edx_3
            edx_3[1] = esi_3
        else
        label_462b96:
            ecx_5[3].b = 1
            *(edx_1 + 0xc) = 1
            *(*(eax_5[1] + 4) + 0xc) = 0
            eax_5 = *(eax_5[1] + 4)
    while (*(eax_5[1] + 0xc) == 0)

*(*(*arg1 + 4) + 0xc) = 1
*arg2 = arg5
return arg2
