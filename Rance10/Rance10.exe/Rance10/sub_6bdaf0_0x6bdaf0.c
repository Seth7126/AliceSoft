// 函数: sub_6bdaf0
// 地址: 0x6bdaf0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_34 = 0x2c
int32_t var_38 = 1
int32_t* edi = _calloc()
int32_t var_3c = 4
int32_t* var_20 = edi
int32_t ebp = 0
int32_t ebx = 0
void* eax_1 = *(*(arg1 + 4) + 0x1c)
*edi = arg2
int32_t edx = *(eax_1 + 0xb20)
int32_t eax_2 = *(arg2 + 0x14)
int32_t esi = *(arg2 + 0xc)
int32_t var_40 = esi
edi[1] = esi
edi[3] = edx
int32_t* eax_3 = edx + eax_2 * 0x38
edi[4] = eax_3
int32_t i_4 = *eax_3
int32_t eax_4 = _calloc()
void* ecx_5 = nullptr
edi[5] = eax_4
arg1 = nullptr

if (esi s> 0)
    void* eax_7 = arg2 + 0x18
    void* var_1c_1 = eax_7
    
    do
        uint32_t i = *(eax_7 + (ecx_5 << 2))
        int32_t esi_1 = 0
        
        if (i != 0)
            do
                esi_1 += 1
                i u>>= 1
            while (i != 0)
            
            if (esi_1 != 0)
                int32_t eax_8 = esi_1
                int32_t var_34_1 = 4
                
                if (esi_1 s<= ebx)
                    eax_8 = ebx
                
                int32_t var_38_1 = esi_1
                ebx = eax_8
                ecx_5 = arg1
                int32_t edi_1 = 0
                *(eax_4 + (ecx_5 << 2)) = _calloc()
                
                if (esi_1 s> 0)
                    void* edx_2 = var_1c_1
                    int32_t eax_10 = 1
                    void* ebx_3 = arg2 + 0x118 + (ebp << 2)
                    
                    do
                        if ((*(edx_2 + (ecx_5 << 2)) & eax_10) != 0)
                            int32_t ecx_6 = *ebx_3
                            ebp += 1
                            ebx_3 += 4
                            *(*(eax_4 + (arg1 << 2)) + (edi_1 << 2)) =
                                *(eax_1 + 0xb20) + ecx_6 * 0x38
                            ecx_5 = arg1
                            edx_2 = var_1c_1
                        
                        edi_1 += 1
                        eax_10 = rol.d(eax_10, 1)
                    while (edi_1 s< esi_1)
        
        eax_7 = var_1c_1
        ecx_5 += 1
        arg1 = ecx_5
    while (ecx_5 s< esi)
    
    edi = var_20

edi[6] = 1

if (i_4 s> 0)
    int32_t ecx_11 = 1
    int32_t i_3 = i_4
    int32_t i_1
    
    do
        ecx_11 *= edi[1]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    edi[6] = ecx_11

edi[2] = ebx
int32_t ebx_4 = edi[6]
int32_t var_34_2 = ebx_4 << 2
int32_t ecx_12 = sub_705e22()
edi[7] = ecx_12
void* i_2 = nullptr
int32_t var_8_2 = ecx_12
arg2 = nullptr

if (ebx_4 s<= 0)
    return var_20

int32_t* esi_3 = var_20
int32_t eax_15 = divs.dp.d(sx.q(ebx_4), esi_3[1])
int32_t edx_9 = i_4 << 2
int32_t var_c_2 = eax_15
int32_t var_10_1 = edx_9

do
    int32_t* ebx_5 = ecx_12 + (i_2 << 2)
    arg1 = i_2
    int32_t var_34_3 = edx_9
    int32_t ebp_2 = eax_15
    *ebx_5 = sub_705e22()
    int32_t ebx_6 = 0
    
    if (i_4 s> 0)
        do
            int32_t temp0_1 = divs.dp.d(sx.q(i_2), ebp_2)
            i_2 -= temp0_1 * ebp_2
            var_20[1]
            ebp_2 = divs.dp.d(sx.q(ebp_2), var_20[1])
            *(*ebx_5 + (ebx_6 << 2)) = temp0_1
            ebx_6 += 1
        while (ebx_6 s< i_4)
        
        i_2 = arg2
        esi_3 = var_20
    
    ecx_12 = var_8_2
    i_2 += 1
    eax_15 = var_c_2
    edx_9 = var_10_1
    arg2 = i_2
while (i_2 s< esi_3[6])

return esi_3
