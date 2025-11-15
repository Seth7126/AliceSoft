// 函数: sub_642e40
// 地址: 0x642e40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1[1] u>= 0x28f5c27)
    sub_6d0927("map/set<T> too long")
    noreturn

int32_t* eax = sub_6436a0(arg5)
arg1[1] += 1
eax[1] = arg4
void* edx = *arg1

if (arg4 == edx)
    *(edx + 4) = eax
    **arg1 = eax
    *(*arg1 + 8) = eax
else if (arg3 == 0)
    arg4[2] = eax
    void* eax_2 = *arg1
    
    if (arg4 == *(eax_2 + 8))
        *(eax_2 + 8) = eax
else
    *arg4 = eax
    int32_t** eax_3 = *arg1
    
    if (arg4 == *eax_3)
        *eax_3 = eax

int32_t* eax_4 = eax

if (*(eax[1] + 0xc) == 0)
    do
        int32_t* ecx_2 = eax_4[1]
        int32_t* esi_1 = ecx_2[1]
        void* edx_1 = *esi_1
        int32_t* edx_3
        int32_t** esi_2
        
        if (ecx_2 == edx_1)
            edx_1 = esi_1[2]
            
            if (*(edx_1 + 0xc) == 0)
                goto label_642f68
            
            if (eax_4 == ecx_2[2])
                eax_4 = ecx_2
                int32_t** edx_2 = eax_4[2]
                eax_4[2] = *edx_2
                int32_t* ecx_4 = *edx_2
                
                if (*(ecx_4 + 0xd) == 0)
                    ecx_4[1] = eax_4
                
                edx_2[1] = eax_4[1]
                void* ecx_6 = *arg1
                
                if (eax_4 != *(ecx_6 + 4))
                    int32_t*** ecx_7 = eax_4[1]
                    
                    if (eax_4 != *ecx_7)
                        ecx_7[2] = edx_2
                    else
                        *ecx_7 = edx_2
                else
                    *(ecx_6 + 4) = edx_2
                
                *edx_2 = eax_4
                eax_4[1] = edx_2
            
            *(eax_4[1] + 0xc) = 1
            *(*(eax_4[1] + 4) + 0xc) = 0
            edx_3 = *(eax_4[1] + 4)
            esi_2 = *edx_3
            *edx_3 = esi_2[2]
            void* ecx_13 = esi_2[2]
            
            if (*(ecx_13 + 0xd) == 0)
                *(ecx_13 + 4) = edx_3
            
            esi_2[1] = edx_3[1]
            void* ecx_15 = *arg1
            
            if (edx_3 != *(ecx_15 + 4))
                void** ecx_16 = edx_3[1]
                
                if (edx_3 != ecx_16[2])
                    *ecx_16 = esi_2
                    esi_2[2] = edx_3
                else
                    ecx_16[2] = esi_2
                    esi_2[2] = edx_3
            else
                *(ecx_15 + 4) = esi_2
                esi_2[2] = edx_3
            
            edx_3[1] = esi_2
        else if (*(edx_1 + 0xc) != 0)
            if (eax_4 == *ecx_2)
                eax_4 = ecx_2
                void* edx_4 = *eax_4
                *eax_4 = *(edx_4 + 8)
                void* ecx_21 = *(edx_4 + 8)
                
                if (*(ecx_21 + 0xd) == 0)
                    *(ecx_21 + 4) = eax_4
                
                *(edx_4 + 4) = eax_4[1]
                void* ecx_23 = *arg1
                
                if (eax_4 != *(ecx_23 + 4))
                    void** ecx_24 = eax_4[1]
                    
                    if (eax_4 != ecx_24[2])
                        *ecx_24 = edx_4
                    else
                        ecx_24[2] = edx_4
                else
                    *(ecx_23 + 4) = edx_4
                
                *(edx_4 + 8) = eax_4
                eax_4[1] = edx_4
            
            *(eax_4[1] + 0xc) = 1
            *(*(eax_4[1] + 4) + 0xc) = 0
            edx_3 = *(eax_4[1] + 4)
            esi_2 = edx_3[2]
            edx_3[2] = *esi_2
            int32_t* ecx_30 = *esi_2
            
            if (*(ecx_30 + 0xd) == 0)
                ecx_30[1] = edx_3
            
            esi_2[1] = edx_3[1]
            void* ecx_32 = *arg1
            
            if (edx_3 != *(ecx_32 + 4))
                int32_t*** ecx_33 = edx_3[1]
                
                if (edx_3 != *ecx_33)
                    ecx_33[2] = esi_2
                else
                    *ecx_33 = esi_2
            else
                *(ecx_32 + 4) = esi_2
            
            *esi_2 = edx_3
            edx_3[1] = esi_2
        else
        label_642f68:
            ecx_2[3].b = 1
            *(edx_1 + 0xc) = 1
            *(*(eax_4[1] + 4) + 0xc) = 0
            eax_4 = *(eax_4[1] + 4)
    while (*(eax_4[1] + 0xc) == 0)

*(*(*arg1 + 4) + 0xc) = 1
*arg2 = eax
return arg2
