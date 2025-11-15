// 函数: sub_44fe30
// 地址: 0x44fe30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72b190
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = data_7fcb4c

if (*(edi + 0x18) != 0 && *(edi + 0x14) != 0)
    sub_450170(edi)
    int32_t eax_5 = (*(**(edi + 4) + 0x54))(eax_2)
    int32_t eax_6 = (*(**(edi + 4) + 0x50))()
    struct common::CSize::VTable* const var_24_1 = &common::CSize::`vftable'
    int32_t var_20_1 = eax_6
    int32_t var_1c_1 = eax_5
    int32_t var_8_1 = 0
    int32_t var_38_1 = *(edi + 0xc)
    int32_t eax_8 = *(edi + 0x10)
    struct common::CRect::VTable* const var_40 = &common::CRect::`vftable'
    struct common::CPoint::VTable* const var_3c_1 = &common::CPoint::`vftable'
    int32_t var_34_1 = eax_8
    struct common::CSize::VTable* const var_30_1 = &common::CSize::`vftable'
    int32_t var_2c_1 = eax_6
    int32_t var_28_1 = eax_5
    var_8_1.b = 1
    void* esi_2 = *(edi + 0x18)
    
    if (*(esi_2 + 0x80) != 0 && sub_4502f0(esi_2, (*(edi + 0x14))[3], &var_40).b != 0)
        int32_t* ecx_6 = *(esi_2 + 0x80)
        int32_t* var_50_2 = ecx_6
        int32_t xmm1
        int32_t var_50_3 = xmm1
        (*(*ecx_6 + 0x2c))()
        int32_t eax_10
        eax_10.b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_10

struct _EXCEPTION_REGISTRATION_RECORD** eax_3
eax_3.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
