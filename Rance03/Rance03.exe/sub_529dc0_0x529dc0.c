// 函数: sub_529dc0
// 地址: 0x529dc0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6c36df
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_dc
int32_t eax_2 = __security_cookie ^ &var_dc
int32_t __saved_edi
int32_t var_ec = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ebx = 0
int32_t var_d4 = 0
int32_t result

if (*(arg1 + 0x84) == 0)
    result.b = 0
else
    int32_t* i = *(arg1 + 0x40)
    void* ecx = arg1 + 0x40
    void* var_d0_1 = ecx
    
    if (i != *(arg1 + 0x44))
        do
            sub_53a360(*i)
            i = &i[1]
        while (i != *(arg1 + 0x44))
        
        ecx = var_d0_1
    
    int32_t edi_2 = 0
    *(ecx + 4) = *ecx
    
    if (arg3 s<= 0)
    label_52a0d9:
        result.b = 1
    else
        while (true)
            int32_t var_d8
            char var_c4
            int32_t var_b0
            char var_64
            
            if (edi_2 s<= 0)
                var_b0 = 0xf
                int32_t var_b4_1 = 0
                var_c4 = 0
                sub_402110(&var_c4, ".png", 4)
                int32_t var_c_2 = 1
                var_d8 = &var_c4
                ebx |= 2
            else
                int32_t var_f0_1 = edi_2
                var_d8 = sub_4691f0(&var_64, "[%d].png")
                int32_t var_c_1 = 0
                ebx |= 1
            
            int32_t var_d4_1 = ebx
            char var_7c
            int32_t* eax_6 = sub_402bc0(&var_7c, arg2)
            int32_t var_c_3 = 2
            char var_94[0x10]
            char* eax_7 = sub_4028a0(&var_94, arg2)
            var_c_3.b = 3
            char var_4c
            char* eax_8 = sub_410a20(eax_7, eax_7, &var_4c, eax_6)
            var_c_3.b = 4
            int32_t var_34
            sub_410a20(eax_8, eax_8, &var_34, var_d8)
            int32_t var_38
            
            if (var_38 u>= 0x10)
                j__free(var_4c.d)
            
            var_38 = 0xf
            int32_t var_3c_1 = 0
            var_4c = 0
            int32_t var_80
            
            if (var_80 u>= 0x10)
                j__free(var_94[0].d)
            
            var_80 = 0xf
            int32_t var_84_1 = 0
            var_94[0] = 0
            int32_t var_68
            
            if (var_68 u>= 0x10)
                j__free(var_7c.d)
            
            var_68 = 0xf
            int32_t var_6c_1 = 0
            var_7c = 0
            
            if ((ebx.b & 2) != 0)
                ebx &= 0xfffffffd
                int32_t var_d4_2 = ebx
                
                if (var_b0 u>= 0x10)
                    j__free(var_c4.d)
                
                var_b0 = 0xf
                int32_t var_b4_2 = 0
                var_c4 = 0
            
            var_c_3.b = 0xa
            
            if ((ebx.b & 1) != 0)
                ebx &= 0xfffffffe
                int32_t var_d4_3 = ebx
                int32_t var_50
                
                if (var_50 u>= 0x10)
                    j__free(var_64.d)
                
                var_50 = 0xf
                int32_t var_54_1 = 0
                var_64 = 0
            
            int32_t var_98_1 = 0xf
            int32_t var_9c_1 = 0
            char var_ac = 0
            sub_402110(&var_ac, 0x6da6ff, nullptr)
            var_c_3.b = 0xb
            int32_t esi_2 = sub_53b690(*(arg1 + 0x84), &var_34, &var_ac, 1)
            var_c_3.b = 0xa
            var_d8 = esi_2
            
            if (var_98_1 u>= 0x10)
                j__free(var_ac.d)
            
            int32_t var_20
            
            if (esi_2 == 0)
                if (var_20 u>= 0x10)
                    j__free(var_34)
                
                break
            
            sub_412de0(var_d0_1, &var_d8)
            int32_t var_c_4 = 0xffffffff
            
            if (var_20 u>= 0x10)
                j__free(var_34)
            
            edi_2 += 1
            
            if (edi_2 s>= arg3)
                goto label_52a0d9
        
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_dc)
return result
