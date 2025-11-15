// 函数: sub_67aff0
// 地址: 0x67aff0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_42c
int32_t eax_1 = __security_cookie ^ &var_42c
int32_t ebx = *(arg3 + 0x70)
int32_t esi = arg2 + 0x18
int32_t var_424 = 0
int32_t eax_4 = (esi + arg2) s>> 1
int32_t edi = 0x7fffffff
var_42c = arg4 + 0x1c
int32_t var_404[0x100]

if (ebx s> 0)
    int32_t* eax_11 = *(arg3 + 0x74)
    char* ebx_1 = eax_11[1]
    void* ecx_1 = *eax_11 - ebx_1
    void* eax_13 = eax_11[2] - ebx_1
    void* var_40c_1 = ecx_1
    int32_t eax_27
    
    do
        uint32_t eax_14 = zx.d(*(ecx_1 + ebx_1))
        int32_t eax_15
        int32_t edx_5
        
        if (eax_14 s< arg2)
            int32_t edx_4 = (eax_14 - arg2) * 2
            edx_5 = edx_4 * edx_4
            eax_15 = eax_14 - esi
        else if (eax_14 s<= esi)
            edx_5 = 0
            
            if (eax_14 s> eax_4)
                eax_15 = eax_14 - arg2
            else
                eax_15 = eax_14 - esi
        else
            int32_t edx_8 = (eax_14 - esi) * 2
            edx_5 = edx_8 * edx_8
            eax_15 = eax_14 - arg2
        
        uint32_t esi_1 = zx.d(*ebx_1)
        int32_t eax_16 = eax_15 * 2
        int32_t esi_4
        
        if (esi_1 s>= arg4)
            int32_t esi_5
            
            if (esi_1 s> var_42c)
                int32_t ecx_9 = (esi_1 - var_42c) * 3
                edx_5 += ecx_9 * ecx_9
                esi_5 = esi_1 - arg4
            else if (esi_1 s> (arg4 * 2 + 0x1c) s>> 1)
                esi_5 = esi_1 - arg4
            else
                esi_5 = esi_1 - var_42c
            
            int32_t ecx_11 = esi_5 * 3
            esi_4 = ecx_11 * ecx_11
        else
            int32_t esi_3 = (esi_1 - var_42c) * 3
            int32_t ecx_5 = (esi_1 - arg4) * 3
            edx_5 += ecx_5 * ecx_5
            esi_4 = esi_3 * esi_3
        
        uint32_t ecx_12 = zx.d(*(eax_13 + ebx_1))
        int32_t ecx_13
        
        if (ecx_12 s< arg5)
            int32_t eax_20 = ecx_12 - arg5
            edx_5 += eax_20 * eax_20
            ecx_13 = ecx_12 - (arg5 + 0x18)
        else if (ecx_12 s> arg5 + 0x18)
            int32_t eax_24 = ecx_12 - (arg5 + 0x18)
            edx_5 += eax_24 * eax_24
            ecx_13 = ecx_12 - arg5
        else if (ecx_12 s> (arg5 * 2 + 0x18) s>> 1)
            ecx_13 = ecx_12 - arg5
        else
            ecx_13 = ecx_12 - (arg5 + 0x18)
        
        var_404[var_424] = edx_5
        int32_t ecx_15 = ecx_13 * ecx_13 + esi_4 + eax_16 * eax_16
        esi = arg2 + 0x18
        
        if (ecx_15 s< edi)
            edi = ecx_15
        
        ecx_1 = var_40c_1
        eax_27 = var_424 + 1
        ebx_1 = &ebx_1[1]
        var_424 = eax_27
    while (eax_27 s< ebx)

int32_t result = 0
int32_t ecx_16 = 0

if (ebx s> 0)
    do
        if (var_404[ecx_16] s<= edi)
            arg6[result] = ecx_16.b
            result += 1
        
        ecx_16 += 1
    while (ecx_16 s< ebx)

@__security_check_cookie@4(eax_1 ^ &var_42c)
return result
