// 函数: ?strtoxl@@YAKPAUlocaleinfo_struct@@PBDPAPBDHH@Z
// 地址: 0x69d454
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_28
sub_69beb0(&var_28, arg1)

if (arg3 != 0)
    *arg3 = arg2

char* eax_1 = arg2
int32_t result

if (eax_1 == 0 || (arg4 != 0 && (arg4 s< 2 || arg4 s> 0x24)))
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    result = 0
else
    void* edi_2 = var_28
    void* esi_1 = &eax_1[1]
    int32_t result_1 = 0
    char ebx_1 = *eax_1
    uint32_t ecx_2
    
    while (true)
        int32_t eax_4
        
        if (*(edi_2 + 0x74) s<= 1)
            eax_4 = zx.d(*(*(edi_2 + 0x90) + (zx.d(ebx_1) << 1))) & 8
        else
            eax_4, ecx_2 = __isctype_l(zx.d(ebx_1), 8, &var_28)
            edi_2 = var_28
        
        if (eax_4 == 0)
            break
        
        ebx_1 = *esi_1
        esi_1 += 1
    
    int32_t eax_7 = arg5
    char var_5_1 = ebx_1
    
    if (ebx_1 != 0x2d)
        if (ebx_1 == 0x2b)
            goto label_69d4f2
        
        ecx_2.b = var_5_1
    else
        eax_7 |= 2
    label_69d4f2:
        ecx_2.b = *esi_1
        esi_1 += 1
        var_5_1 = ecx_2.b
    
    int32_t edi_3 = arg4
    result = result_1
    int32_t var_c_1 = eax_7
    
    if (edi_3 s>= 0 && edi_3 != 1 && edi_3 s<= 0x24)
        if (edi_3 != 0)
            if (edi_3 == 0x10 && ecx_2.b == 0x30)
                goto label_69d550
        else if (ecx_2.b == 0x30)
            eax_7.b = *esi_1
            
            if (eax_7.b == 0x78 || eax_7.b == 0x58)
                edi_3 = 0x10
            label_69d550:
                eax_7.b = *esi_1
                
                if (eax_7.b == 0x78 || eax_7.b == 0x58)
                    ecx_2.b = *(esi_1 + 1)
                    esi_1 += 2
                    var_5_1 = ecx_2.b
            else
                edi_3 = 8
        else
            edi_3 = 0xa
        
        int32_t eax_8 = 0xffffffff
        int32_t edx_1 = 0
        uint32_t temp0_1 = divu.dp.d(edx_1:eax_8, edi_3)
        int32_t edx_3 = var_c_1
        int32_t eax_11 = *(var_28 + 0x90)
        int32_t var_18_1 = eax_11
        int32_t* eax_18
        
        while (true)
            uint32_t eax_12 = zx.d(*(eax_11 + (zx.d(ecx_2.b) << 1)))
            int32_t eax_14
            
            if ((eax_12 & 4) != 0)
                eax_14 = sx.d(var_5_1) - 0x30
            label_69d5b0:
                
                if (eax_14 u< edi_3)
                    edx_3 |= 8
                    
                    if (result u< temp0_1
                            || (result == temp0_1 && eax_14 u<= modu.dp.d(edx_1:eax_8, edi_3)))
                        result = result * edi_3 + eax_14
                    else
                        eax_18 = arg3
                        edx_3 |= 4
                        
                        if (eax_18 == 0)
                            break
                    
                    ecx_2.b = *esi_1
                    esi_1 += 1
                    eax_11 = var_18_1
                    var_5_1 = ecx_2.b
                    continue
            else if ((eax_12 & 0x103) != 0)
                int32_t ecx_5
                ecx_5.b = var_5_1
                int32_t eax_17 = sx.d(ecx_5.b)
                
                if (ecx_5.b - 0x61 u<= 0x19)
                    eax_17 -= 0x20
                
                eax_14 = eax_17 - 0x37
                goto label_69d5b0
            eax_18 = arg3
            break
        
        void* esi_2 = esi_1 - 1
        int32_t var_c_2 = edx_3
        
        if ((edx_3.b & 8) == 0)
            if (eax_18 != 0)
                esi_2 = arg2
            
            result = 0
        else if ((edx_3.b & 4) != 0)
        label_69d629:
            *__errno() = 0x22
            
            if ((edx_3.b & 1) == 0)
                int32_t ebx_3
                ebx_3.b = (edx_3.b & 2) != 0
                result = ebx_3 + 0x7fffffff
            else
                result = 0xffffffff
        else if ((edx_3.b & 1) == 0)
            int32_t eax_20 = edx_3 & 2
            
            if (eax_20 != 0 && result u> 0x80000000)
                goto label_69d629
            
            if (eax_20 == 0 && result u> 0x7fffffff)
                goto label_69d629
        
        if (arg3 != 0)
            *arg3 = esi_2
        
        if ((edx_3.b & 2) != 0)
            result = neg.d(result)
    else if (arg3 == 0)
        result = 0
    else
        *arg3 = arg2
        result = 0

char var_1c
void* var_20

if (var_1c != 0)
    *(var_20 + 0x70) &= 0xfffffffd
return result
