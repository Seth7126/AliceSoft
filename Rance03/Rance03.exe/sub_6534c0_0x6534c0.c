// 函数: sub_6534c0
// 地址: 0x6534c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b4b08
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_3c
int32_t eax_2 = __security_cookie ^ &var_3c
int32_t __saved_edi
int32_t var_50 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx
int32_t var_38 = ecx
void* edx = data_75d4fc
int32_t edi = 0
int32_t* result = arg1
int32_t* result_1 = result
int32_t ebp_2 = (*(edx + 0x1c0) - *(edx + 0x1bc)) s>> 2

if (ebp_2 s> 0)
    while (true)
        int32_t eax_5 = *(edx + 0x1bc)
        int32_t esi_1 = edi
        var_3c = esi_1
        void* esi_2
        
        if (eax_5 != *(edx + 0x1c0))
            if (edi s< 0)
                int32_t* ecx_1 = *(edx + 0x1bc)
                int32_t* esi_3 = ecx_1
                int32_t eax_6 = *(edx + 0x1c0)
                
                if (esi_3 == eax_6)
                    esi_1 = ((eax_6 - ecx_1) s>> 2) - 1
                else
                    while (*esi_3 != *(edx + 0x1c8))
                        esi_3 = &esi_3[1]
                        
                        if (esi_3 == eax_6)
                            break
                    
                    if (esi_3 != eax_6)
                        esi_1 = (esi_3 - ecx_1) s>> 2
                    else
                        esi_1 = ((eax_6 - ecx_1) s>> 2) - 1
                
                var_3c = esi_1
            
            int32_t var_34
            int32_t* ecx_2 = &var_34
            int32_t eax_10 = ((*(edx + 0x1c0) - *(edx + 0x1bc)) s>> 2) - 1
            var_34 = eax_10
            
            if (eax_10 s>= esi_1)
                ecx_2 = &var_3c
            
            int32_t* eax_12 = *(edx + 0x1bc) + (*ecx_2 << 2)
            
            if (eax_12 != *(edx + 0x1c0))
                esi_2 = *(*eax_12 + 4)
                
                if (esi_2 != 0)
                    esi_2 = *(esi_2 + 0x2c)
            else
                esi_2 = 0xffffffff
        else
            esi_2 = 0xffffffff
        
        int32_t var_18_1 = 0xf
        int32_t var_1c_1 = 0
        char var_2c = 0
        sub_402110(&var_2c, 0x6da817, nullptr)
        int32_t var_4 = 0
        result = sub_653670(esi_2, 0, &var_2c, result_1)
        int32_t var_4_1 = 0xffffffff
        
        if (var_18_1 u>= 0x10)
            result = j__free(var_2c.d)
        
        edi += 1
        int32_t var_18_2 = 0xf
        int32_t var_1c_2 = 0
        var_2c = 0
        
        if (edi s>= ebp_2)
            break
        
        edx = data_75d4fc

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_3c)
return result
