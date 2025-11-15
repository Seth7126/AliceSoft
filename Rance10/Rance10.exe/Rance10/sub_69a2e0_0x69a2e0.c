// 函数: sub_69a2e0
// 地址: 0x69a2e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7484e0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
void var_38
void arg_8
std::basic_string<uint16_t,struct std::char_traits<uint16_t>,class std::allocator<uint16_t> >::basic_string<uint16_t,struct std::char_traits<uint16_t>,class std::allocator<uint16_t> >(
    &var_38, &arg_8)
int32_t var_30 = arg4
void* var_1c
void** result = sub_69aae0(arg4, arg2, &var_1c, var_38)
void* edx_1 = *result
int32_t ecx_2 = result[1]
*result = nullptr
result[1] = 0
int32_t* esi = arg1[1]
arg1[1] = ecx_2
*arg1 = edx_1
var_8_1.b = 1

if (esi != 0)
    bool cond:0_1 = esi[1] != 1
    result = esi[1]
    esi[1] -= 1
    
    if (not(cond:0_1))
        (**esi)(eax_2)
        bool cond:2_1 = esi[2] != 1
        result = esi[2]
        esi[2] -= 1
        
        if (not(cond:2_1))
            result = (*(*esi + 4))()

var_8_1.b = 2
int32_t* var_18

if (var_18 != 0)
    bool cond:1_1 = var_18[1] != 1
    result = var_18[1]
    var_18[1] -= 1
    
    if (not(cond:1_1))
        (**var_18)(eax_2)
        bool cond:3_1 = var_18[2] != 1
        result = var_18[2]
        var_18[2] -= 1
        
        if (not(cond:3_1))
            result = (*(*var_18 + 4))()

if (arg2 != 2)
    var_8_1.b = 3
    int32_t var_34_1 = 0
    int32_t* var_30_1 = nullptr
    int32_t* ebx_1 = arg1[1]
    void* ecx_7 = *arg1
    
    if (ebx_1 != 0)
        ebx_1[2] += 1
    
    if (var_30_1 != 0)
        bool cond:5_1 = var_30_1[2] != 1
        var_30_1[2]
        var_30_1[2] -= 1
        
        if (not(cond:5_1))
            (*(*var_30_1 + 4))(var_34_1, var_30_1, eax_2)
    
    var_8_1.b = 0
    result = sub_698540(*arg1, ecx_7, ebx_1)

int32_t var_8_2 = 4

if (arg3 != 0)
    bool cond:4_1 = arg3[1] != 1
    result = arg3[1]
    arg3[1] -= 1
    
    if (not(cond:4_1))
        result = (**arg3)(eax_2)
        int32_t edi_1 = arg3[2]
        arg3[2] -= 1
        
        if (edi_1 == 1)
            result = (*(*arg3 + 4))()

fsbase->NtTib.ExceptionList = ExceptionList
return result
