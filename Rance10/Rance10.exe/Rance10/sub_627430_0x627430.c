// 函数: sub_627430
// 地址: 0x627430
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_744be0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t result
int32_t ebx

if (arg1[6].b != 0)
    int32_t eax_4 = arg1[7]
    
    if (sub_405df0(&arg1[-5], (((*(*arg1 + 8))(eax_2) + 1) * eax_4) << 2) != 0)
        int32_t esi_1
        
        if (arg1[-3] != 0)
            esi_1 = arg1[-4]
        else
            esi_1 = 0
        
        int32_t eax_14 = arg2 * eax_4
        int32_t edx_3 = (*(*arg1 + 8))() * eax_4 - 1
        
        if (edx_3 s> eax_14)
            int32_t* ecx_13 = esi_1 + ((edx_3 - eax_4) << 2)
            
            do
                int32_t eax_15 = *ecx_13
                ecx_13 = &ecx_13[-1]
                *(esi_1 + (edx_3 << 2)) = eax_15
                edx_3 -= 1
            while (edx_3 s> eax_14)
        
        switch (arg1[3] - 0xc)
            case 0
                result = sub_621120(arg1[1])
                *(esi_1 + (arg2 << 2)) = result
                
                if (result s>= 0)
                    result.b = 1
                else
                    result.b = 0
            case 1
                int32_t var_64_2 = 0
                result = sub_6219f0(arg1[1], arg1[4])
                *(esi_1 + (arg2 << 2)) = result
                
                if (result s>= 0)
                    result.b = 1
                else
                    result.b = 0
            case 6, 7, 0x27, 0x4d, 0x51
                *(esi_1 + (arg2 << 3)) = 0xffffffff
                *(esi_1 + (arg2 << 3) + 4) = 0
                result.b = 1
            case 8, 9, 0x37
                *(esi_1 + (arg2 << 2)) = 0xffffffff
                result.b = 1
            case 0x33
                result = sub_621320(arg1[1])
                *(esi_1 + (arg2 << 2)) = result
                
                if (result s>= 0)
                    result.b = 1
                else
                    result.b = 0
            default
                *(esi_1 + (arg2 << 2)) = 0
                result.b = 1
    else
        void* var_44
        sub_403360(&var_44, "array.Insert")
        int32_t var_8_2 = 1
        ebx.b = sub_6c52e0(&var_44).b
        int32_t var_30
        
        if (var_30 u< 0x10)
            result.b = ebx.b
        else
            sub_403160(var_44, var_30 + 1, 1)
            result.b = ebx.b
else if (sub_627910(&arg1[-8], 1, 0).b != 0)
    result.b = 1
else
    void* var_2c
    sub_403360(&var_2c, "array.Insert")
    int32_t var_8_1 = 0
    ebx.b = sub_6c52e0(&var_2c).b
    int32_t var_18
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c, var_18 + 1, 1)
    
    result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
