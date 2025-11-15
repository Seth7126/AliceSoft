// 函数: sub_496310
// 地址: 0x496310
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72fd40
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = arg1
void* var_c8 = edi
int32_t* esi = arg2
int32_t ecx_1 = esi[1] - *esi
int32_t* var_d0 = arg5
int32_t* var_c4 = esi
int32_t result = ecx_1 s/ 0x18
int32_t result_1 = result

if (result s<= 0)
label_4968ce:
    result.b = 1
else
    int32_t i_1 = result - 1
    void* var_8c
    int32_t var_78
    char var_74
    int32_t var_60
    char var_5c
    char var_44
    int32_t var_30
    
    if (result - 1 s> 0)
        int32_t ebx_1 = 0
        int32_t edi_1 = 1
        int32_t var_c0_1 = 0
        int32_t var_dc_1 = 1
        int32_t i
        
        do
            int32_t var_8_1 = 0
            int32_t* var_bc
            sub_405070(&var_bc, sub_405130(&var_74, *esi + ebx_1))
            var_8_1.b = 2
            
            if (var_60 u>= 0x10)
                sub_403160(var_74.d, var_60 + 1, 1)
            
            var_60 = 0xf
            int32_t var_64_1 = 0
            var_74 = 0
            int32_t var_a8
            
            if (edi_1 s< result_1)
                int32_t eax_13 = ebx_1 + 0x18
                int32_t var_d4_1 = eax_13
                int32_t j_1 = result_1 - edi_1
                int32_t j
                
                do
                    var_8_1.b = 3
                    int32_t* var_a4
                    sub_405070(&var_a4, sub_405130(&var_8c, *esi + eax_13))
                    var_8_1.b = 5
                    
                    if (var_78 u>= 0x10)
                        sub_403160(var_8c, var_78 + 1, 1)
                    
                    int32_t var_90
                    int32_t esi_1 = var_90
                    int32_t* edx_8 = &var_a4
                    int32_t* ecx_8 = &var_bc
                    int32_t var_94
                    int32_t eax_17 = var_94
                    var_78 = 0xf
                    
                    if (esi_1 u>= 0x10)
                        edx_8 = var_a4
                    
                    int32_t var_7c_1 = 0
                    
                    if (var_a8 u>= 0x10)
                        ecx_8 = var_bc
                    
                    var_8c.b = 0
                    int32_t var_ac
                    
                    if (var_ac u< var_94)
                        eax_17 = var_ac
                    
                    int32_t eax_18 = sub_406ac0(eax_17, edx_8, ecx_8, eax_17)
                    int32_t eax_19
                    
                    if (eax_18 == 0)
                        bool c_1 = var_94 u< var_ac
                        
                        if (var_94 == var_ac || c_1)
                            eax_19 = neg.d(sbb.d(eax_18, eax_18, c_1))
                        else
                            eax_19 = 0xffffffff
                    
                    if (eax_18 != 0 || eax_19 != 0)
                        ebx_1 = var_c0_1
                    else
                        ebx_1 = var_c0_1
                        void** eax_23 = *var_c4 + ebx_1
                        
                        if (eax_23[5] u>= 0x10)
                            eax_23 = *eax_23
                        
                        void** var_e4 = eax_23
                        int32_t var_48_1 = 0xf
                        int32_t var_4c_1 = 0
                        var_5c = 0
                        sub_403490(&var_5c, 0x760770, 0x27)
                        var_8_1.b = 6
                        var_8_1.b = 7
                        sub_6c52e0(sub_409240(&var_e4, &var_5c, &var_44, &var_e4))
                        
                        if (var_30 u>= 0x10)
                            sub_403160(var_44.d, var_30 + 1, 1)
                        
                        var_30 = 0xf
                        int32_t var_34_1 = 0
                        var_44 = 0
                        
                        if (var_48_1 u>= 0x10)
                            sub_403160(var_5c.d, var_48_1 + 1, 1)
                        
                        esi_1 = var_90
                    
                    var_8_1.b = 2
                    
                    if (esi_1 u>= 0x10)
                        sub_403160(var_a4, esi_1 + 1, 1)
                    
                    esi = var_c4
                    eax_13 = var_d4_1 + 0x18
                    j = j_1
                    j_1 -= 1
                    var_d4_1 = eax_13
                while (j != 1)
                edi_1 = var_dc_1
            
            int32_t var_8_2 = 0xffffffff
            
            if (var_a8 u>= 0x10)
                sub_403160(var_bc, var_a8 + 1, 1)
            
            edi_1 += 1
            ebx_1 += 0x18
            i = i_1
            i_1 -= 1
            var_dc_1 = edi_1
            var_c0_1 = ebx_1
        while (i != 1)
        edi = var_c8
    
    sub_42c9c0(edi + 4, result_1)
    result = *(edi + 8)
    int32_t edx_10 = 0
    int32_t* ecx_13 = *(edi + 4)
    uint32_t esi_5 = (result - ecx_13 + 3) u>> 2
    
    if (ecx_13 u> result)
        esi_5 = 0
    
    if (esi_5 != 0)
        do
            edx_10 += 1
            *ecx_13 = 0
            ecx_13 = &ecx_13[1]
        while (edx_10 != esi_5)
    
    int32_t edi_3 = 0
    
    if (result_1 s<= 0)
    label_4968ce_1:
        result.b = 1
    else
        int32_t ebx_3 = 0
        int32_t var_c0_2 = 0
        
        while (true)
            int32_t var_18_1 = 0xf
            int32_t var_1c_1 = 0
            char var_2c = 0
            sub_403590(&var_2c, arg3, 0, 0xffffffff)
            int32_t var_8_3 = 8
            
            if (var_1c_1 u<= 0)
                *(*(var_c8 + 4) + (edi_3 << 2)) = 0
            else
                char* eax_34 = sub_404f20(&var_74, &var_2c)
                var_8_3.b = 9
                char* eax_35 = sub_417750(eax_34, eax_34, &var_44, *var_c4 + ebx_3)
                
                if (&var_2c != eax_35)
                    if (var_18_1 u>= 0x10)
                        sub_403160(var_2c.d, var_18_1 + 1, 1)
                    
                    var_18_1 = 0xf
                    int32_t var_1c_2 = 0
                    var_2c = 0
                    sub_4056a0(&var_2c, eax_35)
                
                if (var_30 u>= 0x10)
                    sub_403160(var_44.d, var_30 + 1, 1)
                
                var_8_3.b = 8
                var_30 = 0xf
                int32_t var_34_2 = 0
                var_44 = 0
                
                if (var_60 u>= 0x10)
                    sub_403160(var_74.d, var_60 + 1, 1)
            
            int32_t* esi_8 = *(var_c8 + 4)
            void* esi_9 = &esi_8[edi_3]
            
            if (esi_8[edi_3] == 0)
                int32_t* eax_45 = sub_404f20(&var_74, arg4)
                var_8_3.b = 0xb
                int32_t* eax_46 = sub_417750(eax_45, eax_45, &var_44, *var_c4 + var_c0_2)
                
                if (&var_2c != eax_46)
                    if (var_18_1 u>= 0x10)
                        sub_403160(var_2c.d, var_18_1 + 1, 1)
                    
                    var_18_1 = 0xf
                    int32_t var_1c_3 = 0
                    var_2c = 0
                    sub_4056a0(&var_2c, eax_46)
                
                if (var_30 u>= 0x10)
                    sub_403160(var_44.d, var_30 + 1, 1)
                
                var_8_3.b = 8
                var_30 = 0xf
                int32_t var_34_3 = 0
                var_44 = 0
                
                if (var_60 u>= 0x10)
                    sub_403160(var_74.d, var_60 + 1, 1)
                
                char* lpLibFileName = &var_2c
                
                if (var_18_1 u>= 0x10)
                    lpLibFileName = var_2c.d
                
                (*(var_c8 + 4))[edi_3] = LoadLibraryA(lpLibFileName)
                int32_t* esi_13 = *(var_c8 + 4)
                esi_9 = &esi_13[edi_3]
                
                if (esi_13[edi_3] == 0)
                    void** lpLibFileName_1 = *var_c4 + var_c0_2
                    
                    if (lpLibFileName_1[5] u>= 0x10)
                        lpLibFileName_1 = *lpLibFileName_1
                    
                    *esi_9 = LoadLibraryA(lpLibFileName_1)
                    int32_t* esi_14 = *(var_c8 + 4)
                    esi_9 = &esi_14[edi_3]
                    
                    if (esi_14[edi_3] == 0)
                        int32_t ecx_30 = edi_3 * 3
                        int32_t eax_64 = *var_c4
                        int32_t* eax_65 = eax_64 + (ecx_30 << 3)
                        
                        if (*(eax_64 + (ecx_30 << 3) + 0x14) u>= 0x10)
                            eax_65 = *eax_65
                        
                        var_d0 = eax_65
                        int32_t var_48_2 = 0xf
                        int32_t var_4c_2 = 0
                        var_5c = 0
                        sub_403490(&var_5c, 0x760798, 0x23)
                        var_8_3.b = 0xd
                        var_8_3.b = 0xe
                        sub_6c52e0(sub_409240(&var_d0, &var_5c, &var_8c, &var_d0))
                        
                        if (var_78 u>= 0x10)
                            sub_403160(var_8c, var_78 + 1, 1)
                        
                        int32_t var_78_1 = 0xf
                        int32_t var_7c_2 = 0
                        var_8c.b = 0
                        
                        if (var_48_2 u>= 0x10)
                            sub_403160(var_5c.d, var_48_2 + 1, 1)
                        
                        if (var_18_1 u>= 0x10)
                            sub_403160(var_2c.d, var_18_1 + 1, 1)
                        
                        result.b = 0
                        break
            
            int32_t eax_61 = GetProcAddress(*esi_9, "SetComponentSupplier")
            
            if (eax_61 != 0)
                eax_61(var_d0, eax_2)
            
            int32_t var_8_4 = 0xffffffff
            
            if (var_18_1 u>= 0x10)
                sub_403160(var_2c.d, var_18_1 + 1, 1)
            
            edi_3 += 1
            ebx_3 = var_c0_2 + 0x18
            var_c0_2 = ebx_3
            
            if (edi_3 s>= result_1)
                goto label_4968ce_1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
