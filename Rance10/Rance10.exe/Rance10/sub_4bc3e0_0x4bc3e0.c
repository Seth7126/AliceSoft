// 函数: sub_4bc3e0
// 地址: 0x4bc3e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = arg1[1]

if (eax u>= 0x4924923)
    sub_4bbff0(&arg5[4])
    sub_403160(arg5, 1, 0x38)
    sub_6d0927("map/set<T> too long")
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

int32_t* eax_5 = arg5

if (*(arg5[1] + 0xc) == 0)
    do
        int32_t* ecx_4 = eax_5[1]
        int32_t* esi_1 = ecx_4[1]
        void* edx_1 = *esi_1
        int32_t* edx_3
        int32_t** esi_2
        
        if (ecx_4 == edx_1)
            edx_1 = esi_1[2]
            
            if (*(edx_1 + 0xc) == 0)
                goto label_4bc506
            
            if (eax_5 == ecx_4[2])
                eax_5 = ecx_4
                void** edx_2 = eax_5[2]
                eax_5[2] = *edx_2
                void* ecx_6 = *edx_2
                
                if (*(ecx_6 + 0xd) == 0)
                    *(ecx_6 + 4) = eax_5
                
                edx_2[1] = eax_5[1]
                void* ecx_8 = *arg1
                
                if (eax_5 != *(ecx_8 + 4))
                    int32_t* ecx_9 = eax_5[1]
                    
                    if (eax_5 != *ecx_9)
                        ecx_9[2] = edx_2
                    else
                        *ecx_9 = edx_2
                else
                    *(ecx_8 + 4) = edx_2
                
                *edx_2 = eax_5
                eax_5[1] = edx_2
            
            *(eax_5[1] + 0xc) = 1
            *(*(eax_5[1] + 4) + 0xc) = 0
            edx_3 = *(eax_5[1] + 4)
            esi_2 = *edx_3
            *edx_3 = esi_2[2]
            void* ecx_15 = esi_2[2]
            
            if (*(ecx_15 + 0xd) == 0)
                *(ecx_15 + 4) = edx_3
            
            esi_2[1] = edx_3[1]
            void* ecx_17 = *arg1
            
            if (edx_3 != *(ecx_17 + 4))
                void** ecx_18 = edx_3[1]
                
                if (edx_3 != ecx_18[2])
                    *ecx_18 = esi_2
                    esi_2[2] = edx_3
                else
                    ecx_18[2] = esi_2
                    esi_2[2] = edx_3
            else
                *(ecx_17 + 4) = esi_2
                esi_2[2] = edx_3
            
            edx_3[1] = esi_2
        else if (*(edx_1 + 0xc) != 0)
            if (eax_5 == *ecx_4)
                eax_5 = ecx_4
                int32_t edx_4 = *eax_5
                *eax_5 = *(edx_4 + 8)
                void* ecx_23 = *(edx_4 + 8)
                
                if (*(ecx_23 + 0xd) == 0)
                    *(ecx_23 + 4) = eax_5
                
                *(edx_4 + 4) = eax_5[1]
                void* ecx_25 = *arg1
                
                if (eax_5 != *(ecx_25 + 4))
                    int32_t* ecx_26 = eax_5[1]
                    
                    if (eax_5 != ecx_26[2])
                        *ecx_26 = edx_4
                    else
                        ecx_26[2] = edx_4
                else
                    *(ecx_25 + 4) = edx_4
                
                *(edx_4 + 8) = eax_5
                eax_5[1] = edx_4
            
            *(eax_5[1] + 0xc) = 1
            *(*(eax_5[1] + 4) + 0xc) = 0
            edx_3 = *(eax_5[1] + 4)
            esi_2 = edx_3[2]
            edx_3[2] = *esi_2
            int32_t* ecx_32 = *esi_2
            
            if (*(ecx_32 + 0xd) == 0)
                ecx_32[1] = edx_3
            
            esi_2[1] = edx_3[1]
            void* ecx_34 = *arg1
            
            if (edx_3 != *(ecx_34 + 4))
                int32_t*** ecx_35 = edx_3[1]
                
                if (edx_3 != *ecx_35)
                    ecx_35[2] = esi_2
                else
                    *ecx_35 = esi_2
            else
                *(ecx_34 + 4) = esi_2
            
            *esi_2 = edx_3
            edx_3[1] = esi_2
        else
        label_4bc506:
            ecx_4[3].b = 1
            *(edx_1 + 0xc) = 1
            *(*(eax_5[1] + 4) + 0xc) = 0
            eax_5 = *(eax_5[1] + 4)
    while (*(eax_5[1] + 0xc) == 0)

*(*(*arg1 + 4) + 0xc) = 1
*arg2 = arg5
return arg2
