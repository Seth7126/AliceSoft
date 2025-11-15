// 函数: sub_46c8b0
// 地址: 0x46c8b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72d350
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_60 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* eax_3 = *(arg1 + 4)
int32_t ecx = *(arg1 + 0xc)
int32_t var_50 = 0
*(arg1 + 4) = &eax_3[1]

if (ecx u<= &eax_3[1] || eax_3[1] != 0x78)
    int32_t ebx
    ebx.b = 0
    *(arg1 + 4) = eax_3
    
    if (ecx u> eax_3)
        char* edx_2
        
        do
            edx_2 = *(arg1 + 4)
            ecx.b = *edx_2
            
            if (ecx.b u>= 0x81 && ecx.b u<= 0x9f)
                break
            
            void* eax_5
            eax_5.b = ecx.b
            eax_5.b += 0x20
            
            if (eax_5.b u<= 0xf)
                break
            
            if (ecx.b == 0xd)
                break
            
            if (ecx.b == 0xa)
                break
            
            if (ecx.b != 0x2e)
                ecx.b -= 0x30
                
                if (ecx.b u> 9)
                    break
            else
                if (ebx.b != 0)
                    break
                
                ebx.b = 1
            
            *(arg1 + 4) = &edx_2[1]
        while (*(arg1 + 0xc) u> &edx_2[1])
    
    int32_t eax_6 = *(arg1 + 4)
    
    if (eax_3 != eax_6)
        int32_t var_1c_1 = 0xf
        int32_t var_20_1 = 0
        char var_30 = 0
        int32_t ecx_7 = sub_403490(&var_30, eax_3, eax_6 - eax_3)
        int32_t var_8_2 = 1
        
        if (ebx.b != 0)
            char* eax_10 = *(arg1 + 4)
            
            if (*eax_10 == 0x66)
                *(arg1 + 0x10) = eax_10
                *(arg1 + 4) = &eax_10[1]
                char eax_12
                eax_12, ecx_7 = sub_46ce20(arg1)
                
                if (eax_12 == 0)
                    *(arg1 + 4) = *(arg1 + 0x10)
                    *(arg1 + 0x10) = 0
                
                *(arg1 + 0x10) = 0
        
        int32_t var_64_4 = ecx_7
        sub_471d90(arg2, &var_30, 0x11)
        
        if (var_1c_1 u>= 0x10)
            int32_t var_64_5 = 1
            sub_403160(var_30.d, var_1c_1 + 1, 1)
    else
        int32_t var_34_1 = 0xf
        int32_t var_38_1 = 0
        char var_48 = 0
        int32_t var_64_1 = sub_403490(&var_48, U"0", 1)
        int32_t var_8_1 = 0
        sub_471d90(arg2, &var_48, 0x11)
        
        if (var_34_1 u>= 0x10)
            int32_t var_64_2 = 1
            sub_403160(var_48.d, var_34_1 + 1, 1)
else
    *(arg1 + 4) = &eax_3[2]
    sub_46ca60(arg1, arg2)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg2
