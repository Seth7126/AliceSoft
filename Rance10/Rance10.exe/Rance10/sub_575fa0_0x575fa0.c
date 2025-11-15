// 函数: sub_575fa0
// 地址: 0x575fa0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72e9b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char arg_4

if (arg_4 != 0)
    void* edx_1 = arg1[4]
    int32_t* ecx = arg1[3]
    arg_4 = 0
    sub_576680(&arg_4, edx_1, ecx, &arg_4)
    int32_t ecx_1 = 0
    int32_t eax_6 = (arg1[4] - arg1[3]) s>> 2
    arg_4.d = 0
    
    if (eax_6 != 0)
        do
            void** var_24 = nullptr
            int32_t var_20_1 = 0
            int32_t var_1c_1 = 0
            int32_t var_8_1 = 0
            sub_42ca30(&var_24, arg1[3] + (ecx_1 << 2))
            int32_t ebx_2 = arg_4.d + 1
            void* var_14
            void** edi_1
            
            if (ebx_2 u>= (arg1[4] - arg1[3]) s>> 2)
            label_576092:
                edi_1 = var_24
            else
                while (true)
                    edi_1 = var_24
                    void** eax_13 = arg1[3] + (ebx_2 << 2)
                    void* var_38_3 = *eax_13
                    var_14 = eax_13
                    
                    if (sub_58d540(*edi_1, var_38_3) == 0)
                        break
                    
                    sub_42ca30(&var_24, var_14)
                    ebx_2 += 1
                    
                    if (ebx_2 u>= (arg1[4] - arg1[3]) s>> 2)
                        goto label_576092
            
            int32_t ebx_3 = var_20_1
            
            if ((ebx_3 - edi_1) s>> 2 != 1)
                sub_5762e0(&arg1[6], &var_24)
                ebx_3 = var_20_1
                edi_1 = var_24
            else
                var_14 = *edi_1
                sub_42ca30(arg1, &var_14)
            
            ecx_1 = arg_4.d + ((ebx_3 - edi_1) s>> 2)
            int32_t var_8_2 = 0xffffffff
            arg_4.d = ecx_1
            
            if (edi_1 != 0)
                sub_403160(edi_1, (var_1c_1 - edi_1) s>> 2, 4)
                ecx_1 = arg_4.d
                var_24 = nullptr
                int32_t var_20_2 = 0
                int32_t var_1c_2 = 0
        while (ecx_1 u< eax_6)
else
    arg_4 = 0
    int32_t var_38 = arg_4.d
    sub_576520(arg1, arg1[1], arg1[3], arg1[4])

int32_t result = arg1[3]
arg1[4] = result
fsbase->NtTib.ExceptionList = ExceptionList
return result
