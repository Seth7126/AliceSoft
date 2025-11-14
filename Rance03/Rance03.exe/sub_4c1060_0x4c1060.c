// 函数: sub_4c1060
// 地址: 0x4c1060
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6be1a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_74
int32_t eax_2 = __security_cookie ^ &var_74
int32_t __saved_edi
int32_t var_88 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t i = (arg2 - arg3) s/ 0x5c

if (i s> 1)
    char* edi_1 = arg2 - 0x4c
    var_74 = 0x4c - arg3
    
    do
        int32_t var_6c = *(edi_1 - 0x10)
        int32_t var_68_1 = *(edi_1 - 0xc)
        void var_64
        sub_4bf370(&var_64, &edi_1[0xfffffff8])
        int32_t var_4 = 0
        *(edi_1 - 0x10) = *arg3
        *(edi_1 - 0xc) = arg3[1]
        *(edi_1 - 8) = arg3[2]
        *(edi_1 - 4) = arg3[3]
        
        if (edi_1 != &arg3[4])
            sub_401ff0(edi_1, &arg3[4], 0, 0xffffffff)
        
        if (&edi_1[0x18] != &arg3[0xa])
            sub_401ff0(&edi_1[0x18], &arg3[0xa], 0, 0xffffffff)
        
        void* eax_14
        eax_14.b = arg3[0x10].b
        edi_1[0x30] = eax_14.b
        sub_4bf960(&edi_1[0x34], &arg3[0x11])
        sub_4a6db0(&edi_1[0x40], &arg3[0x14])
        int32_t* eax_20 = (0xfffffff0 - arg3 + edi_1) s/ 0x5c
        sub_4c15f0(eax_20, nullptr, arg3, eax_20, &var_6c, arg4)
        int32_t var_4_1 = 0xffffffff
        sub_4b7cf0(&var_64)
        edi_1 -= 0x5c
        i = (var_74 + edi_1) s/ 0x5c
    while (i s> 1)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_74)
return i
