// 函数: sub_634590
// 地址: 0x634590
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_f8
int32_t eax_1 = __security_cookie ^ &var_f8
void* ebx = arg3
void* var_f0 = arg2
void* var_e8 = ebx

if (ebx == 0 || arg2 == 0 || arg4 == 0)
    sub_69a5bc(eax_1 ^ &var_f8)
    return 0

int32_t ecx = *(arg2 + 0x80)

if (*(arg2 + 0x84) - ecx s>= 1)
    goto label_634659

int32_t* eax_4 = 0x7fffffff - ecx
char* edx_3
char* var_10c_2
char var_dc[0xd8]
int32_t result

if (eax_4 s< 1)
label_6346e5:
    
    if ((*(ebx + 0x74) & 0x8000) != 0)
        var_10c_2 = "too many text chunks"
    label_6348de:
        sub_62a640(eax_4, &var_dc, ebx, var_10c_2)
        sub_62a550(ebx, &var_dc)
        result = 1
    label_6348ba:
        sub_69a5bc(eax_1 ^ &var_f8)
        return result
    
    edx_3 = "too many text chunks"
    
    if ((*(ebx + 0x78) & &__dos_header) != 0)
    label_634908:
        sub_62a550(ebx, edx_3)
        result = 1
        goto label_6348ba
else
    int32_t esi_3
    
    if (ecx + 1 s>= 0x7ffffff7)
        esi_3 = 0x7fffffff
    else
        esi_3 = (ecx + 9) & 0xfffffff8
    
    int32_t* ebp_1 = *(arg2 + 0x88)
    int32_t eax_6 = esi_3 - ecx
    int32_t var_10c_1 = 0x1c
    eax_4 = sub_62abd0(eax_6, ebp_1, ebx, ecx, eax_6)
    
    if (eax_4 == 0)
        goto label_6346e5
    
    sub_62ace0(ebx, ebp_1)
    arg2 = var_f0
    *(arg2 + 0xe8) |= 0x4000
    *(arg2 + 0x88) = eax_4
    *(arg2 + 0x84) = esi_3
label_634659:
    int32_t* esi_4 = arg4 + 0x14
    int32_t var_ec_2 = 0
    var_f8 = esi_4
    
    while (true)
        int32_t ecx_3 = *(arg2 + 0x80)
        int32_t eax_9 = ecx_3 * 7
        int32_t* ecx_5 = (eax_9 << 2) + *(arg2 + 0x88)
        char* ebp_3 = esi_4[-4]
        int32_t* var_f4_1 = ecx_5
        
        if (ebp_3 != 0)
            int32_t edx_2 = esi_4[-5]
            
            if (edx_2 s< 0xffffffff || edx_2 s>= 3)
                if ((*(ebx + 0x74) & 0x8000) == 0)
                    edx_3 = "text compression mode is out of range"
                    
                    if ((*(ebx + 0x78) & &__dos_header) == 0)
                        goto label_63492f
                else
                    sub_62a640(eax_9, &var_dc, ebx, "text compression mode is out of range")
                    edx_3 = &var_dc
                
                sub_62a550(ebx, edx_3)
                arg2 = var_f0
            else
                do
                    eax_9.b = *ebp_3
                    ebp_3 = &ebp_3[1]
                while (eax_9.b != 0)
                
                void* ebp_4 = ebp_3 - &ebp_3[1]
                char* ebx_1
                char* edi_2
                
                if (edx_2 s> 0)
                    char* ebx_2 = *esi_4
                    
                    if (ebx_2 == 0)
                        ebx_1 = nullptr
                    else
                        do
                            eax_9.b = *ebx_2
                            ebx_2 = &ebx_2[1]
                        while (eax_9.b != 0)
                        
                        ebx_1 = ebx_2 - &ebx_2[1]
                    
                    char* edi_4 = esi_4[1]
                    
                    if (edi_4 == 0)
                        edi_2 = nullptr
                    else
                        void* eax_11
                        
                        do
                            eax_11.b = *edi_4
                            edi_4 = &edi_4[1]
                        while (eax_11.b != 0)
                        edi_2 = edi_4 - &edi_4[1]
                else
                    ebx_1 = nullptr
                    edi_2 = nullptr
                
                char* esi_5 = esi_4[-3]
                void* esi_6
                
                if (esi_5 == 0 || *esi_5 == 0)
                    esi_6 = nullptr
                    int32_t eax_12
                    eax_12.b = edx_2 s> 0
                    *ecx_5 = (eax_12 << 1) + 0xffffffff
                else
                    void* eax_10
                    
                    do
                        eax_10.b = *esi_5
                        esi_5 = &esi_5[1]
                    while (eax_10.b != 0)
                    esi_6 = esi_5 - &esi_5[1]
                    *ecx_5 = edx_2
                
                void* eax_15 = esi_6 + edi_2 + ebx_1
                
                if (ebp_4 + 4 == neg.d(eax_15))
                    eax_4 = nullptr
                else
                    eax_4 = sub_62ab50(var_e8, ebp_4 + 4 + eax_15)
                    ecx_5 = var_f4_1
                
                ecx_5[1] = eax_4
                
                if (eax_4 == 0)
                    break
                
                sub_69d850(eax_4, var_f8[-4], ebp_4)
                int32_t* edx_6 = var_f8
                *(var_f4_1[1] + ebp_4) = 0
                void* eax_27
                int32_t* ebx_3
                
                if (edx_6[-5] s<= 0)
                    ebx_3 = var_f4_1
                    void* eax_29 = ebx_3[1] + 1
                    ebx_3[5] = 0
                    ebx_3[6] = 0
                    eax_27 = eax_29 + ebp_4
                else
                    void* eax_19 = var_f4_1[1] + 1 + ebp_4
                    var_f4_1[5] = eax_19
                    sub_69d850(eax_19, *edx_6, ebx_1)
                    ebx_1[var_f4_1[5]] = 0
                    void* eax_23 = var_f4_1[5] + 1 + ebx_1
                    ebx_3 = var_f4_1
                    int32_t* ecx_10 = var_f8
                    ebx_3[6] = eax_23
                    sub_69d850(eax_23, ecx_10[1], edi_2)
                    edx_6 = var_f8
                    edi_2[ebx_3[6]] = 0
                    eax_27 = ebx_3[6] + 1 + edi_2
                
                ebx_3[2] = eax_27
                
                if (esi_6 != 0)
                    sub_69d850(eax_27, edx_6[-3], esi_6)
                
                *(esi_6 + ebx_3[2]) = 0
                
                if (*ebx_3 s<= 0)
                    ebx_3[3] = esi_6
                    ebx_3[4] = 0
                else
                    ebx_3[3] = 0
                    ebx_3[4] = esi_6
                
                arg2 = var_f0
                ebx = var_e8
                esi_4 = var_f8
                *(arg2 + 0x80) = ecx_3 + 1
        
        esi_4 = &esi_4[7]
        int32_t eax_34 = var_ec_2 + 1
        var_f8 = esi_4
        var_ec_2 = eax_34
        
        if (eax_34 s>= 1)
            result = 0
            goto label_6348ba
    
    ebx = var_e8
    
    if ((*(ebx + 0x74) & 0x8000) != 0)
        var_10c_2 = "text chunk: out of memory"
        goto label_6348de
    
    edx_3 = "text chunk: out of memory"
    
    if ((*(ebx + 0x78) & &__dos_header) != 0)
        goto label_634908
label_63492f:
sub_62a520(ebx, edx_3)
noreturn
