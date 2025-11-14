// 函数: sub_4922c0
// 地址: 0x4922c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bb428
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_2c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_493690(arg1 + 0x38)
int32_t* ebx = nullptr
int32_t edi = 0
int32_t* var_18 = nullptr
int32_t var_14 = 0
int32_t var_10 = 0
int32_t var_4 = 0
struct _EXCEPTION_REGISTRATION_RECORD** result = *(arg1 + 0x70)
void* ecx_1 = result[8]

if (ecx_1 != 0)
    result = sub_487590(ecx_1, &var_18)
    edi = var_14
    ebx = var_18

int32_t* esi = ebx

if (ebx != edi)
    do
        result = *(arg1 + 0x70)
        void* ecx_2 = result[0x3c]
        
        if (ecx_2 != 0)
            result = sub_490ed0(ecx_2, esi)
        
        esi = &esi[6]
    while (esi != edi)

if (ebx != 0)
    int32_t* esi_1 = ebx
    
    if (ebx != edi)
        do
            if (esi_1[5] u>= 0x10)
                j__free(*esi_1)
            
            esi_1[5] = 0xf
            esi_1[4] = 0
            *esi_1 = 0
            esi_1 = &esi_1[6]
        while (esi_1 != edi)
    
    result = j__free(ebx)

fsbase->NtTib.ExceptionList = ExceptionList
return result
