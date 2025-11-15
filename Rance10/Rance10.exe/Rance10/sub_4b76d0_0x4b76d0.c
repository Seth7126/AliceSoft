// 函数: sub_4b76d0
// 地址: 0x4b76d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_732424
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* i_2 = arg1
arg1[1] = 1
arg1[2] = &partsengine::IEventObserver::`vftable'
int32_t ecx = neg.d(arg1)
*arg1 = &partsengine::CGUISpinBoxView::`vftable'{for `common::SuicideRefCounter<class partsengine::CGUIView>'}
arg1[2] = &partsengine::CGUISpinBoxView::`vftable'{for `partsengine::IEventObserver'}
arg1[3] = &partsengine::CEventSubject::`vftable'
arg1[4] = 0
arg1[5] = 0
arg1[6] = 0
arg1[7] = sbb.d(ecx, ecx, arg1 != 0) & &arg1[3]
__builtin_memset(&arg1[8], 0, 0x20)
struct common::SuicideRefCounter<class partsengine::CGUIView>::partsengine::CGUISpinBoxView::VTable*
    * var_34 = arg1
int32_t var_8_1 = 0
sub_4c2740(&arg1[0x10], arg2, arg3, arg4)
var_8_1.b = 1
arg1[0x28] = sub_4c2920(&arg1[0x10])
arg1[0x29] = sub_4c2920(&arg1[0x10])
arg1[0x2a] = sub_4c2920(&arg1[0x10])
arg1[0x2b] = 0
sub_4b4e10(&arg1[0x2c])
var_8_1.b = 2
void* esi = arg1[0x28]
arg1[0x57] = arg4
sub_4eec50(esi, 4, 1)
void* i_3 = data_7fcb68
void* esi_1 = *(esi + 0x74)
i_2 = i_3

if (*(i_3 + 4) != 0)
    (*(**(i_3 + 4) + 0x1c))(eax_2)
else
    int32_t* ecx_9 = data_7fcb88
    
    if (ecx_9 != 0)
        int32_t eax_10 = (**ecx_9)(0x75ff30)
        void* i_4 = i_2
        *(i_4 + 4) = eax_10
        
        if (eax_10 != 0)
            (*(**(i_4 + 4) + 0x1c))(eax_2)

if (*(esi_1 + 0x1b8) != 0)
    *(esi_1 + 0x1b8) = 0

*(arg1[0x29] + 0xa4) = 3
void* esi_2 = arg1[0x29]
sub_4eec50(esi_2, nullptr, 1)
void* eax_13 = *(esi_2 + 0x74)

if (*(eax_13 + 0x1fc) != 5)
    *(eax_13 + 0x1fc) = 5
    *(eax_13 + 0x218) = 1

int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_403490(&var_2c, 0x761dc8, 2)
var_8_1.b = 3
void* esi_3 = arg1[0x29]
sub_4eec50(esi_3, nullptr, 1)
sub_4dfcd0(*(esi_3 + 0x74) + 0xa4, &var_2c)
var_8_1.b = 2

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

*(arg1[0x2a] + 0xa4) = 9
void* esi_4 = arg1[0x2a]
sub_4eec50(esi_4, nullptr, 1)
void* eax_17 = *(esi_4 + 0x74)

if (*(eax_17 + 0x1fc) != 5)
    *(eax_17 + 0x1fc) = 5
    *(eax_17 + 0x218) = 1

int32_t var_18_1 = 0xf
int32_t var_1c_1 = 0
var_2c = 0
sub_403490(&var_2c, 0x761dcc, 2)
var_8_1.b = 4
void* esi_5 = arg1[0x2a]
sub_4eec50(esi_5, nullptr, 1)
sub_4dfcd0(*(esi_5 + 0x74) + 0xa4, &var_2c)
var_8_1.b = 2

if (var_18_1 u>= 0x10)
    sub_403160(var_2c.d, var_18_1 + 1, 1)

*(arg1 + 0x3a) = 1
int32_t ecx_22 = neg.d(arg1)
*(arg1 + 0x36) = 1
arg1[0xe].b = 1
void* i = sbb.d(ecx_22, ecx_22, arg1 != 0) & &arg1[2]
i_2 = i

if (i != 0)
    int32_t eax_21 = arg1[0x13]
    int32_t* edx_1 = arg1[0x12]
    
    if (edx_1 == eax_21)
        sub_42ccf0(&arg1[0x12], &i_2)
    else
        while (*edx_1 != i)
            edx_1 = &edx_1[1]
            
            if (edx_1 == eax_21)
                break
        
        if (edx_1 == eax_21)
            sub_42ccf0(&arg1[0x12], &i_2)

void* i_1

if (arg4 == 0)
    i_1 = nullptr
else
    i_1 = arg4 + 8

i_2 = i_1

if (i_1 != 0)
    int32_t edx_2 = arg1[5]
    int32_t* esi_6 = arg1[4]
    
    if (esi_6 == edx_2)
        sub_42ccf0(&arg1[4], &i_2)
    else
        while (*esi_6 != i_1)
            esi_6 = &esi_6[1]
            
            if (esi_6 == edx_2)
                break
        
        if (esi_6 == edx_2)
            sub_42ccf0(&arg1[4], &i_2)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg1
