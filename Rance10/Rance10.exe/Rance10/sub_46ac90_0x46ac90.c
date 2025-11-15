// 函数: sub_46ac90
// 地址: 0x46ac90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_c = arg1
int32_t var_1c = 1
var_c.b = 0x2e
void* result
int32_t ecx_2

if (sub_42cb30(arg2, &var_c, arg1) == 0xffffffff)
    result, ecx_2 = sub_46eb40(arg1 + 8, arg2)
else
    result, ecx_2 =
        Concurrency::details::_StructuredTaskCollection::~_StructuredTaskCollection(arg1 + 8)

result.b = result != 0

if (result.b == 0)
    return result

int32_t var_1c_2 = 1
var_c.b = 0x2e

if (sub_42cb30(arg2, &var_c, ecx_2) != 0xffffffff)
    return sub_46ad20(arg1, sub_46aa60(arg1, arg2))

return sub_46e880(arg1 + 8, arg2)
