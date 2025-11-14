// 函数: sub_476380
// 地址: 0x476380
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_4 = arg1
int32_t arg_4 = arg_4
float edi = 0f
EnterCriticalSection(arg1[0x24] + 4)
sub_42f3d0(&arg1[0x21], &var_4, &arg_4)
int32_t* eax_3 = var_4

if (eax_3 != arg1[0x21])
    edi = eax_3[5]

LeaveCriticalSection(arg1[0x24] + 4)

if (edi == 0)
    int32_t result
    result.b = 0
    return result

if ((*(**(edi i+ 4) + 0x48))() == 0)
    long double x87_r0
    int32_t xmm0_1 = sub_473f80(arg1[0x2e], x87_r0, edi)
    int32_t* ecx_4 = *(edi i+ 4)
    int32_t* var_1c_1 = ecx_4
    (*(*ecx_4 + 0x44))(0, xmm0_1, 0, 0xffffffff)

return (*(**(edi i+ 4) + 0x10))()
