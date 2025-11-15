// 函数: sub_480b50
// 地址: 0x480b50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = arg1[1]

if (eax u>= 0xaaaaaa9)
    sub_403160(arg5, 1, 0x18)
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

int32_t* esi = arg5

if (*(arg5[1] + 0xc) == 0)
    do
        int32_t* eax_6 = esi[1]
        int32_t* edx_1 = eax_6[1]
        void* ecx_3 = *edx_1
        
        if (eax_6 == ecx_3)
            ecx_3 = edx_1[2]
            
            if (*(ecx_3 + 0xc) == 0)
                goto label_480c02
            
            if (esi == eax_6[2])
                esi = eax_6
                sub_44e400(arg1, esi)
            
            *(esi[1] + 0xc) = 1
            *(*(esi[1] + 4) + 0xc) = 0
            sub_44e3a0(arg1, *(esi[1] + 4))
        else if (*(ecx_3 + 0xc) != 0)
            if (esi == *eax_6)
                esi = eax_6
                sub_44e3a0(arg1, esi)
            
            *(esi[1] + 0xc) = 1
            *(*(esi[1] + 4) + 0xc) = 0
            void* ecx_7 = *(esi[1] + 4)
            int32_t* edx_2 = *(ecx_7 + 8)
            *(ecx_7 + 8) = *edx_2
            void* eax_19 = *edx_2
            
            if (*(eax_19 + 0xd) == 0)
                *(eax_19 + 4) = ecx_7
            
            edx_2[1] = *(ecx_7 + 4)
            void* eax_21 = *arg1
            
            if (ecx_7 != *(eax_21 + 4))
                int32_t** eax_22 = *(ecx_7 + 4)
                
                if (ecx_7 != *eax_22)
                    eax_22[2] = edx_2
                else
                    *eax_22 = edx_2
            else
                *(eax_21 + 4) = edx_2
            
            *edx_2 = ecx_7
            *(ecx_7 + 4) = edx_2
        else
        label_480c02:
            eax_6[3].b = 1
            *(ecx_3 + 0xc) = 1
            *(*(esi[1] + 4) + 0xc) = 0
            esi = *(esi[1] + 4)
    while (*(esi[1] + 0xc) == 0)

*(*(*arg1 + 4) + 0xc) = 1
*arg2 = arg5
return arg2
