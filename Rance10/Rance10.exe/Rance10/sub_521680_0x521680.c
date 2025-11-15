// 函数: sub_521680
// 地址: 0x521680
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_738120
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_4c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3 = sub_522930(arg1, arg1[0x85], arg1[0x44])

if (arg1[0x44] != eax_3)
    int32_t var_50_1 = arg1[0x46]
    arg1[0x44] = eax_3
    sub_4f7c10(&arg1[0x33])
    arg1[0x87].b = 1

int32_t eax_4 = sub_522930(arg1, arg1[0x86], arg1[0x45])

if (arg1[0x45] != eax_4)
    int32_t var_50_3 = arg1[0x46]
    arg1[0x45] = eax_4
    sub_4f7c10(&arg1[0x33])
    arg1[0x87].b = 1

int32_t ecx_4 = arg1[0x44] - arg1[0x45]
int32_t var_34
int32_t* eax_5 = &var_34
var_34 = ecx_4
void* ecx_5 = arg1[0x2a]
int32_t var_30

if (ecx_4 s<= 0)
    eax_5 = &var_30

var_30 = 0
bool edx = *eax_5 != 0
eax_5.b = arg1[0x42] != 0
*(ecx_5 + 0xaa) = eax_5.b
eax_5.b = arg1[0x43] != 0
*(arg1[0x2b] + 0xaa) = eax_5.b
*(arg1[0x2c] + 0xaa) = edx
void* result
result.b = *(arg2 + 0xa8)

if (result.b != 0)
    sub_521990(arg1)
    int32_t* var_74 = &std::_Func_impl<class <lambda_d8f41ae24a94bfefa06fbdb1658a6828>,class std::allocator<int32_t>,void,class partsengine::CGUIComponent*>::`vftable'{for `std::_Func_base<void, class partsengine::CGUIComponent*>'}
    int32_t* var_70_1 = arg1
    int32_t** var_50_4 = &var_74
    sub_4c2b20(&arg1[0x11], var_74)
    void* var_2c
    char* eax_7 = sub_4ee1f0(arg1[0x88], &var_2c, 3)
    int32_t var_8_1 = 0
    char* ecx_11 = arg1[0x2a] + 0x200
    
    if (ecx_11 != eax_7)
        sub_403590(ecx_11, eax_7, 0, 0xffffffff)
    
    int32_t var_8_2 = 0xffffffff
    void* var_18
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c, var_18 + 1, 1)
    
    char* eax_10 = sub_4ee1f0(arg1[0x88], &var_2c, 3)
    int32_t var_8_3 = 1
    char* ecx_14 = arg1[0x2b] + 0x200
    
    if (ecx_14 != eax_10)
        sub_403590(ecx_14, eax_10, 0, 0xffffffff)
    
    int32_t var_8_4 = 0xffffffff
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c, var_18 + 1, 1)
    
    float xmm0_1 = arg1[0x32]
    float temp1_1 = arg1[0x47]
    xmm0_1 - temp1_1
    int32_t edx_1 = arg1[0x46]
    result:1.b = (xmm0_1 == temp1_1 ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, temp1_1) ? 1 : 0) << 2
        | (xmm0_1 < temp1_1 ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    
    if (p_2)
        result.b = 0
    else
        result.b = 1
    
    if (arg1[0x31] != edx_1 || result.b == 0)
        int32_t eax_12 = 0
        int32_t ecx_16 = arg1[0x44] - arg1[0x45]
        struct partsengine::IEventArgs::partsengine::SScrollEventArgs::VTable* const var_40 =
            &partsengine::SScrollEventArgs::`vftable'{for `partsengine::IEventArgs'}
        
        if (ecx_16 s> 0)
            eax_12 = ecx_16
        
        int32_t var_3c_1 = edx_1
        int32_t var_38_1 = eax_12
        sub_4cbd50(&arg1[4], &var_40, 0)
        arg1[0x31] = arg1[0x46]
        result = arg1[0x47]
        arg1[0x32] = result

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
