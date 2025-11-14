// 函数: sub_686ff0
// 地址: 0x686ff0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b5db2
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_10 = arg1
int32_t __saved_edi
int32_t var_20 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = arg1
int32_t result = esi[1]
void* edi = arg2

if (edi u< result)
    arg1 = *esi

struct dpsound::CListHeaderTab::VTable** ebx

if (edi u>= result || arg1 u> edi)
    if (result == esi[2])
        int32_t* var_24_2 = arg1
        result = sub_6870c0(esi)
    
    ebx = esi[1]
    arg2 = ebx
    struct dpsound::CListHeaderTab::VTable** var_10_2 = ebx
    int32_t var_4_1 = 1
else
    if (result == esi[2])
        int32_t* var_24_1 = arg1
        result = sub_6870c0(esi)
    
    ebx = esi[1]
    edi = ((edi - arg1) & 0xffffffe0) + *esi
    arg2 = ebx
    struct dpsound::CListHeaderTab::VTable** var_10_1 = ebx
    int32_t var_4 = 0

if (ebx != 0)
    *ebx = &dpsound::CListHeaderTab::`vftable'
    ebx[6] = 0xf
    ebx[5] = 0
    ebx[1].b = 0
    sub_401ff0(&ebx[1], edi + 4, 0, 0xffffffff)
    result.b = *(edi + 0x1c)
    ebx[7].b = result.b

esi[1] += 0x20
fsbase->NtTib.ExceptionList = ExceptionList
return result
