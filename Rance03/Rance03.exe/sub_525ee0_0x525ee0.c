// 函数: sub_525ee0
// 地址: 0x525ee0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b8ba8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void** ebx = arg2
int32_t var_1c = 0
int32_t* var_18
sub_448e90(&var_18, ebx[4] + 1)
int32_t var_4 = 0

if (ebx[5] u>= 0x10)
    ebx = *ebx

int32_t* edi = var_18
int32_t var_14
void* esi_1 = var_14 - edi
sub_69d850(edi, ebx, esi_1, eax_2)
int32_t i = 0

if (esi_1 - 1 s> 0)
    do
        *(edi + i) -= 0x60
        i += 1
    while (i s< esi_1 - 1)

*(arg1 + 0x14) = 0xf
*(arg1 + 0x10) = 0
*arg1 = 0
void* ecx_1

if (*edi != 0)
    int32_t* ecx_2 = edi
    void* edx_1 = ecx_2 + 1
    
    do
        i.b = *ecx_2
        ecx_2 += 1
    while (i.b != 0)
    
    ecx_1 = ecx_2 - edx_1
else
    ecx_1 = nullptr

sub_402110(arg1, edi, ecx_1)
j__free(edi)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
