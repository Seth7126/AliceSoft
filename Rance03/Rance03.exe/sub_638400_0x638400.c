// 函数: sub_638400
// 地址: 0x638400
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* edi = *(arg2 + 0x1c)

if (edi == 0)
    return edi + 1

char eax_1 = (edi[0x392]).b
char* eax_2
int32_t ecx
int32_t edx
eax_2, ecx, edx = _memset(arg1, 0, 0x70)
void* eax_3
int32_t edx_1
eax_3, edx_1 = sub_69cb1c(eax_2, edx, ecx, 1, 0x88)
void* ebp = eax_3
*(arg1 + 4) = arg2
*(arg1 + 0x68) = ebp
uint32_t i = edi[2]
int32_t eax_4 = 0
void* var_c = ebp

if (i != 0)
    uint32_t i_9 = i
    i -= 1
    
    if (i_9 != 1)
        do
            eax_4 += 1
            i u>>= 1
        while (i != 0)

*(ebp + 0x2c) = eax_4
int32_t* eax_5
int32_t ecx_1
int32_t edx_2
eax_5, ecx_1, edx_2 = sub_69cb1c(eax_4, edx_1, i, 1, 4)
*(ebp + 0xc) = eax_5
int32_t eax_6
int32_t ecx_2
int32_t edx_3
eax_6, ecx_2, edx_3 = sub_69cb1c(eax_5, edx_2, ecx_1, 1, 4)
*(ebp + 0x10) = eax_6
int32_t eax_7
int32_t ecx_3
int32_t edx_4
eax_7, ecx_3, edx_4 = sub_69cb1c(eax_6, edx_3, ecx_2, 1, 0x14)
*eax_5 = eax_7
**(ebp + 0x10) = sub_69cb1c(eax_7, edx_4, ecx_3, 1, 0x14)
sub_63f870(**(ebp + 0xc), *edi s>> eax_1)
int32_t edx_9 = sub_63f870(**(ebp + 0x10), edi[1] s>> eax_1)
int32_t eax_9 = *edi
int32_t ecx_11 = 0

if (eax_9 != 0)
    uint32_t i_1 = eax_9 - 1
    
    if (eax_9 != 1)
        do
            ecx_11 += 1
            i_1 u>>= 1
        while (i_1 != 0)

int32_t ecx_12 = 0
*(ebp + 4) = ecx_11 - 6
int32_t eax_11 = edi[1]

if (eax_11 != 0)
    uint32_t i_2 = eax_11 - 1
    
    if (eax_11 != 1)
        do
            ecx_12 += 1
            i_2 u>>= 1
        while (i_2 != 0)

*(ebp + 8) = ecx_12 - 6

if (edi[0x2c8] == 0)
    int32_t esi_2 = edi[6]
    int32_t eax_13
    int32_t ecx_13
    eax_13, ecx_13 = sub_69cb1c(ecx_12 - 6, edx_9, ecx_12, esi_2, 0x38)
    edi[0x2c8] = eax_13
    int32_t var_8_1 = 0
    
    if (esi_2 s> 0)
        int32_t edx_10 = 0
        void* ebp_1 = &edi[0x1c8]
        int32_t var_4_1 = 0
        void* esi_3 = ebp_1
        
        while (true)
            int32_t* eax_14 = *esi_3
            
            if (eax_14 != 0 && sub_644d80(edi[0x2c8] + edx_10, eax_14) == 0)
                sub_644ca0(*esi_3)
                int32_t eax_17 = var_8_1 + 1
                *esi_3 = 0
                edx_10 = var_4_1 + 0x38
                esi_3 += 4
                var_8_1 = eax_17
                var_4_1 = edx_10
                
                if (eax_17 s< edi[6])
                    continue
                
                ebp = var_c
                break
            
            int32_t i_3 = 0
            int32_t i_8 = 0
            
            if (edi[6] s> 0)
                do
                    void* esi_7 = *ebp_1
                    
                    if (esi_7 != 0)
                        if (*(esi_7 + 0x24) != 0)
                            int32_t eax_44 = *(esi_7 + 0x20)
                            
                            if (eax_44 != 0)
                                _free(eax_44)
                            
                            int32_t eax_45 = *(esi_7 + 8)
                            
                            if (eax_45 != 0)
                                _free(eax_45)
                            
                            __builtin_memset(esi_7, 0, 0x28)
                            _free(esi_7)
                            i_3 = i_8
                        
                        *ebp_1 = 0
                    
                    i_3 += 1
                    ebp_1 += 4
                    i_8 = i_3
                while (i_3 s< edi[6])
            
            sub_638740(arg1)
            return 0xffffffff

*(arg1 + 0x10) = edi[1]
*(arg1 + 8) = _malloc(*(arg2 + 4) << 2)
int32_t eax_24
int32_t ecx_18
int32_t edx_13
eax_24, ecx_18, edx_13 = _malloc(*(arg2 + 4) << 2)
*(arg1 + 0xc) = eax_24
int32_t i_4 = 0
void* eax_25 = arg2

if (*(eax_25 + 4) s> 0)
    void* ebp_2 = eax_25
    
    do
        eax_25, edx_13 = sub_69cb1c(eax_25, edx_13, ecx_18, *(arg1 + 0x10), 4)
        ecx_18 = *(arg1 + 8)
        *(ecx_18 + (i_4 << 2)) = eax_25
        i_4 += 1
    while (i_4 s< *(ebp_2 + 4))
    
    ebp = var_c

*(arg1 + 0x24) = 0
*(arg1 + 0x28) = 0
int32_t eax_27
int32_t edx_14
edx_14:eax_27 = sx.q(edi[1])
int32_t eax_29 = (eax_27 - edx_14) s>> 1
*(arg1 + 0x30) = eax_29
*(arg1 + 0x14) = eax_29
int32_t eax_30
int32_t ecx_19
int32_t edx_15
eax_30, ecx_19, edx_15 = sub_69cb1c(eax_29, edx_14, ecx_18, edi[4], 4)
*(ebp + 0x30) = eax_30
*(ebp + 0x34) = sub_69cb1c(eax_30, edx_15, ecx_19, edi[5], 4)
int32_t i_7 = 0

if (edi[4] s> 0)
    void* esi_5 = &edi[0xc8]
    int32_t i_5
    
    do
        int32_t eax_36 = (*(*((*esi_5 << 2) + &data_6f27b4) + 8))(arg1, *(esi_5 + 0x100))
        esi_5 += 4
        *(*(ebp + 0x30) + 0xfffffce0 - edi + esi_5 - 4) = eax_36
        i_5 = i_7 + 1
        i_7 = i_5
    while (i_5 s< edi[4])

int32_t i_6 = 0

if (edi[5] s> 0)
    void* esi_6 = &edi[0x148]
    
    do
        int32_t eax_42 = (*(*((*esi_6 << 2) + &data_6f86f0) + 8))(arg1, *(esi_6 + 0x100))
        esi_6 += 4
        i_6 += 1
        *(*(var_c + 0x34) + 0xfffffae0 - edi + esi_6 - 4) = eax_42
    while (i_6 s< edi[5])

return 0
