// 函数: sub_5d5df0
// 地址: 0x5d5df0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

struct IShaderParam::sealengine::CShaderParam::VTable* var_38
struct IShaderParam::sealengine::CShaderParam::VTable** ecx = &var_38
sub_5d6010(ecx)
int32_t* result
long double x87_r0

if (sub_5d6090(ecx, x87_r0, arg2, arg3, arg4, *(arg1 + 8)).b != 0
        && (*(**(arg1 + 4) + 0xd8))(arg3, arg2, &var_38).b != 0
        && sub_5d5e80(arg1, arg2, arg3).b != 0)
    char var_20
    
    if (var_20 == 0)
        result.b = 1
        return result
    
    result = (*(*arg3 + 0x30))()
    
    if (result != 0 && (*(*result + 0x2c))(6, 0, 0, 1).b != 0)
        result.b = 1
        return result

result.b = 0
return result
