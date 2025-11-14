// 函数: sub_492190
// 地址: 0x492190
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6bb3f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_3c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = arg1
void* var_28 = esi
sub_4932b0(esi + 0x38)
int32_t* ebx = nullptr
int32_t ebp_1 = 0
int32_t* var_24 = nullptr
int32_t var_20 = 0
int32_t var_1c = 0
int32_t var_c_1 = 0
struct _EXCEPTION_REGISTRATION_RECORD** result = *(esi + 0x70)
void* ecx_1 = result[8]

if (ecx_1 != 0)
    result = sub_487510(ecx_1, &var_24)
    ebp_1 = var_20
    ebx = var_24

int32_t* edi = ebx

if (ebx != ebp_1)
    do
        result = *(esi + 0x70)
        void* ebx_1 = result[0x3c]
        
        if (ebx_1 != 0)
            for (void** i = *(ebx_1 + 0x1c); i != *(ebx_1 + 0x20); i = &i[1])
                result = sub_48e260(*i, edi)
            
            esi = var_28
        
        edi = &edi[6]
    while (edi != ebp_1)
    
    ebx = var_24

if (ebx != 0)
    int32_t* esi_1 = ebx
    
    if (ebx != ebp_1)
        do
            if (esi_1[5] u>= 0x10)
                j__free(*esi_1)
            
            esi_1[5] = 0xf
            esi_1[4] = 0
            *esi_1 = 0
            esi_1 = &esi_1[6]
        while (esi_1 != ebp_1)
    
    result = j__free(ebx)

fsbase->NtTib.ExceptionList = ExceptionList
var_4
return result
