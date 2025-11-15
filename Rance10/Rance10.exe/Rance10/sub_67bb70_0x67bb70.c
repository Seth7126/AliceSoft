// 函数: sub_67bb70
// 地址: 0x67bb70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_746698
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_54 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_48 = 0
void var_2c
char eax_4

if (arg2 u> 6)
    sub_602420(arg1)
else
    switch (arg2)
        case 0
            eax_4 = sub_67bf60()
        label_67bbc1:
            *arg1 = 0x2f
            int32_t ecx_1
            ecx_1.b = eax_4 != 0
            arg1[1] = ecx_1
        case 1
            int32_t* edi_1 = *(*(data_7fcbd0 + 0x40) + 0x14)
            
            if (*edi_1 == 0)
                *arg1 = 0x2f
                arg1[1] = 1
            else
                BOOL hWnd = *edi_1
                
                if (hWnd == 0)
                    *arg1 = 0x2f
                    arg1[1] = 1
                else if (DestroyWindow(hWnd) == 0)
                    *arg1 = 0x2f
                    arg1[1] = 0
                else
                    *edi_1 = 0
                    *arg1 = 0x2f
                    arg1[1] = 1
        case 2
            bool cond:0_1 = **(*(data_7fcbd0 + 0x40) + 0x14) != 0
            *arg1 = 0x2f
            int32_t ecx_2
            ecx_2.b = cond:0_1
            arg1[1] = ecx_2
        case 3
            *arg3
            int32_t var_8_1 = 0
            sub_67bfd0(sub_603290(&var_2c))
            sub_403320(&var_2c)
            *arg1 = 0
        case 4
            *arg3
            char* eax_11 = sub_603290(&var_2c)
            int32_t var_8_2 = 1
            void* edi_2 = data_7fcbd0
            int32_t eax_13
            
            if (sub_67c310(edi_2 + 0x14, eax_11) != 0)
                sub_67cc60(*(edi_2 + 0x40))
                eax_13 = 1
            else
                eax_13 = 0
            
            *arg1 = 0x2f
            arg1[1] = eax_13
            sub_403320(&var_2c)
        case 5
            eax_4 = sub_67c040(arg3)
            goto label_67bbc1
        case 6
            *arg3
            void var_44
            char* eax_14 = sub_603290(&var_44)
            int32_t var_8_3 = 2
            char* ecx_11 = data_7fcbd0 + 0x44
            
            if (ecx_11 != eax_14)
                sub_403590(ecx_11, eax_14, 0, 0xffffffff)
            
            sub_403320(&var_44)
            *arg1 = 0
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg1
