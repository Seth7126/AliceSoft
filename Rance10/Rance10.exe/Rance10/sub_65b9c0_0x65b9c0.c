// 函数: sub_65b9c0
// 地址: 0x65b9c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t var_130
int32_t eax_1 = __security_cookie ^ &var_130
void** edi = arg1
void** var_120 = edi
int32_t* esi = edi[6]
int32_t* var_124 = esi
int32_t ebx = esi[1]
char* ebp = *esi

if (ebx != 0)
    goto label_65ba0b

uint32_t result

if (esi[3](edi).b != 0)
    ebp = *esi
    ebx = esi[1]
label_65ba0b:
    void* ebp_1 = &ebp[1]
    uint32_t ecx_1 = zx.d(*ebp) << 8
    var_130 = ecx_1
    int32_t ebx_1 = ebx - 1
    
    if (ebx != 1)
        goto label_65ba35
    
    if (esi[3](edi).b == 0)
    label_65b9fb:
        result.b = 0
    else
        ebp_1 = *esi
        ebx_1 = esi[1]
        ecx_1 = var_130
    label_65ba35:
        int32_t ebx_2 = ebx_1 - 1
        void* ebp_2 = ebp_1 + 1
        uint32_t ecx_3 = ecx_1 - 2 + zx.d(*ebp_1)
        var_130 = ecx_3
        
        while (true)
            if (ecx_3 s<= 0x10)
                if (ecx_3 != 0)
                    *(*edi + 0x14) = 0xc
                    (**edi)(edi)
                
                *esi = ebp_2
                result.b = 1
                esi[1] = ebx_2
                break
            
            if (ebx_2 == 0)
                if (esi[3](edi).b == 0)
                    goto label_65b9fb_1
                
                ebp_2 = *esi
                ebx_2 = esi[1]
            
            ebx_2 -= 1
            uint32_t ecx_4 = zx.d(*ebp_2)
            ebp_2 += 1
            int32_t var_144_4 = 1
            *(*edi + 0x14) = 0x52
            *(*edi + 0x18) = ecx_4
            (*(*edi + 4))(edi, var_144_4)
            char var_118 = 0
            uint32_t result_2 = 0
            int32_t ecx_5 = 1
            uint32_t result_1 = 0
            int32_t var_128_1 = 1
            
            while (true)
                if (ebx_2 == 0)
                    if (esi[3](edi).b == 0)
                        goto label_65b9fb_1
                    
                    ebp_2 = *esi
                    ebx_2 = esi[1]
                    ecx_5 = var_128_1
                    result_2 = result_1
                
                result.b = *ebp_2
                ebx_2 -= 1
                (&var_118)[ecx_5] = result.b
                ebp_2 += 1
                ecx_5 += 1
                result_2 += zx.d(result.b)
                var_128_1 = ecx_5
                result_1 = result_2
                
                if (ecx_5 s> 0x10)
                    void* ecx_6 = *edi
                    var_130 -= 0x11
                    int32_t var_144_6 = 2
                    char var_117
                    *(ecx_6 + 0x18) = zx.d(var_117)
                    char var_116
                    *(ecx_6 + 0x1c) = zx.d(var_116)
                    char var_115
                    *(ecx_6 + 0x20) = zx.d(var_115)
                    char var_114
                    *(ecx_6 + 0x24) = zx.d(var_114)
                    char var_113
                    *(ecx_6 + 0x28) = zx.d(var_113)
                    char var_112
                    *(ecx_6 + 0x2c) = zx.d(var_112)
                    char var_111
                    *(ecx_6 + 0x30) = zx.d(var_111)
                    char var_110
                    *(ecx_6 + 0x34) = zx.d(var_110)
                    *(*edi + 0x14) = 0x58
                    (*(*edi + 4))(edi, var_144_6)
                    void* ecx_7 = *edi
                    int32_t var_14c_1 = 2
                    char var_10f
                    *(ecx_7 + 0x18) = zx.d(var_10f)
                    char var_10e
                    *(ecx_7 + 0x1c) = zx.d(var_10e)
                    char var_10d
                    *(ecx_7 + 0x20) = zx.d(var_10d)
                    char var_10c
                    *(ecx_7 + 0x24) = zx.d(var_10c)
                    char var_10b
                    *(ecx_7 + 0x28) = zx.d(var_10b)
                    char var_10a
                    *(ecx_7 + 0x2c) = zx.d(var_10a)
                    char var_109
                    *(ecx_7 + 0x30) = zx.d(var_109)
                    char var_108
                    *(ecx_7 + 0x34) = zx.d(var_108)
                    *(*edi + 0x14) = 0x58
                    (*(*edi + 4))(edi, var_14c_1)
                    
                    if (result_1 s> 0x100 || result_1 s> var_130)
                        *(*edi + 0x14) = 9
                        (**edi)(edi)
                    
                    uint32_t var_104[0x10][0x4]
                    _memset(&var_104, 0, 0x100)
                    result = result_1
                    int32_t ecx_8 = 0
                    int32_t var_128_2 = 0
                    
                    if (result s> 0)
                        do
                            if (ebx_2 == 0)
                                if (esi[3](edi).b == 0)
                                    goto label_65b9fb_1
                                
                                ebp_2 = *esi
                                ebx_2 = esi[1]
                                ecx_8 = var_128_2
                            
                            result.b = *ebp_2
                            ebx_2 -= 1
                            *(&var_104 + ecx_8) = result.b
                            ebp_2 += 1
                            result = result_1
                            ecx_8 += 1
                            var_128_2 = ecx_8
                        while (ecx_8 s< result)
                    
                    var_130 -= result
                    uint32_t ecx_9 = ecx_4
                    int32_t esi_1
                    
                    if ((ecx_9.b & 0x10) == 0)
                        esi_1 = ecx_9 + 0x28
                    else
                        ecx_9 -= 0x10
                        esi_1 = ecx_9 + 0x2c
                    
                    void* esi_2 = &edi[esi_1]
                    
                    if (ecx_9 s< 0 || ecx_9 s>= 4)
                        *(*edi + 0x14) = 0x1f
                        *(*edi + 0x18) = ecx_9
                        (**edi)(edi)
                    
                    if (*esi_2 == 0)
                        void* eax_43
                        eax_43, ecx_9 = (*edi[1])(edi, 0, 0x112)
                        *(eax_43 + 0x111) = 0
                        *esi_2 = eax_43
                    
                    result = *esi_2
                    ecx_9.b = var_108
                    *result = var_118.o
                    *(result + 0x10) = ecx_9.b
                    __builtin_memcpy(*esi_2 + 0x11, &var_104, 0x100)
                    ecx_3 = var_130
                    esi = var_124
                    edi = var_120
                    break
else
label_65b9fb_1:
    result.b = 0

@__security_check_cookie@4(eax_1 ^ &var_130)
return result
