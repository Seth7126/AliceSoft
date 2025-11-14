// 函数: sub_693520
// 地址: 0x693520
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6d1898
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_3c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = arg2
int32_t var_24 = 0
void* esi = arg5
int32_t var_4 = 0
int32_t* arg_10

if (edi != arg4 && esi != arg6)
    bool cond:0_1
    
    do
        int32_t* ecx = &arg_10
        
        if (*(esi + 0x40) s>= *(edi + 0x40))
            sub_693750(ecx, edi)
            edi += 0x44
            cond:0_1 = edi != arg4
        else
            sub_693750(ecx, esi)
            esi += 0x44
            cond:0_1 = esi != arg6
    while (cond:0_1)

int32_t var_44 = 0
int32_t var_40_3 = arg8
int32_t* var_20
int32_t* eax_5 = sub_68f150(arg8, edi, &var_20, arg4, nullptr, 0, 0)
int32_t* edi_1 = var_20
int32_t eax_6 = eax_5[4]

if (edi_1 != 0)
    int32_t var_18
    
    if (edi_1 != var_18)
        do
            (**edi_1)(0)
            edi_1 = &edi_1[0x11]
        while (edi_1 != var_18)
        
        edi_1 = var_20
    
    j__free(edi_1)

int32_t var_44_1 = 0
int32_t var_40_5 = eax_6
sub_68f150(eax_6, esi, arg3, arg6, nullptr, 0, 0)
int32_t var_4_1 = 0xffffffff
int32_t* esi_1 = arg_10

if (esi_1 != 0)
    if (esi_1 != arg7)
        do
            (**esi_1)(0)
            esi_1 = &esi_1[0x11]
        while (esi_1 != arg7)
        
        esi_1 = arg_10
    
    j__free(esi_1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg3
