// 函数: sub_4d7fb0
// 地址: 0x4d7fb0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72a8d6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = arg1
void* var_18 = edi
*(edi + 0x38) = 3
*(edi + 0x30) = 1
int32_t ebx = 0
*(edi + 0x34) = 0
int32_t* esi = *(edi + 0x10)
uint32_t ecx_3 = (*(edi + 0x14) - esi + 3) u>> 2

if (esi u> *(edi + 0x14))
    ecx_3 = 0

uint32_t var_14 = ecx_3

if (ecx_3 != 0)
    do
        int32_t* edi_1 = *esi
        
        if (edi_1 != 0)
            Concurrency::details::AllocatorBucket::~AllocatorBucket(edi_1)
            int32_t var_2c_1 = 0x6c
            operator new(edi_1)
            ecx_3 = var_14
        
        ebx += 1
        esi = &esi[1]
    while (ebx != ecx_3)
    
    edi = var_18

*(edi + 0x14) = *(edi + 0x10)
int32_t var_8_1 = 0
int32_t ecx_6 = sub_4d8cc0(*(*(edi + 0x28) + 4))
void* eax_5 = *(edi + 0x28)
*(eax_5 + 4) = eax_5
int32_t* eax_6 = *(edi + 0x28)
*eax_6 = eax_6
void* eax_7 = *(edi + 0x28)
int32_t var_8_2 = 0xffffffff
void* var_2c_3 = var_18
*(eax_7 + 8) = eax_7
*(edi + 0x2c) = 0
int32_t var_30_2 = ecx_6
sub_417d50(*(edi + 0x1c), *(edi + 0x20))
int32_t result = *(edi + 0x1c)
*(edi + 0x20) = result
int32_t* ecx_8 = *(edi + 8)

if (ecx_8 != 0)
    result = (*(*ecx_8 + 4))(eax_2)
    *(edi + 8) = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
