// 函数: sub_637330
// 地址: 0x637330
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4_1 = arg1
uint32_t esi = zx.d(**arg1)

if ((arg1[0x17] & 0x100) != 0)
    esi = zx.d((*(**(arg1[0x1c] + 4) + 0x20))(esi))

int16_t* ebp = *arg1
int32_t* eax_5 = *(arg2 + 0x14)
int16_t* eax_6

if (eax_5 != 0)
    eax_6 = sub_636160(eax_5, arg1[0x14], ebp, eax_5)

int32_t ecx_2
int16_t* edx_2

if (eax_5 == 0 || eax_6 == ebp)
    if (*(arg2 + 0x20) != 0)
        int16_t eax_8
        
        if ((arg1[0x17] & 0x800) == 0)
            eax_8 = esi.w
        else
            uint32_t var_18_3 = esi
            eax_8 = sub_633d00(arg1[0x1c])
        
        void* edx_3 = *(arg2 + 0x20)
        int32_t i = 0
        uint32_t ebp_1 = zx.d(eax_8)
        
        if (*(edx_3 + 4) u> 0)
            int32_t edx_4 = *(edx_3 + 8)
            
            do
                if (zx.d(*(edx_4 + (i << 1))) u<= ebp_1 && ebp_1 u<= zx.d(*(edx_4 + (i << 1) + 2)))
                    goto label_6373fe
                
                i += 2
            while (i u< *(*(arg2 + 0x20) + 4))
    
    if (esi.w u>= 0x100)
        void* eax_13 = *(arg2 + 0x1c)
        
        if (eax_13 == 0)
        label_637437:
            uint32_t eax_16 = zx.d(*(arg2 + 0x24))
            
            if (eax_16.w == 0)
            label_637455:
                int32_t* edx_7 = *(arg2 + 0x28)
                
                if (edx_7 == 0)
                    ecx_2 = 0
                else if (sub_634dd0(eax_16, edx_7, esi.w, arg1[0x1c]) == 0)
                    ecx_2 = 0
                else
                    ecx_2 = 1
            else
                eax_16 = sub_633cb0(arg1[0x1c], esi, eax_16)
                
                if (eax_16.b == 0)
                    goto label_637455
                
                ecx_2 = 1
        else
            int16_t* ecx_6 = *(eax_13 + 8)
            void* eax_15 = &ecx_6[*(eax_13 + 4)]
            
            if (ecx_6 == eax_15)
                goto label_637437
            
            while (*ecx_6 != esi.w)
                ecx_6 = &ecx_6[1]
                
                if (ecx_6 == eax_15)
                    break
            
            if (ecx_6 == eax_15)
                goto label_637437
            
            ecx_2 = 1
    else
        int32_t ebp_2 = *(arg2 + 0x18)
        
        if (ebp_2 == 0)
            ecx_2 = 0
        else
            uint32_t edx_5 = zx.d(esi.w)
            
            if ((*((edx_5 u>> 3) + ebp_2) & (1 << (edx_5.b & 7)).b) == 0)
                ecx_2 = 0
            else
            label_6373fe:
                ecx_2 = 1
    
    edx_2 = &ebp[1]
else
    edx_2 = eax_6
    ecx_2 = 1

int32_t result

if (ecx_2 == (*(arg2 + 8) & 1))
    result.b = 0
    return result

*arg1 = edx_2
result.b = 1
return result
