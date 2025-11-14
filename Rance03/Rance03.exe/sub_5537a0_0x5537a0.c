// 函数: sub_5537a0
// 地址: 0x5537a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c4f20
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3
int32_t edx_2
edx_2:eax_3 = muls.dp.d(0x66666667, *(arg1 + 0x3c) - *(arg1 + 0x38))
int32_t edx_3 = edx_2 s>> 3
int32_t edi_2 = (edx_3 u>> 0x1f) + edx_3

if (edi_2 s<= 0)
    eax_3.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_3

void* var_18
sub_448e90(&var_18, edi_2 * 0x58)
int32_t var_4 = 0
void* ebx = var_18
sub_59e480(arg1 + 0x34, ebx, *(arg1 + 0x14), *(arg1 + 0x128), *(arg1 + 0x129), 0, 1)
int32_t* ecx_4 = *(arg1 + 0x74)

if (ecx_4 != 0)
    (*(*ecx_4 + 4))(eax_2)
    *(arg1 + 0x74) = 0

int32_t eax_8 = (*(*arg2 + 0x54))(eax_2)
*(arg1 + 0x74) = eax_8

if (eax_8 != 0)
    int32_t var_24 = 0
    int32_t var_20_1 = 0
    int32_t var_1c_1 = 0
    var_4.b = 1
    sub_5538f0(&var_24)
    int32_t esi_1 = var_24
    arg2.b = (*(**(arg1 + 0x74) + 0xc))(edi_2, esi_1, (var_20_1 - esi_1) s>> 2, ebx).b != 0
    
    if (esi_1 != 0)
        j__free(esi_1)
else
    arg2.b = eax_8.b

if (ebx != 0)
    j__free(ebx)

eax_8.b = arg2.b
fsbase->NtTib.ExceptionList = ExceptionList
return eax_8
