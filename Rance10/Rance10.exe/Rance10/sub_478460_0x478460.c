// 函数: sub_478460
// 地址: 0x478460
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72e390
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_94 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_78 = 0
int32_t* result
void var_44
void var_38
void var_2c
char eax_19
uint8_t eax_40
int32_t* eax_46

if (arg2 u> 0xd)
    sub_602420(arg1)
    result = arg1
else
    switch (arg2)
        case 0
            *arg3
            char* lpFileName = sub_603290(&var_44)
            
            if (*(lpFileName + 0x14) u>= 0x10)
                lpFileName = *lpFileName
            
            uint32_t eax_4 = GetFileAttributesA(lpFileName)
            
            if (eax_4 != 0xffffffff)
                eax_4.b = not.b((eax_4 u>> 4).b)
                eax_4.b &= 1
            else
                eax_4.b = 0
            
            arg1[1] = zx.d(eax_4.b)
            *arg1 = 0x2f
            sub_403320(&var_44)
            result = arg1
        case 1
            *arg3
            char* lpFileName_1 = sub_603290(&var_44)
            
            if (*(lpFileName_1 + 0x14) u>= 0x10)
                lpFileName_1 = *lpFileName_1
            
            bool cond:0_1 = DeleteFileA(lpFileName_1) != 0
            *arg1 = 0x2f
            BOOL eax_5
            eax_5.b = cond:0_1
            arg1[1] = zx.d(eax_5.b)
            sub_403320(&var_44)
            result = arg1
        case 2
            *arg3
            char* lpExistingFileName = sub_603290(&var_2c)
            int32_t var_8_1 = 0
            *arg3
            char* lpNewFileName = sub_603290(&var_44)
            
            if (*(lpNewFileName + 0x14) u>= 0x10)
                lpNewFileName = *lpNewFileName
            
            if (*(lpExistingFileName + 0x14) u>= 0x10)
                lpExistingFileName = *lpExistingFileName
            
            bool cond:1_1 = CopyFileA(lpExistingFileName, lpNewFileName, 0) == 1
            *arg1 = 0x2f
            BOOL eax_8
            eax_8.b = cond:1_1
            arg1[1] = zx.d(eax_8.b)
            sub_403320(&var_44)
            sub_403320(&var_2c)
            result = arg1
        case 3
            *arg3
            char* eax_10 = sub_603290(&var_2c)
            void* esi_1 = *arg3
            int32_t* eax_11 = sub_603470(esi_1 + 0x70)
            int32_t* eax_12 = sub_603470(esi_1 + 0x60)
            int32_t* eax_13 = sub_603470(esi_1 + 0x50)
            int32_t* eax_14 = sub_603470(esi_1 + 0x40)
            int32_t* eax_15 = sub_603470(esi_1 + 0x30)
            int32_t* eax_16 = sub_603470(esi_1 + 0x20)
            int32_t* eax_18 = sub_603470(*arg3 + 0x10)
            eax_19 =
                sub_6815f0(eax_18, eax_18, eax_10, eax_16, eax_15, eax_14, eax_13, eax_12, eax_11)
        label_47860b:
            int32_t ecx_20
            ecx_20.b = eax_19 != 0
            arg1[1] = ecx_20
            *arg1 = 0x2f
            sub_403320(&var_2c)
            result = arg1
        case 4
            *arg3
            char* eax_20 = sub_603290(&var_2c)
            void* esi_4 = *arg3
            int32_t* eax_21 = sub_603470(esi_4 + 0x70)
            int32_t* eax_22 = sub_603470(esi_4 + 0x60)
            int32_t* eax_23 = sub_603470(esi_4 + 0x50)
            int32_t* eax_24 = sub_603470(esi_4 + 0x40)
            int32_t* eax_25 = sub_603470(esi_4 + 0x30)
            int32_t* eax_26 = sub_603470(esi_4 + 0x20)
            int32_t* eax_28 = sub_603470(*arg3 + 0x10)
            eax_19 =
                sub_681750(eax_28, eax_28, eax_20, eax_26, eax_25, eax_24, eax_23, eax_22, eax_21)
            goto label_47860b
        case 5
            *arg3
            char* eax_29 = sub_603290(&var_2c)
            void* esi_6 = *arg3
            int32_t* eax_30 = sub_603470(esi_6 + 0x70)
            int32_t* eax_31 = sub_603470(esi_6 + 0x60)
            int32_t* eax_32 = sub_603470(esi_6 + 0x50)
            int32_t* eax_33 = sub_603470(esi_6 + 0x40)
            int32_t* eax_34 = sub_603470(esi_6 + 0x30)
            int32_t* eax_35 = sub_603470(esi_6 + 0x20)
            int32_t* eax_37 = sub_603470(*arg3 + 0x10)
            eax_19 =
                sub_6818b0(eax_37, eax_37, eax_29, eax_35, eax_34, eax_33, eax_32, eax_31, eax_30)
            goto label_47860b
        case 6
            *arg3
            eax_40 = sub_4788b0(sub_603290(&var_2c), sub_603470(*arg3 + 0x10))
        label_478736:
            *arg1 = 0x2f
            int32_t ecx_46
            ecx_46.b = eax_40 != 0
            arg1[1] = ecx_46
            sub_403320(&var_2c)
            result = arg1
        case 7
            *arg3
            eax_40 = sub_4788f0(sub_603290(&var_2c))
            goto label_478736
        case 8
            *arg3
            int32_t var_8_2 = 1
            eax_40 = sub_478910(sub_603290(&var_2c))
            goto label_478736
        case 9
            *arg3
            int32_t var_8_3 = 2
            eax_40 = sub_681140(sub_603290(&var_2c))
            goto label_478736
        case 0xa
            *arg3
            int32_t var_8_4 = 3
            eax_40 = sub_478990(sub_603290(&var_2c))
            goto label_478736
        case 0xb
            *arg3
            sub_603290(&var_2c)
            int32_t var_8_5 = 4
            eax_46 = sub_478a60(&var_38)
            var_8_5.b = 5
        label_4787dc:
            sub_601890(arg1, eax_46)
            sub_417070(&var_38)
            sub_403320(&var_2c)
            result = arg1
        case 0xc
            *arg3
            sub_603290(&var_2c)
            int32_t var_8_6 = 6
            eax_46 = sub_478a80(&var_38)
            var_8_6.b = 7
            goto label_4787dc
        case 0xd
            *arg3
            void var_5c
            sub_603290(&var_5c)
            int32_t var_8_7 = 8
            var_8_7.b = 9
            void var_84
            sub_601890(arg1, sub_478aa0(&var_84))
            sub_417070(&var_84)
            sub_403320(&var_5c)
            result = arg1
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
