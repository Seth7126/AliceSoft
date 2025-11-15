// 函数: sub_4aa800
// 地址: 0x4aa800
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_731821
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx = *(arg4 + 0x90)
int32_t edi = *(arg4 + 0x88)
int32_t ebx = *(arg4 + 0x8c)
void* ecx_1 = *(arg4 + 0x94)
int32_t ecx_2 = *(arg4 + 0x98)
int32_t ecx_3 = *(arg4 + 0x9c)
int32_t ecx_4 = *(arg4 + 0xa0)
int32_t ecx_5 = *(arg4 + 0xa4)
int32_t ecx_6 = *(arg4 + 0xa8)
int32_t eax_4 = *(arg4 + 0xac)
*(arg1 + 0xc4) = arg1[0xc].d
sub_4d6ec0(*(arg2 + 0x130), &arg1[0xc])
sub_4aae20(arg1[0xc].d, *(arg1 + 0xc4))
int32_t ecx_10 = *(arg1 + 0xc4)

for (void* i = arg1[0xc].d; i != ecx_10; i += 0x28)
    if (ecx_6 == 0)
        *i = 0
    
    if (eax_4 == 0)
        *(i + 1) = 0
    
    if (edi == 0)
        *(i + 0x10) = edi
        *(i + 0xc) = edi
    
    if (ebx == 0)
        *(i + 8) = ebx
        *(i + 4) = ebx
    
    if (ecx_1 == 0)
        *(i + 0x24) = ecx_1
        *(i + 0x20) = ecx_1
        *(i + 0x1c) = ecx_1
    
    if (ecx_2 == 0)
        *(i + 0x18) = 0x3f800000
        *(i + 0x14) = 0x3f800000

int32_t var_8_1 = 0
void var_f4
sub_526e80(arg1, sub_526a90(&var_f4, arg3))
int32_t var_8_2 = 1
int32_t* var_3c

if (var_3c != 0)
    int32_t edx_4 = var_3c[1]
    var_3c[1] -= 1
    (**var_3c)(edx_4 - 1)
    int32_t var_3c_1 = 0

int32_t* var_40

if (var_40 != 0)
    (*(*var_40 + 4))(eax_2)
    int32_t var_40_1 = 0

int32_t* var_38

if (var_38 != 0)
    int32_t esi_2 = var_38[1]
    var_38[1] -= 1
    (**var_38)(esi_2 - 1)

int32_t var_8_3 = 0xffffffff
void var_14c
int128_t* result =
    sub_527670(arg1, sub_4aac70(arg1, &var_14c), ecx != 0, ecx_3 != 0, ecx_4 != 0, ecx_5 != 0)
fsbase->NtTib.ExceptionList = ExceptionList
return result
