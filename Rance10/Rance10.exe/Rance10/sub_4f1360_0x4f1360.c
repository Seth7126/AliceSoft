// 函数: sub_4f1360
// 地址: 0x4f1360
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72a556
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::CGUIComponentList::VTable** i_1 = arg1
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &partsengine::CGUIComponentList::`vftable'
sub_4f1490(arg1)
int32_t* esi = arg1[7]
struct partsengine::CGUIComponentList::VTable** i = *esi
i_1 = i

for (; i != esi; i = i_1)
    int32_t* ecx = i[5]
    
    if (ecx != 0)
        (**ecx)(1)
    
    sub_429080(&i_1)

sub_403f90(&arg1[0xb])
int32_t* eax_4 = arg1[7]
int32_t* var_28 = eax_4
sub_42e2e0(&arg1[7], &i_1, *eax_4)
sub_403160(arg1[7], 1, 0x18)
arg1[4] = &partsengine::CAlphaClipperManager::`vftable'
int32_t var_8_1 = 0
sub_42e7b0(arg1[5][1].vFunc_0)
void* eax_6 = arg1[5]
*(eax_6 + 4) = eax_6
int32_t* eax_7 = arg1[5]
*eax_7 = eax_7
void* eax_8 = arg1[5]
*(eax_8 + 8) = eax_8
arg1[6] = 0
int32_t* eax_9 = arg1[5]
int32_t* var_28_2 = eax_9
sub_4602e0(&arg1[5], &i_1, *eax_9)
int32_t result = sub_403160(arg1[5], 1, 0x18)
fsbase->NtTib.ExceptionList = ExceptionList
return result
