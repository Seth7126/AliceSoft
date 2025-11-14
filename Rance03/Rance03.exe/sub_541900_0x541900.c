// 函数: sub_541900
// 地址: 0x541900
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b896b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_24 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct sealengine::CMotion::VTable** eax_3 = sub_69adc6(0x30)
struct sealengine::CMotion::VTable** var_10 = eax_3
int32_t var_4 = 0
struct sealengine::CMotion::VTable** ecx_1

if (eax_3 == 0)
    ecx_1 = nullptr
else
    ecx_1 = sub_54bce0(eax_3)

int32_t var_4_1 = 0xffffffff
void* edi = arg1 + 0x184
int32_t eax_5 = *(arg1 + 0x200)
void* ebx = arg1 + 0x14
*(arg1 + 0x164) = ecx_1
ecx_1[0xb] = eax_5
int32_t* result
int32_t ecx_3
int32_t edx
result, ecx_3, edx = sub_54be30(*(arg1 + 0x164), ebx, edi)

if (result.b != 0)
    result.b = 1
else
    if (*(edi + 0x14) u>= 0x10)
        edi = *edi
    
    if (*(ebx + 0x14) u>= 0x10)
        ebx = *ebx
    
    void* var_28_1 = edi
    sub_59f4e0(result, edx, ecx_3, 0x6e394c, ebx)
    sub_53a360(*(arg1 + 0x164))
    *(arg1 + 0x164) = 0
    result.b = 0

*(arg1 + 0x168) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
