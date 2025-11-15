// 函数: sub_515190
// 地址: 0x515190
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1[1] u>= 0x3fffffe)
    sub_6d0927("map/set<T> too long")
    noreturn

int32_t* eax = sub_515530(arg5)
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
        
        if (eax_6 == ecx_1)
            ecx_1 = edx_1[2]
            
            if (*(ecx_1 + 0xc) == 0)
                goto label_515241
            
            if (esi == eax_6[2])
                esi = eax_6
                sub_44e400(arg1, esi)
            
            *(esi[1] + 0xc) = 1
            *(*(esi[1] + 4) + 0xc) = 0
            sub_44e3a0(arg1, *(esi[1] + 4))
        else if (*(ecx_1 + 0xc) != 0)
            if (esi == *eax_6)
                esi = eax_6
                sub_44e3a0(arg1, esi)
            
            *(esi[1] + 0xc) = 1
            *(*(esi[1] + 4) + 0xc) = 0
            void* ecx_5 = *(esi[1] + 4)
            int32_t* edx_2 = *(ecx_5 + 8)
            *(ecx_5 + 8) = *edx_2
            void* eax_19 = *edx_2
            
            if (*(eax_19 + 0xd) == 0)
                *(eax_19 + 4) = ecx_5
            
            edx_2[1] = *(ecx_5 + 4)
            void* eax_21 = *arg1
            
            if (ecx_5 != *(eax_21 + 4))
                int32_t** eax_22 = *(ecx_5 + 4)
                
                if (ecx_5 != *eax_22)
                    eax_22[2] = edx_2
                else
                    *eax_22 = edx_2
            else
                *(eax_21 + 4) = edx_2
            
            *edx_2 = ecx_5
            *(ecx_5 + 4) = edx_2
        else
        label_515241:
            eax_6[3].b = 1
            *(ecx_1 + 0xc) = 1
            *(*(esi[1] + 4) + 0xc) = 0
            esi = *(esi[1] + 4)
    while (*(esi[1] + 0xc) == 0)

*(*(*arg1 + 4) + 0xc) = 1
*arg2 = eax
return arg2
