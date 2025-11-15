// 函数: sub_6b31b0
// 地址: 0x6b31b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t esi = arg2
uint32_t var_c = esi
int32_t* edi = *(esi + 0x1c)

if (edi == 0)
    return edi + 1

char eax_1 = (edi[0x392]).b
_memset(arg1, 0, 0x70)
int32_t var_2c = 0x88
int32_t var_30 = 1
uint32_t ebp = _calloc()
(*arg1)[1] = esi
(*arg1)[0x1a] = ebp
int32_t ecx = edi[2]
int32_t edx = 0
uint32_t var_14 = ebp

if (ecx != 0)
    uint32_t i = ecx - 1
    
    if (ecx != 1)
        do
            edx += 1
            i u>>= 1
        while (i != 0)

int32_t var_2c_1 = 4
int32_t var_30_1 = 1
*(ebp + 0x2c) = edx
int32_t var_34_1 = 4
int32_t var_38 = 1
*(ebp + 0xc) = _calloc()
int32_t var_3c = 0x14
int32_t var_40 = 1
*(ebp + 0x10) = _calloc()
int32_t var_44 = 0x14
int32_t var_48 = 1
**(ebp + 0xc) = _calloc()
**(ebp + 0x10) = _calloc()
sub_6ba270(**(ebp + 0xc), *edi s>> eax_1)
sub_6ba270(**(ebp + 0x10), edi[1] s>> eax_1)
int32_t eax_7 = *edi
int32_t ecx_9 = 0

if (eax_7 != 0)
    uint32_t i_1 = eax_7 - 1
    
    if (eax_7 != 1)
        do
            ecx_9 += 1
            i_1 u>>= 1
        while (i_1 != 0)

int32_t ecx_10 = 0
*(ebp + 4) = ecx_9 - 6
int32_t eax_9 = edi[1]

if (eax_9 != 0)
    uint32_t i_2 = eax_9 - 1
    
    if (eax_9 != 1)
        do
            ecx_10 += 1
            i_2 u>>= 1
        while (i_2 != 0)

*(ebp + 8) = ecx_10 - 6

if (edi[0x2c8] == 0)
    int32_t var_2c_2 = 0x38
    int32_t var_30_2 = edi[6]
    edi[0x2c8] = _calloc()
    int32_t var_8_1 = 0
    
    if (edi[6] s> 0)
        void* ebp_1 = &edi[0x1c8]
        int32_t eax_12 = 0
        int32_t var_10_1 = 0
        void* esi_1 = ebp_1
        void* var_4_1 = ebp_1
        
        while (true)
            int32_t* edx_5 = *esi_1
            
            if (edx_5 != 0)
                int32_t eax_13 = sub_6bf610(edi[0x2c8] + eax_12, edx_5)
                
                if (eax_13 == 0)
                    void* esi_2 = *esi_1
                    
                    if (*(esi_2 + 0x24) != eax_13)
                        int32_t eax_14 = *(esi_2 + 0x20)
                        
                        if (eax_14 != 0)
                            _free(eax_14)
                        
                        int32_t eax_15 = *(esi_2 + 8)
                        
                        if (eax_15 != 0)
                            _free(eax_15)
                        
                        __builtin_memset(esi_2, 0, 0x28)
                        _free(esi_2)
                    
                    var_10_1 += 0x38
                    int32_t eax_17 = var_8_1 + 1
                    var_8_1 = eax_17
                    *var_4_1 = 0
                    esi_1 = var_4_1 + 4
                    eax_12 = var_10_1
                    var_4_1 = esi_1
                    
                    if (eax_17 s< edi[6])
                        continue
                    
                    ebp = var_14
                    esi = var_c
                    break
            
            int32_t i_3 = 0
            int32_t i_7 = 0
            
            if (edi[6] s> 0)
                do
                    void* esi_6 = *ebp_1
                    
                    if (esi_6 != 0)
                        if (*(esi_6 + 0x24) != 0)
                            int32_t eax_44 = *(esi_6 + 0x20)
                            
                            if (eax_44 != 0)
                                _free(eax_44)
                            
                            int32_t eax_45 = *(esi_6 + 8)
                            
                            if (eax_45 != 0)
                                _free(eax_45)
                            
                            __builtin_memset(esi_6, 0, 0x28)
                            _free(esi_6)
                            i_3 = i_7
                        
                        *ebp_1 = 0
                    
                    i_3 += 1
                    ebp_1 += 4
                    i_7 = i_3
                while (i_3 s< edi[6])
            
            sub_6b3540(arg1)
            return 0xffffffff

arg1[1][0] = edi[1]
int32_t var_2c_6 = *(esi + 4) << 2
(*arg1)[2] = sub_705e22()
int32_t var_2c_7 = *(esi + 4) << 2
(*arg1)[3] = sub_705e22()
int32_t i_4 = 0

if (*(var_c + 4) s> 0)
    do
        int32_t var_2c_8 = 4
        uint32_t var_30_3 = arg1[1][0]
        *((*arg1)[2] + (i_4 << 2)) = _calloc()
        i_4 += 1
    while (i_4 s< *(var_c + 4))
    
    ebp = var_14

(*arg1)[9] = 0
(*arg1)[0xa] = 0
int32_t eax_28
int32_t edx_6
edx_6:eax_28 = sx.q(edi[1])
int32_t eax_30 = (eax_28 - edx_6) s>> 1
arg1[3][0] = eax_30
(*arg1)[5] = eax_30
int32_t var_2c_9 = 4
int32_t var_30_4 = edi[4]
*(ebp + 0x30) = _calloc()
int32_t var_34_2 = 4
int32_t var_38_1 = edi[5]
*(ebp + 0x34) = _calloc()
int32_t i_5 = 0

if (edi[4] s> 0)
    void* esi_4 = &edi[0xc8]
    
    do
        int32_t eax_37 = (*(*((*esi_4 << 2) + &data_77b06c) + 8))(arg1, *(esi_4 + 0x100))
        esi_4 += 4
        i_5 += 1
        *(*(var_14 + 0x30) + 0xfffffce0 - edi + esi_4 - 4) = eax_37
    while (i_5 s< edi[4])

int32_t i_6 = 0

if (edi[5] s> 0)
    void* esi_5 = &edi[0x148]
    
    do
        int32_t eax_42 = (*(*((*esi_5 << 2) + &data_77b060) + 8))(arg1, *(esi_5 + 0x100))
        esi_5 += 4
        i_6 += 1
        *(*(var_14 + 0x34) + 0xfffffae0 - edi + esi_5 - 4) = eax_42
    while (i_6 s< edi[5])

return 0
