// 函数: sub_635570
// 地址: 0x635570
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int16_t* eax = *arg1
uint32_t edi = zx.d(*eax)

if ((arg1[0x17] & 0x100) != 0)
    eax = (*(**(arg1[0x1c] + 4) + 0x20))(edi)
    edi = zx.d(eax.w)

int16_t* arg_4
int16_t* ebp = arg_4
int16_t* esi_1 = *arg1 + 2
int32_t* edx = *(ebp + 0x14)
int16_t* eax_4

if (edx != 0)
    eax_4 = *sub_634d30(eax, edx, &arg_4, *arg1, arg1[0x14])

int32_t ecx_2

if (edx == 0 || eax_4 == *arg1)
    if (*(ebp + 0x20) != 0)
        int16_t eax_6
        
        if ((arg1[0x17] & 0x800) == 0)
            eax_6 = edi.w
        else
            uint32_t var_14_2 = edi
            eax_6 = sub_633d00(arg1[0x1c])
        
        void* edx_1 = *(ebp + 0x20)
        int32_t i = 0
        arg_4 = zx.d(eax_6)
        
        if (*(edx_1 + 4) u> 0)
            int32_t edx_2 = *(edx_1 + 8)
            
            do
                if (zx.d(*(edx_2 + (i << 1))) u<= arg_4 && arg_4 u<= zx.d(*(edx_2 + (i << 1) + 2)))
                    goto label_6356b4
                
                i += 2
            while (i u< *(*(ebp + 0x20) + 4))
    
    bool cond:1_1
    
    if (edi.w u>= 0x100)
        void* eax_13 = *(ebp + 0x1c)
        
        if (eax_13 == 0)
        label_63567e:
            uint32_t eax_16 = zx.d(ebp[0x12])
            
            if (eax_16.w == 0)
            label_63569c:
                int32_t* edx_5 = *(ebp + 0x28)
                
                if (edx_5 != 0)
                    cond:1_1 = sub_634dd0(eax_16, edx_5, edi.w, arg1[0x1c]) == 0
                    goto label_6356b2
                
                ecx_2 = 0
            else
                eax_16 = sub_633cb0(arg1[0x1c], edi, eax_16)
                
                if (eax_16.b == 0)
                    goto label_63569c
                
                ecx_2 = 1
        else
            int16_t* ecx_7 = *(eax_13 + 8)
            void* eax_15 = &ecx_7[*(eax_13 + 4)]
            
            if (ecx_7 == eax_15)
                goto label_63567e
            
            while (*ecx_7 != edi.w)
                ecx_7 = &ecx_7[1]
                
                if (ecx_7 == eax_15)
                    break
            
            if (ecx_7 == eax_15)
                goto label_63567e
            
            ecx_2 = 1
    else if (*(ebp + 0x18) == 0)
        ecx_2 = 0
    else
        uint32_t edx_3 = zx.d(edi.w)
        cond:1_1 = (*((edx_3 u>> 3) + *(ebp + 0x18)) & (1 << (edx_3.b & 7)).b) == 0
    label_6356b2:
        
        if (cond:1_1)
            ecx_2 = 0
        else
        label_6356b4:
            ecx_2 = 1
else
    esi_1 = eax_4
    ecx_2 = 1

int32_t result

if (ecx_2 == (*(ebp + 8) & 1))
    result.b = 0
    return result

*arg1 = esi_1
result.b = 1
return result
