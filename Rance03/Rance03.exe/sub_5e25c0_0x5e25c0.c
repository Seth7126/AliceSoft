// 函数: sub_5e25c0
// 地址: 0x5e25c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cad5b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_b8
int32_t eax_2 = __security_cookie ^ &var_b8
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = arg2
enum MESSAGEBOX_RESULT result
int32_t edx_2
edx_2:result = muls.dp.d(0x2aaaaaab, esi[1] - *esi)
int32_t* var_b4 = esi
int32_t edx_3 = edx_2 s>> 2
int32_t ebp_2 = (edx_3 u>> 0x1f) + edx_3
int32_t var_a4 = ebp_2

if (ebp_2 s<= 0)
label_5e2bfd:
    result.b = 1
else
    int32_t i_1 = ebp_2 - 1
    int32_t i_2 = i_1
    int32_t var_70
    int32_t var_5c
    char var_58[0x10]
    int32_t var_44
    
    if (i_1 s> 0)
        int32_t ebx_1 = 0
        int32_t ebp_3 = 1
        int32_t var_a8_1 = 0
        int32_t var_9c_1 = 1
        int32_t i
        
        do
            int32_t var_4 = 0
            int32_t* var_28
            sub_402a20(&var_28, sub_402bc0(&var_58, *esi + ebx_1))
            var_4.b = 2
            
            if (var_44 u>= 0x10)
                j__free(var_58[0].d)
            
            var_44 = 0xf
            int32_t var_48_1 = 0
            var_58[0] = 0
            int32_t var_14
            
            if (ebp_3 s< var_a4)
                int32_t eax_9 = ebx_1 + 0x18
                int32_t var_98_1 = eax_9
                int32_t j_1 = var_a4 - ebp_3
                int32_t j
                
                do
                    var_4.b = 3
                    int32_t* var_40
                    sub_402a20(&var_40, sub_402bc0(&var_70, *esi + eax_9))
                    var_4.b = 5
                    
                    if (var_5c u>= 0x10)
                        j__free(var_70)
                    
                    int32_t var_2c
                    int32_t ebp_4 = var_2c
                    int32_t* edx_10 = &var_40
                    int32_t* eax_11 = &var_28
                    int32_t var_30
                    int32_t esi_1 = var_30
                    var_5c = 0xf
                    
                    if (ebp_4 u>= 0x10)
                        edx_10 = var_40
                    
                    int32_t var_60_1 = 0
                    
                    if (var_14 u>= 0x10)
                        eax_11 = var_28
                    
                    var_70.b = 0
                    int32_t var_18
                    
                    if (var_18 u< var_30)
                        esi_1 = var_18
                    
                    int32_t eax_13
                    bool cond:8_1
                    
                    if (esi_1 == 0)
                    label_5e27e2:
                        
                        if (var_18 u>= var_30)
                            eax_13.b = var_18 != var_30
                        else
                            eax_13 = 0xffffffff
                        
                        cond:8_1 = eax_13 == 0
                    else
                        int32_t k_1 = esi_1 - 4
                        
                        if (esi_1 u>= 4)
                            int32_t k
                            
                            do
                                if (*eax_11 != *edx_10)
                                    goto label_5e27a6
                                
                                eax_11 = &eax_11[1]
                                edx_10 = &edx_10[1]
                                k = k_1
                                k_1 -= 4
                            while (k u>= 4)
                        
                        if (k_1 == 0xfffffffc)
                            eax_13 = 0
                        else
                        label_5e27a6:
                            int32_t ecx_6
                            ecx_6.b = *eax_11
                            char temp5_1 = *edx_10
                            
                            if (ecx_6.b != temp5_1)
                                eax_13 = sbb.d(eax_11, eax_11, ecx_6.b u< temp5_1) | 1
                            else if (k_1 == 0xfffffffd)
                                eax_13 = 0
                            else
                                ecx_6.b = *(eax_11 + 1)
                                char temp8_1 = *(edx_10 + 1)
                                
                                if (ecx_6.b != temp8_1)
                                    eax_13 = sbb.d(eax_11, eax_11, ecx_6.b u< temp8_1) | 1
                                else if (k_1 == 0xfffffffe)
                                    eax_13 = 0
                                else
                                    ecx_6.b = *(eax_11 + 2)
                                    char temp10_1 = *(edx_10 + 2)
                                    
                                    if (ecx_6.b != temp10_1)
                                        eax_13 = sbb.d(eax_11, eax_11, ecx_6.b u< temp10_1) | 1
                                    else if (k_1 == 0xffffffff)
                                        eax_13 = 0
                                    else
                                        eax_11.b = *(eax_11 + 3)
                                        char temp11_1 = *(edx_10 + 3)
                                        
                                        if (eax_11.b == temp11_1)
                                            eax_13 = 0
                                        else
                                            eax_13 = sbb.d(eax_11, eax_11, eax_11.b u< temp11_1) | 1
                        
                        cond:8_1 = eax_13 == 0
                        
                        if (eax_13 == 0)
                            goto label_5e27e2
                    
                    esi = var_b4
                    eax_13.b = cond:8_1
                    ebx_1 = var_a8_1
                    
                    if (eax_13.b != 0)
                        void** eax_15 = *esi + ebx_1
                        
                        if (eax_15[5] u>= 0x10)
                            eax_15 = *eax_15
                        
                        void** var_d0_3 = eax_15
                        sub_64b530(0x6eaf30)
                        ebp_4 = var_2c
                    
                    var_4.b = 2
                    
                    if (ebp_4 u>= 0x10)
                        j__free(var_40)
                    
                    eax_9 = var_98_1 + 0x18
                    j = j_1
                    j_1 -= 1
                    var_98_1 = eax_9
                while (j != 1)
                ebp_3 = var_9c_1
                i_1 = i_2
            
            int32_t var_4_1 = 0xffffffff
            
            if (var_14 u>= 0x10)
                j__free(var_28)
            
            ebp_3 += 1
            ebx_1 += 0x18
            i = i_1
            i_1 -= 1
            var_9c_1 = ebp_3
            var_a8_1 = ebx_1
            i_2 = i_1
        while (i != 1)
        ebp_2 = var_a4
    
    int32_t* ebx_3 = arg1 + 4
    int32_t* var_ac_1 = ebx_3
    sub_42f470(ebx_3, ebp_2)
    result = *(arg1 + 8)
    int32_t* ecx_8 = *ebx_3
    int32_t edx_11 = 0
    uint32_t esi_6 = (result - ecx_8 + 3) u>> 2
    
    if (ecx_8 u> result)
        esi_6 = 0
    
    if (esi_6 != 0)
        do
            edx_11 += 1
            *ecx_8 = 0
            ecx_8 = &ecx_8[1]
        while (edx_11 != esi_6)
    
    int32_t edi_2 = 0
    
    if (ebp_2 s<= 0)
    label_5e2bfd_1:
        result.b = 1
    else
        int32_t ebp_5 = 0
        
        while (true)
            int32_t var_74_1 = 0xf
            int32_t var_78_1 = 0
            char var_88 = 0
            sub_401ff0(&var_88, arg3, 0, 0xffffffff)
            int32_t var_4_2 = 6
            
            if (var_78_1 u<= 0)
                *(*ebx_3 + (edi_2 << 2)) = 0
            else
                char* eax_17 = sub_4028a0(&var_58, &var_88)
                var_4_2.b = 7
                char* eax_18 = sub_410ad0(eax_17, eax_17, &var_70, *var_b4 + ebp_5)
                
                if (&var_88 != eax_18)
                    if (var_74_1 u>= 0x10)
                        j__free(var_88.d)
                    
                    int32_t var_74_2 = 0xf
                    int32_t var_78_2 = 0
                    var_88 = 0
                    
                    if (*(eax_18 + 0x14) u>= 0x10)
                        var_88.d = *eax_18
                        *eax_18 = 0
                    else
                        void* eax_19 = *(eax_18 + 0x10)
                        
                        if (eax_19 != 0xffffffff)
                            _memcpy(&var_88, eax_18, eax_19 + 1, eax_4)
                    
                    int32_t var_78_3 = *(eax_18 + 0x10)
                    var_74_1 = *(eax_18 + 0x14)
                    *(eax_18 + 0x14) = 0xf
                    *(eax_18 + 0x10) = 0
                    *eax_18 = 0
                
                if (var_5c u>= 0x10)
                    j__free(var_70)
                
                var_4_2.b = 6
                var_5c = 0xf
                int32_t var_60_2 = 0
                var_70.b = 0
                
                if (var_44 u>= 0x10)
                    j__free(var_58[0].d)
            
            int32_t* esi_8 = *(arg1 + 4)
            void* esi_9 = &esi_8[edi_2]
            
            if (esi_8[edi_2] == 0)
                char* eax_27 = sub_4028a0(&var_58, arg4)
                var_4_2.b = 8
                char* eax_28 = sub_410ad0(eax_27, eax_27, &var_70, *var_b4 + ebp_5)
                
                if (&var_88 != eax_28)
                    if (var_74_1 u>= 0x10)
                        j__free(var_88.d)
                    
                    int32_t var_74_3 = 0xf
                    int32_t var_78_4 = 0
                    var_88 = 0
                    
                    if (*(eax_28 + 0x14) u>= 0x10)
                        var_88.d = *eax_28
                        *eax_28 = 0
                    else
                        void* eax_29 = *(eax_28 + 0x10)
                        
                        if (eax_29 != 0xffffffff)
                            _memcpy(&var_88, eax_28, eax_29 + 1, eax_4)
                    
                    int32_t var_78_5 = *(eax_28 + 0x10)
                    var_74_1 = *(eax_28 + 0x14)
                    *(eax_28 + 0x14) = 0xf
                    *(eax_28 + 0x10) = 0
                    *eax_28 = 0
                
                if (var_5c u>= 0x10)
                    j__free(var_70)
                
                var_4_2.b = 6
                var_5c = 0xf
                int32_t var_60_3 = 0
                var_70.b = 0
                
                if (var_44 u>= 0x10)
                    j__free(var_58[0].d)
                
                char* lpLibFileName = &var_88
                
                if (var_74_1 u>= 0x10)
                    lpLibFileName = var_88.d
                
                (*(arg1 + 4))[edi_2] = LoadLibraryA(lpLibFileName)
                int32_t* esi_13 = *(arg1 + 4)
                esi_9 = &esi_13[edi_2]
                
                if (esi_13[edi_2] == 0)
                    void** lpLibFileName_1 = *var_b4 + ebp_5
                    
                    if (lpLibFileName_1[5] u>= 0x10)
                        lpLibFileName_1 = *lpLibFileName_1
                    
                    *esi_9 = LoadLibraryA(lpLibFileName_1)
                    int32_t* esi_14 = *(arg1 + 4)
                    esi_9 = &esi_14[edi_2]
                    
                    if (esi_14[edi_2] == 0)
                        int32_t ecx_20 = edi_2 * 3
                        int32_t eax_43 = *var_b4
                        int32_t* eax_44 = eax_43 + (ecx_20 << 3)
                        
                        if (*(eax_43 + (ecx_20 << 3) + 0x14) u>= 0x10)
                            eax_44 = *eax_44
                        
                        int32_t* var_d0_21 = eax_44
                        sub_64b530(0x6eaf70)
                        
                        if (var_74_1 u>= 0x10)
                            j__free(var_88.d)
                        
                        result.b = 0
                        break
            
            result = GetProcAddress(*esi_9, "SetComponentSupplier")
            
            if (result != 0)
                result(arg5, eax_4)
            
            int32_t var_4_3 = 0xffffffff
            
            if (var_74_1 u>= 0x10)
                j__free(var_88.d)
            
            edi_2 += 1
            ebp_5 += 0x18
            
            if (edi_2 s>= var_a4)
                goto label_5e2bfd_1
            
            ebx_3 = var_ac_1

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_b8)
return result
