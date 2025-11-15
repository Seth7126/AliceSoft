// 函数: sub_6b9f50
// 地址: 0x6b9f50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
void* eax_2 = arg1[0x10]
void* edx = *(eax_2 + 4)
void* eax_3 = *(eax_2 + 0x68)
int32_t ebx = *(edx + 0x1c)
int32_t eax_5 = *(ebx + (arg1[7] << 2))
arg1[9] = eax_5
int32_t edi = *(edx + 4)
int32_t esi = edi << 2
__alloca_probe_16(esi)
int32_t __saved_edi
int32_t* var_2c = &__saved_edi
__alloca_probe_16(esi)
int32_t* var_20 = &__saved_edi
__alloca_probe_16(esi)
int32_t* ebx_1 = &__saved_edi
int32_t* var_1c = &__saved_edi
__alloca_probe_16(esi)
int32_t i = 0
int32_t* edi_1 = arg1

if (edi s> 0)
    int32_t* var_c_1 = &__saved_edi
    
    do
        int32_t ecx_1 = arg2[arg2[i + 1] + 0x101]
        int32_t eax_20 = (*(*((*(ebx + (ecx_1 << 2) + 0x320) << 2) + &data_77b06c) + 0x14))(edi_1, 
            *(*(eax_3 + 0x30) + (ecx_1 << 2)))
        *var_c_1 = eax_20
        int32_t ecx_3
        ecx_3.b = eax_20 != 0
        *var_c_1 = ecx_3
        _memset(*(*edi_1 + (i << 2)), 0, eax_5 << 2 u>> 1)
        i += 1
        var_c_1 = &var_c_1[1]
    while (i s< *(edx + 4))
    
    ebx_1 = var_1c

int32_t* ecx_5 = arg2
int32_t i_1 = 0

if (ecx_5[0x121] s> 0)
    void* ecx_4 = &ecx_5[0x222]
    
    do
        int32_t esi_1 = *(ecx_4 - 0x400)
        
        if (ebx_1[esi_1] != 0 || ebx_1[*ecx_4] != 0)
            ebx_1[esi_1] = 1
            ebx_1[*ecx_4] = 1
        
        i_1 += 1
        ecx_4 += 4
    while (i_1 s< arg2[0x121])
    
    ecx_5 = arg2

int32_t i_2 = 0
int32_t i_6 = 0

if (*ecx_5 s> 0)
    void* var_10_2 = &ecx_5[0x111]
    
    do
        int32_t j = 0
        int32_t esi_2 = 0
        
        if (*(edx + 4) s> 0)
            int32_t* edx_4 = var_20
            void* edi_3 = var_2c - edx_4
            
            do
                if (arg2[j + 1] == i_2)
                    int32_t eax_26
                    eax_26.b = var_1c[j] != 0
                    esi_2 += 1
                    *edx_4 = eax_26
                    *(edi_3 + edx_4) = *(*arg1 + (j << 2))
                    edx_4 = &edx_4[1]
                    i_2 = i_6
                
                j += 1
            while (j s< *(edx + 4))
            
            edi_1 = arg1
        
        int32_t ecx_8 = *var_10_2
        (*(*((*(ebx + (ecx_8 << 2) + 0x520) << 2) + &data_77b060) + 0x1c))(edi_1, 
            *(*(eax_3 + 0x34) + (ecx_8 << 2)), var_2c, var_20, esi_2)
        ecx_5 = arg2
        i_2 = i_6 + 1
        var_10_2 += 4
        i_6 = i_2
    while (i_2 s< *ecx_5)

int32_t esi_3 = ecx_5[0x121]
int32_t esi_4 = esi_3 - 1

if (esi_3 - 1 s>= 0)
    int32_t eax_37
    int32_t edx_6
    edx_6:eax_37 = sx.q(eax_5)
    void* ebx_7 = &ecx_5[esi_4 + 0x222]
    int32_t temp1_1
    
    do
        int32_t edx_7 = *edi_1
        int32_t* ecx_10 = *(edx_7 + (*(ebx_7 - 0x400) << 2))
        int32_t i_7 = (eax_37 - edx_6) s>> 1
        
        if (i_7 s> 0)
            int32_t* eax_42 = *(edx_7 + (*ebx_7 << 2)) - ecx_10
            int32_t i_3
            
            do
                float xmm0_1 = *ecx_10
                float xmm1_1 = *(eax_42 + ecx_10)
                
                if (xmm0_1 <= 0f)
                    if (xmm1_1 f<= 0)
                        *(eax_42 + ecx_10) = xmm0_1
                        *ecx_10 = xmm0_1 - xmm1_1
                    else
                        *(eax_42 + ecx_10) = xmm1_1 + xmm0_1
                else if (xmm1_1 f<= 0)
                    *(eax_42 + ecx_10) = xmm0_1
                    *ecx_10 = xmm1_1 + xmm0_1
                else
                    *(eax_42 + ecx_10) = xmm0_1 - xmm1_1
                
                ecx_10 = &ecx_10[1]
                i_3 = i_7
                i_7 -= 1
            while (i_3 != 1)
        
        ebx_7 -= 4
        temp1_1 = esi_4
        esi_4 -= 1
    while (temp1_1 - 1 s>= 0)
    ecx_5 = arg2

int32_t i_4 = 0

if (*(edx + 4) s> 0)
    do
        int32_t ecx_11 = ecx_5[ecx_5[i_4 + 1] + 0x101]
        (*(*((*(ebx + (ecx_11 << 2) + 0x320) << 2) + &data_77b06c) + 0x18))(edi_1, 
            *(*(eax_3 + 0x30) + (ecx_11 << 2)), (&__saved_edi)[i_4], *(*edi_1 + (i_4 << 2)))
        ecx_5 = arg2
        i_4 += 1
    while (i_4 s< *(edx + 4))

int32_t i_5 = 0

if (*(edx + 4) s> 0)
    do
        void* edx_9 = *(*edi_1 + (i_5 << 2))
        int32_t eax_52 = edi_1[7]
        sub_6bb0c0(eax_52, edx_9, **(eax_3 + (eax_52 << 2) + 0xc), edx_9)
        i_5 += 1
    while (i_5 s< *(edx + 4))

@__security_check_cookie@4(eax_1 ^ &__saved_ebp)
return 0
