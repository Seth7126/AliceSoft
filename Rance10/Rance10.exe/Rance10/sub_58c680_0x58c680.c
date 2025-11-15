// 函数: sub_58c680
// 地址: 0x58c680
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** edx = *arg1
void** eax = edx
void** esi = edx[1]

while (*(esi + 0xd) == 0)
    if (esi[4] s>= arg4)
        eax = esi
        esi = *esi
    else
        esi = esi[2]

if (eax == edx || arg4 s< eax[4])
    eax = edx

if (eax == edx)
    *arg2 = 0
    int32_t* eax_1
    eax_1.b = 0
    return eax_1

void** ecx = eax[5]
*arg2 = ecx

if (ecx != 0)
    if (*ecx != 0 && ((ecx[0xe] - ecx[0xd]) & 0xfffffffc) s> 0)
        if (arg5 s>= 0 && arg5 s< (ecx[0xe] - ecx[0xd]) s>> 2)
            eax = *(ecx[0xd] + (arg5 << 2))
        
        if (arg5 s>= 0 && arg5 s< (ecx[0xe] - ecx[0xd]) s>> 2 && eax != 0)
            *arg2 = eax
        else if (((ecx[0xe] - ecx[0xd]) & 0xfffffffc) s> 0)
            eax = *ecx[0xd]
            
            if (eax != 0)
                *arg2 = eax
    
    if (arg6 == 0)
    label_58c7db:
        
        if (*arg2 != 0)
            eax.b = 1
            return eax
    else
        void** ecx_1 = *arg2
        
        if (ecx_1 != 0)
            eax.b = *ecx_1
            int32_t ecx_3
            
            if (eax.b == 0)
                void** ecx_2 = *arg1
                eax = ecx_2
                void** edx_2 = ecx_2[1]
                
                while (*(edx_2 + 0xd) == 0)
                    if (edx_2[4] s>= arg4)
                        eax = edx_2
                        edx_2 = *edx_2
                    else
                        edx_2 = edx_2[2]
                
                if (eax == ecx_2 || arg4 s< eax[4])
                    eax = ecx_2
                
                if (eax != ecx_2)
                    ecx_1 = eax[5]
                    *arg2 = ecx_1
                    
                    if (ecx_1 != 0)
                        if (((ecx_1[0xe] - ecx_1[0xd]) & 0xfffffffc) s> 4)
                            goto label_58c7b8
                        
                        ecx_3 = 0
                        goto label_58c7bf
                else
                    *arg2 = nullptr
            else if (((ecx_1[0xe] - ecx_1[0xd]) & 0xfffffffc) s> 0)
                if (((ecx_1[0xe] - ecx_1[0xd]) & 0xfffffffc) s> 4)
                label_58c7b8:
                    ecx_3 = *(ecx_1[0xd] + 4)
                    goto label_58c7bf
                
                ecx_3 = 0
            label_58c7bf:
                *arg3 = ecx_3
                void** ecx_4 = *arg2
                
                if (((ecx_4[0xe] - ecx_4[0xd]) & 0xfffffffc) s> 0)
                    eax = *ecx_4[0xd]
                else
                    eax = nullptr
                
                *arg2 = eax
            goto label_58c7db

eax.b = 0
return eax
