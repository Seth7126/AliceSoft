// 函数: sub_5b8890
// 地址: 0x5b8890
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b39c2
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = arg1
int32_t result = esi[1]
void* edi = arg2

if (edi u< result)
    arg1 = *esi

int32_t* ecx_2

if (edi u>= result || arg1 u> edi)
    if (result == esi[2])
        int32_t* var_20_2 = arg1
        result = sub_5b8ce0(esi)
    
    ecx_2 = esi[1]
    arg2 = ecx_2
    int32_t* var_10_2 = ecx_2
    int32_t var_4_1 = 1
else
    if (result == esi[2])
        int32_t* var_20_1 = arg1
        result = sub_5b8ce0(esi)
    
    ecx_2 = esi[1]
    edi = ((edi - arg1) & 0xffffffe0) + *esi
    arg2 = ecx_2
    int32_t* var_10_1 = ecx_2
    int32_t var_4 = 0

if (ecx_2 != 0)
    *ecx_2 = *edi
    ecx_2[1] = *(edi + 4)
    ecx_2[7] = 0xf
    ecx_2[6] = 0
    ecx_2[2].b = 0
    result = sub_401ff0(&ecx_2[2], edi + 8, 0, 0xffffffff)

esi[1] += 0x20
fsbase->NtTib.ExceptionList = ExceptionList
return result
